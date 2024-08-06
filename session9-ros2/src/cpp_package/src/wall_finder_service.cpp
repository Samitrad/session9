#include "cpp_package/wall_finder_service.hpp"
#include "geometry_msgs/msg/twist.hpp"

WallFinder::WallFinder()
: Node("wall_finder"), distance_to_wall_(1.0) {
    cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
    service_ = this->create_service<action_package::srv::FindClosestWall>(
        "find_closest_wall", std::bind(&WallFinder::handle_find_closest_wall, this, std::placeholders::_1, std::placeholders::_2));
}

void WallFinder::handle_find_closest_wall(
    const std::shared_ptr<action_package::srv::FindClosestWall::Request> request,
    std::shared_ptr<action_package::srv::FindClosestWall::Response> response) {
    RCLCPP_INFO(this->get_logger(), "Finding closest wall...");
    geometry_msgs::msg::Twist twist;
    bool distance_achieved = false;

    while (!distance_achieved) {
        twist.linear.x = 0.2;
        twist.angular.z = 0.0;
        cmd_vel_publisher_->publish(twist);

        float current_distance = check_distance_to_wall();

        if (current_distance <= distance_to_wall_) {
            distance_achieved = true;
            twist.linear.x = 0.0;
            twist.angular.z = 0.0;
            cmd_vel_publisher_->publish(twist);
            response->distance = current_distance;
            RCLCPP_INFO(this->get_logger(), "Closest wall found at %f meters", current_distance);
        }
        rclcpp::sleep_for(std::chrono::milliseconds(100));
    }
}

float WallFinder::check_distance_to_wall() {
    // Placeholder for actual sensor data
    return 1.0; // Replace with real distance sensor data
}

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<WallFinder>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
