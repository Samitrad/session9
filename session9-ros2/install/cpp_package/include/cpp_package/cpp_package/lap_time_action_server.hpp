#ifndef CPP_PACKAGE__LAP_TIME_ACTION_SERVER_HPP_
#define CPP_PACKAGE__LAP_TIME_ACTION_SERVER_HPP_

#include <action_package/action/lap_time.hpp>
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include <mutex>
#include <chrono>

class LapTimeServer : public rclcpp::Node
{
public:
    LapTimeServer();

private:
    void odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const action_package::action::LapTime::Goal> goal);
    rclcpp_action::CancelResponse handle_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_package::action::LapTime>> goal_handle);
    void handle_accepted(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_package::action::LapTime>> goal_handle);
    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_package::action::LapTime>> goal_handle);
    void publish_elapsed_time(const std::shared_ptr<rclcpp_action::ServerGoalHandle<action_package::action::LapTime>> goal_handle);
    bool is_near_start_position();

    rclcpp_action::Server<action_package::action::LapTime>::SharedPtr action_server_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscriber_;
    rclcpp::CallbackGroup::SharedPtr service_cb_group_;
    rclcpp::CallbackGroup::SharedPtr subscription_cb_group_;
    rclcpp::CallbackGroup::SharedPtr timer_cb_group_;
    std::mutex odom_mutex_;
    double x_, y_, start_x_, start_y_;
    rclcpp::Time start_time_;
    std::shared_ptr<action_package::action::LapTime::Feedback> feedback_msg_;
    rclcpp::TimerBase::SharedPtr timer_;
};

#endif  // CPP_PACKAGE__LAP_TIME_ACTION_SERVER_HPP_
