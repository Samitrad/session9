#ifndef WALL_FINDER_HPP
#define WALL_FINDER_HPP

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "action_package/srv/find_closest_wall.hpp"

class WallFinder : public rclcpp::Node {
public:
    WallFinder();

private:
    void handle_find_closest_wall(
        const std::shared_ptr<action_package::srv::FindClosestWall::Request> request,
        std::shared_ptr<action_package::srv::FindClosestWall::Response> response);
    float check_distance_to_wall();

    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_publisher_;
    rclcpp::Service<action_package::srv::FindClosestWall>::SharedPtr service_;
    float distance_to_wall_;
};

#endif // WALL_FINDER_HPP
