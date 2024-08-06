# session9
## Overview

This ROS 2 package simulates a TurtleBot3 robot system where the robot can navigate, interact with a wall, and measure performance dynamically. The package includes:
1. A Robot Driver Node
2. A Wall Finder Service 
3. A Lap Time Action Server
4. A Lap Time Action Client

## Features

- **Robot Driver Node**: Drives the robot to follow a wall, adjusting its distance based on sensor data.
- **Wall Finder Service**: Controls the robot to find and approach the closest wall.
- **Lap Time Action Server**: Measures the time needed for the robot to complete one lap around the arena.
- **Lap Time Action Client**: Sends a goal to the Lap Time Action Server and handles feedback and results.
## Installation

### Prerequisites

Ensure you have the following installed:
- ROS 2 (Humble Hawksbill)
- TurtleBot3 packages
- Gazebo

### Building the Package

Clone the repository and build the package:

```bash
source /opt/ros/humble/setup.bash
mkdir -p ~/your_workspace/src
cd ~/your_workspace/src
git clone git@github.com:Samitrad/session9.git
cd ~/your_workspace/
colcon build
source install/setup.bash

Run the launch file to start all the nodes and Gazebo simulation:

ros2 launch cpp_package your_launch_file.launch.py
