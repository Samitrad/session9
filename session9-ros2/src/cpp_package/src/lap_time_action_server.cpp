#include "cpp_package/lap_time_action_server.hpp"

#include <chrono>
#include <cmath>
#include <mutex>
#include <thread>

using LapTime = action_package::action::LapTime;
using GoalHandleLapTime = rclcpp_action::ServerGoalHandle<LapTime>;

LapTimeServer::LapTimeServer() : Node("lap_time_server") {
    using namespace std::placeholders;

    // Create callback groups
    service_cb_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    subscription_cb_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
    timer_cb_group_ = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

    // Initialize action server
    action_server_ = rclcpp_action::create_server<LapTime>(
        this,
        "lap_time",
        std::bind(&LapTimeServer::handle_goal, this, _1, _2),
        std::bind(&LapTimeServer::handle_cancel, this, _1),
        std::bind(&LapTimeServer::handle_accepted, this, _1),
        rcl_action_server_get_default_options(),
        service_cb_group_
    );

    // Initialize odometry subscriber
    auto subscription_options = rclcpp::SubscriptionOptions();
    subscription_options.callback_group = subscription_cb_group_;
    subscriber_ = this->create_subscription<nav_msgs::msg::Odometry>(
        "/odom",
        10,
        std::bind(&LapTimeServer::odometry_callback, this, _1),
        subscription_options
    );

    // Initialize variables
    x_ = y_ = start_x_ = start_y_ = 2.0;
    feedback_msg_ = std::make_shared<LapTime::Feedback>();

    RCLCPP_INFO(this->get_logger(), "LapTime server started. Ready for requests.");
}

void LapTimeServer::odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg) {
    std::lock_guard<std::mutex> lock(odom_mutex_);
    x_ = msg->pose.pose.position.x;
    y_ = msg->pose.pose.position.y;
}

rclcpp_action::GoalResponse LapTimeServer::handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const LapTime::Goal> goal) {
    RCLCPP_INFO(this->get_logger(), "Received goal request.");
    (void)uuid;
    (void)goal;
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse LapTimeServer::handle_cancel(const std::shared_ptr<GoalHandleLapTime> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Received request to cancel goal.");
    (void)goal_handle;
    return rclcpp_action::CancelResponse::ACCEPT;
}

void LapTimeServer::handle_accepted(const std::shared_ptr<GoalHandleLapTime> goal_handle) {
    using namespace std::placeholders;
    std::thread{std::bind(&LapTimeServer::execute, this, _1), goal_handle}.detach();
}

void LapTimeServer::execute(const std::shared_ptr<GoalHandleLapTime> goal_handle) {
    RCLCPP_INFO(this->get_logger(), "Waiting for robot to reach starting point...");

    // Wait for the robot to reach the starting point
    while (rclcpp::ok() && !goal_handle->is_canceling() && !is_near_start_position()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

     if (goal_handle->is_canceling()) {
        auto result = std::make_shared<LapTime::Result>();
        result->total_time = (this->now() - start_time_).seconds(); 
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled.");
    }

    RCLCPP_INFO(this->get_logger(), "Robot reached starting point.");
    start_x_ = x_;
    start_y_ = y_;
    start_time_ = this->now(); 

    // Create timer to publish feedback
    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(500),
        [this, goal_handle]() { this->publish_elapsed_time(goal_handle); }, 
        timer_cb_group_
    );

    bool lap_completed = false;

    // Main execution loop
    while (rclcpp::ok() && !goal_handle->is_canceling()) {
        // Check if the robot is near the start position and if the lap has not been completed yet
        if (is_near_start_position() && !lap_completed && (this->now() - start_time_) > rclcpp::Duration(1, 0)) {
            auto post_check_duration = rclcpp::Duration(5, 0); // 5 seconds for additional verification
            auto check_start_time = this->now();
            while (rclcpp::ok() && !goal_handle->is_canceling() && (this->now() - check_start_time) < post_check_duration) {
                if (is_near_start_position()) {
                    auto result = std::make_shared<LapTime::Result>();
                    result->total_time = (this->now() - start_time_).seconds(); 
                    goal_handle->succeed(result);
                    RCLCPP_INFO(this->get_logger(), "Goal succeeded. Total lap time: %f", result->total_time);
                    lap_completed = true;
                    return;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    // Handle cancellation
    if (goal_handle->is_canceling()) {
        auto result = std::make_shared<LapTime::Result>();
        result->total_time = (this->now() - start_time_).seconds(); 
        goal_handle->canceled(result);
        RCLCPP_INFO(this->get_logger(), "Goal canceled.");
    }
}

void LapTimeServer::publish_elapsed_time(const std::shared_ptr<GoalHandleLapTime> goal_handle) {
    feedback_msg_->elapsed_time = (this->now() - start_time_).seconds(); 
    goal_handle->publish_feedback(feedback_msg_);
}

bool LapTimeServer::is_near_start_position() {
    std::lock_guard<std::mutex> lock(odom_mutex_);
    double distance = std::sqrt(std::pow(x_ - start_x_, 2) + std::pow(y_ - start_y_, 2));
    return distance < 0.5; 
}

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto server_node = std::make_shared<LapTimeServer>();
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(server_node);
    executor.spin();
    rclcpp::shutdown();
    return 0;
}
