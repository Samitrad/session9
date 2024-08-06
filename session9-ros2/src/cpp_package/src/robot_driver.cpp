#include "cpp_package/robot_driver.hpp"

RobotDriver::RobotDriver()
: Node("robot_driver"),
  target_distance_(0.5),
  stop_distance_(0.6),
  safety_margin_(0.2),
  max_speed_(0.2),
  rotation_speed_(0.5),
  rotation_angle_(M_PI / 2),
  is_rotating_(false),
  initial_angle_(0.0),
  current_yaw_(0.0)
{
    cmd_vel_publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);

    scan_subscription_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
        "/scan", 10, std::bind(&RobotDriver::scan_callback, this, std::placeholders::_1));

    odom_subscription_ = this->create_subscription<geometry_msgs::msg::PoseWithCovarianceStamped>(
        "/odometry/filtered", 10, std::bind(&RobotDriver::odom_callback, this, std::placeholders::_1));

    RCLCPP_INFO(this->get_logger(), "Robot Driver Node Initialized");
}

void RobotDriver::scan_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
{
    double front_distance = *std::min_element(msg->ranges.begin(), msg->ranges.begin() + 10);
    double left_distance = *std::min_element(msg->ranges.begin() + 45, msg->ranges.begin() + 135);
    double right_distance = *std::min_element(msg->ranges.end() - 135, msg->ranges.end() - 45);

    RCLCPP_INFO(this->get_logger(), "Front Distance: %f, Left Distance: %f, Right Distance: %f", front_distance, left_distance, right_distance);

    if (front_distance < stop_distance_ + safety_margin_) {
        if (!is_rotating_) {
            is_rotating_ = true;
            initial_angle_ = current_yaw_;
            twist_.linear.x = 0.0;
            twist_.angular.z = rotation_speed_;
            cmd_vel_publisher_->publish(twist_);
        } else {
            if (check_rotation()) {
                twist_.angular.z = 0.0;
                cmd_vel_publisher_->publish(twist_);
                is_rotating_ = false;
            }
        }
    } else {
        if (is_rotating_) {
            twist_.angular.z = 0.0;
            cmd_vel_publisher_->publish(twist_);
            is_rotating_ = false;
        }
        twist_.linear.x = max_speed_;
        twist_.angular.z = 0.0;
        cmd_vel_publisher_->publish(twist_);
    }
}

void RobotDriver::odom_callback(const geometry_msgs::msg::PoseWithCovarianceStamped::SharedPtr msg)
{
    auto [roll, pitch, yaw] = quaternion_to_euler(
        msg->pose.pose.orientation.x,
        msg->pose.pose.orientation.y,
        msg->pose.pose.orientation.z,
        msg->pose.pose.orientation.w);
    current_yaw_ = yaw;
}

bool RobotDriver::check_rotation()
{
    double delta_angle = current_yaw_ - initial_angle_;
    if (std::abs(delta_angle) > M_PI) {
        delta_angle -= 2 * M_PI * std::round(delta_angle / (2 * M_PI));
    }
    return std::abs(delta_angle) >= rotation_angle_;
}

std::tuple<double, double, double> RobotDriver::quaternion_to_euler(double x, double y, double z, double w)
{
    double siny_cosp = 2 * (w * z + x * y);
    double cosy_cosp = 1 - 2 * (y * y + z * z);
    double yaw = std::atan2(siny_cosp, cosy_cosp);
    return {0.0, 0.0, yaw};
}

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RobotDriver>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
