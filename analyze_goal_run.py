import rosbag2_py
import pandas as pd
import matplotlib.pyplot as plt
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message
from math import sqrt

# Set the correct path to your bag
bag_path = "/home/pi2/ros2_ws/data1"  # Change if needed
topics_of_interest = ["/obstacle_log", "/amcl_pose"]

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

    if topic == "/obstacle_log":
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
df_obs = pd.DataFrame(obstacle_data)
df_pose = pd.DataFrame(pose_data)

# --- Analysis ---
# Find last 0 → 1 → 0 transition
starts = df_obs[(df_obs['goal_status'].shift(1) == 0) & (df_obs['goal_status'] == 1)]
ends = df_obs[(df_obs['goal_status'].shift(1) == 1) & (df_obs['goal_status'] == 0)]

if not starts.empty and not ends.empty:
    end_time = ends['time'].iloc[-1]
    start_time_candidates = starts[starts['time'] < end_time]
    if start_time_candidates.empty:
        raise ValueError("No start found before last end.")
    start_time = start_time_candidates['time'].iloc[-1]
else:
    raise ValueError("Could not find a valid 0→1→0 transition in goal_status.")

print(f"Start time: {start_time:.2f}s")
print(f"End time: {end_time:.2f}s")

# Filter data
obs_filtered = df_obs[(df_obs["time"] >= start_time) & (df_obs["time"] <= end_time)]
pose_filtered = df_pose[(df_pose["time"] >= start_time) & (df_pose["time"] <= end_time)]

# Plot distance_zone over time
if obs_filtered.empty:
    print("No obstacle_log data in the selected time window.")
else:
    plt.figure(figsize=(10, 4))
    plt.plot(obs_filtered["time"].to_numpy(), obs_filtered["distance_zone"].to_numpy(), label="Distance Zone")
    plt.xlabel("Time (s)")
    plt.ylabel("Distance Zone")
    plt.title("Distance Zone during Goal Active Period")
    plt.grid()
    plt.legend()
    plt.tight_layout()
    plt.show()

# Compute distance walked
total_distance = 0.0
for i in range(1, len(pose_filtered)):
    x1, y1 = pose_filtered.iloc[i - 1][["x", "y"]].to_numpy()
    x2, y2 = pose_filtered.iloc[i][["x", "y"]].to_numpy()
    total_distance += sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

duration = end_time - start_time
print(f"Total walked distance: {total_distance:.2f} meters")
print(f"Time taken: {duration:.2f} seconds")
