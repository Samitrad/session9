import launch
import launch_ros.actions

def generate_launch_description():
    return launch.LaunchDescription([
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
