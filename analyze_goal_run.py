import rosbag2_py
import pandas as pd
import matplotlib.pyplot as plt
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message
from math import sqrt

# --- Settings ---
bag_path = "/home/pi2/ros2_ws/data1"  # Change this to your bag folder path
use_obstacle_log = False  # Set to True if you have the /obstacle_log message type installed

# Open rosbag
reader = rosbag2_py.SequentialReader()
storage_options = rosbag2_py.StorageOptions(uri=bag_path, storage_id="sqlite3")
converter_options = rosbag2_py.ConverterOptions()
reader.open(storage_options, converter_options)

# Get topic types
topic_type_map = {topic.name: topic.type for topic in reader.get_all_topics_and_types()}

# Load messages
obstacle_data = []
pose_data = []

while reader.has_next():
    topic, msg_data, t = reader.read_next()
    t_sec = t / 1e9  # nanoseconds → seconds

    if topic == "/obstacle_log" and use_obstacle_log:
        msg = deserialize_message(msg_data, get_message(topic_type_map[topic]))
        obstacle_data.append({
            "time": t_sec,
            "goal_status": msg.goal_status,
            "distance_zone": msg.distance_zone
        })

    elif topic == "/amcl_pose":
        msg = deserialize_message(msg_data, get_message(topic_type_map[topic]))
        pos = msg.pose.pose.position
        pose_data.append({
            "time": t_sec,
            "x": pos.x,
            "y": pos.y
        })

# Convert to DataFrames
df_pose = pd.DataFrame(pose_data)
print(f"Total AMCL poses loaded: {len(df_pose)}")

if not df_pose.empty:
    print(f"Pose timestamp range: {df_pose['time'].min():.2f}s → {df_pose['time'].max():.2f}s")
else:
    print("No AMCL pose data found. Exiting.")
    exit(1)

# --- Goal timing from obstacle_log (if available) ---
if use_obstacle_log:
    df_obs = pd.DataFrame(obstacle_data)
    starts = df_obs[(df_obs['goal_status'].shift(1) == 0) & (df_obs['goal_status'] == 1)]
    ends = df_obs[(df_obs['goal_status'].shift(1) == 1) & (df_obs['goal_status'] == 0)]

    if not starts.empty and not ends.empty:
        end_time = ends['time'].iloc[-1]
        start_time_candidates = starts[starts['time'] < end_time]
        if start_time_candidates.empty:
            print("No matching start time found before last goal end.")
            start_time = df_pose['time'].min()
            end_time = df_pose['time'].max()
        else:
            start_time = start_time_candidates['time'].iloc[-1]
    else:
        print("Could not find valid goal transitions, falling back to full time range.")
        start_time = df_pose['time'].min()
        end_time = df_pose['time'].max()
else:
    print("Skipping obstacle_log analysis. Using full pose time range.")
    start_time = df_pose['time'].min()
    end_time = df_pose['time'].max()

# Filter pose data to time window
pose_filtered = df_pose[(df_pose["time"] >= start_time) & (df_pose["time"] <= end_time)]
print(f"Filtered poses: {len(pose_filtered)}")

if pose_filtered.empty:
    print("Filtered pose data is empty. Using all pose data.")
    pose_filtered = df_pose

# --- Plot trajectory ---
plt.figure(figsize=(6, 6))
plt.plot(pose_filtered["x"], pose_filtered["y"], marker='o', markersize=2, label="Trajectory")
plt.xlabel("X position (m)")
plt.ylabel("Y position (m)")
plt.title("Robot Trajectory")
plt.grid()
plt.axis('equal')
plt.legend()
plt.tight_layout()
plt.show()

# --- Plot distance zone (if available) ---
if use_obstacle_log and not df_obs.empty:
    obs_filtered = df_obs[(df_obs["time"] >= start_time) & (df_obs["time"] <= end_time)]
    if not obs_filtered.empty:
        plt.figure(figsize=(10, 4))
        plt.plot(obs_filtered["time"], obs_filtered["distance_zone"], label="Distance Zone")
        plt.xlabel("Time (s)")
        plt.ylabel("Distance Zone")
        plt.title("Distance Zone during Goal Active Period")
        plt.grid()
        plt.legend()
        plt.tight_layout()
        plt.show()
    else:
        print("No obstacle_log data in the selected time window.")

# --- Compute distance walked ---
total_distance = 0.0
for i in range(1, len(pose_filtered)):
    x1, y1 = pose_filtered.iloc[i - 1][["x", "y"]]
    x2, y2 = pose_filtered.iloc[i][["x", "y"]]
    total_distance += sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

duration = pose_filtered["time"].iloc[-1] - pose_filtered["time"].iloc[0]
print(f"Total walked distance: {total_distance:.2f} meters")
print(f"Time taken: {duration:.2f} seconds")
