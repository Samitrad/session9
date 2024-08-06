import launch
import launch_ros.actions
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    turtlebot3_gazebo_launch_dir = get_package_share_directory('turtlebot3_gazebo')

    return launch.LaunchDescription([

         # Include the Gazebo launch file
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([
                turtlebot3_gazebo_launch_dir,
                '/launch/turtlebot3_dqn_stage1.launch.py'
            ])
        ),
        # Launch the Robot Driver Node
        launch_ros.actions.Node(
            package='cpp_package',
            executable='robot_driver',
            name='robot_driver',
            output='screen',
        ),
        
        # Launch the Wall Finder Service Node
        launch_ros.actions.Node(
            package='cpp_package',
            executable='wall_finder_service',
            name='wall_finder_service',
            output='screen',
        ),
        
        # Launch the Lap Time Action Server Node
        launch_ros.actions.Node(
            package='cpp_package',
            executable='lap_time_action_server',
            name='lap_time_action_server',
            output='screen',
        ),
        
        # Launch the Lap Time Action Client Node
        launch_ros.actions.Node(
            package='cpp_package',
            executable='lap_time_action_client',
            name='lap_time_action_client',
            output='screen',
        ),
        
       
    ])
