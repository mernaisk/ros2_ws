import rosbag2_py
import pandas as pd
import matplotlib.pyplot as plt
from rclpy.serialization import deserialize_message
from rosidl_runtime_py.utilities import get_message

# --- CONFIG ---
bag_path = "/home/pi2/ros2_ws/data1"  # Adjust to your .db3 bag path

# --- READ ROSBAG ---
reader = rosbag2_py.SequentialReader()
storage_options = rosbag2_py.StorageOptions(uri=bag_path, storage_id="sqlite3")
converter_options = rosbag2_py.ConverterOptions()
reader.open(storage_options, converter_options)

topic_type_map = {t.name: t.type for t in reader.get_all_topics_and_types()}

# --- LOAD /amcl_pose MESSAGES ---
pose_data = []
while reader.has_next():
    topic, msg_data, t = reader.read_next()
    if topic != "/amcl_pose":
        continue
    msg = deserialize_message(msg_data, get_message(topic_type_map[topic]))
    pos = msg.pose.pose.position
    pose_data.append((pos.x, pos.y))

# --- CHECK ---
if not pose_data:
    print("No AMCL pose data found in bag.")
    exit(1)

# --- PLOT ---
xs, ys = zip(*pose_data)
plt.figure(figsize=(6, 6))
plt.plot(xs, ys, marker='o', markersize=2, label="Trajectory")
plt.xlabel("X position (m)")
plt.ylabel("Y position (m)")
plt.title("Robot Trajectory (AMCL Pose)")
plt.grid()
plt.axis('equal')
plt.legend()
plt.tight_layout()
plt.show()
