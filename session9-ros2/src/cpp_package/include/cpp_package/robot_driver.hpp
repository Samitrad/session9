#ifndef ROBOT_DRIVER_HPP
#define ROBOT_DRIVER_HPP

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include <cmath>

class RobotDriver : public rclcpp::Node {
public:
    RobotDriver();

private:
    void scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg);
    void odom_callback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg);
    bool check_rotation();
    std::tuple<double, double, double> quaternion_to_euler(double x, double y, double z, double w);

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_subscription_;
    rclcpp::Subscription<geometry_msgs::msg::PoseWithCovarianceStamped>::SharedPtr odom_subscription_;

    geometry_msgs::msg::Twist twist_;

    double target_distance_;
    double stop_distance_;
    double safety_margin_;
    double max_speed_;
    double rotation_speed_;
    double rotation_angle_;
    bool is_rotating_;
    double initial_angle_;
    double current_yaw_;
};

#endif // ROBOT_DRIVER_HPP
