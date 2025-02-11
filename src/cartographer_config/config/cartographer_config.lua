include "map_builder.lua"
include "trajectory_builder.lua"

options = {
  map_builder = MAP_BUILDER,
  trajectory_builder = TRAJECTORY_BUILDER,
  map_frame = "map",
  tracking_frame = "base_link",  
  published_frame = "base_link", 
  odom_frame = "odom",           
  provide_odom_frame = true,     
  use_odometry = false,          
  publish_frame_projected_to_2d = false,
  use_nav_sat = false,
  use_landmarks = false,
  num_laser_scans = 1,           
  num_multi_echo_laser_scans = 0,
  num_point_clouds = 0, 
  num_subdivisions_per_laser_scan = 1,
  rangefinder_sampling_ratio = 1.0,
  odometry_sampling_ratio = 1.0,
  fixed_frame_pose_sampling_ratio = 1.0,
  imu_sampling_ratio = 1.0,
  landmarks_sampling_ratio = 1.0,
  lookup_transform_timeout_sec = 0.2, 
  submap_publish_period_sec = 0.3,
  pose_publish_period_sec = 0.05,
  trajectory_publish_period_sec = 0.5, 
}

MAP_BUILDER.use_trajectory_builder_2d = true
TRAJECTORY_BUILDER_2D.min_range = 0.3
TRAJECTORY_BUILDER_2D.max_range = 16.0
TRAJECTORY_BUILDER_2D.missing_data_ray_length = 1.0

-- Enable IMU data usage and specify the correct IMU topic
TRAJECTORY_BUILDER_2D.use_imu_data = false  -- Enable IMU data usage
-- TRAJECTORY_BUILDER_2D.imu_topic = '/bno055/imu'  -- IMU topic

TRAJECTORY_BUILDER_2D.min_z = 0.0
TRAJECTORY_BUILDER_2D.max_z = 1.0

return options
