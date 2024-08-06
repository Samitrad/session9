cmake_minimum_required(VERSION 3.5)
project(cpp_package)

# Find required packages
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(action_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(std_srvs REQUIRED)
find_package(rosidl_typesupport_cpp REQUIRED)
find_package(rosidl_default_runtime REQUIRED)
find_package(action_package REQUIRED)

include_directories(
  include
  ${rclcpp_INCLUDE_DIRS}
  ${rclcpp_action_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${sensor_msgs_INCLUDE_DIRS}
  ${nav_msgs_INCLUDE_DIRS}
  ${geometry_msgs_INCLUDE_DIRS}
  ${action_msgs_INCLUDE_DIRS}
  ${std_srvs_INCLUDE_DIRS}
  ${rosidl_typesupport_cpp_INCLUDE_DIRS}
  ${action_package_INCLUDE_DIRS}
)

# Define executables
add_executable(lap_time_action_server src/lap_time_action_server.cpp)
target_include_directories(lap_time_action_server PRIVATE include)
ament_target_dependencies(lap_time_action_server
  rclcpp
  rclcpp_action
  action_package
  action_msgs
  geometry_msgs
  sensor_msgs
  nav_msgs
  tf2
  tf2_ros
  rosidl_typesupport_cpp
)

add_executable(robot_driver src/robot_driver.cpp)
target_include_directories(robot_driver PRIVATE include)
ament_target_dependencies(robot_driver
  rclcpp
  std_srvs
  sensor_msgs
  geometry_msgs
  rosidl_typesupport_cpp
  action_package
)

add_executable(lap_time_action_client src/lap_time_action_client.cpp)
target_include_directories(lap_time_action_client PRIVATE include)
ament_target_dependencies(lap_time_action_client
  rclcpp
  rclcpp_action
  std_msgs
  action_msgs
  action_package
)

# Define the wall_finder_service executable
add_executable(wall_finder_service src/wall_finder_service.cpp)
target_include_directories(wall_finder_service PRIVATE include)
ament_target_dependencies(wall_finder_service
  rclcpp
  sensor_msgs
  std_srvs
  rosidl_typesupport_cpp
  action_package
)

install(TARGETS
  lap_time_action_server
  robot_driver
  lap_time_action_client
  wall_finder_service
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY include/
  DESTINATION include/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

ament_package()
