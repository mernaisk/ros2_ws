from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

# Path to the EKF configuration file
config_file1 = os.path.join(
    get_package_share_directory('soft_robot_bringub'), 'config', 'smac_global_planner.yaml'
)

config_file2 = os.path.join(
    get_package_share_directory('soft_robot_bringub'), 'config', 'controller_server.yaml'
)
def generate_launch_description():
    return LaunchDescription([

        Node(
            package='nav2_planner',  # <-- corrected
            executable='planner_server',
            name='planner_server',
            output='screen',
            parameters=[config_file1]
        ),
        
        Node(
            package='nav2_bt_navigator',
            executable='bt_navigator',
            name='bt_navigator',
            output='screen',
            parameters=[{'use_sim_time': True}],
        ),
        
        Node(
            package='nav2_controller',
            executable='controller_server',
            name='controller_server',
            output='screen',
            parameters=[config_file2],
        ),

        Node(
            package='nav2_behaviors',
            executable='behavior_server',
            name='behavior_server',
            output='screen'
        ),

        Node(
            package='nav2_lifecycle_manager',
            executable='lifecycle_manager',
            name='lifecycle_manager_mapper',
            output='screen',
            parameters=[{
                'use_sim_time': True,
                'autostart': True,
                'node_names': ['planner_server', 'controller_server', 'bt_navigator', 'behavior_server']
            }]
        )
    ])
