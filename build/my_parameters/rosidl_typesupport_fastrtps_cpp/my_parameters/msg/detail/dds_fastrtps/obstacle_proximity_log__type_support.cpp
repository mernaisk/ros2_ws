// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/obstacle_proximity_log__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_parameters/msg/detail/obstacle_proximity_log__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace my_parameters
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_serialize(
  const my_parameters::msg::ObstacleProximityLog & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: distance_zone
  cdr << ros_message.distance_zone;
  // Member: goal_status
  cdr << ros_message.goal_status;
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  // Member: turn_count
  cdr << ros_message.turn_count;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_parameters::msg::ObstacleProximityLog & ros_message)
{
  // Member: distance_zone
  cdr >> ros_message.distance_zone;

  // Member: goal_status
  cdr >> ros_message.goal_status;

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  // Member: turn_count
  cdr >> ros_message.turn_count;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
get_serialized_size(
  const my_parameters::msg::ObstacleProximityLog & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: distance_zone
  {
    size_t item_size = sizeof(ros_message.distance_zone);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: goal_status
  {
    size_t item_size = sizeof(ros_message.goal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);
  // Member: turn_count
  {
    size_t item_size = sizeof(ros_message.turn_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
max_serialized_size_ObstacleProximityLog(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: distance_zone
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: goal_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: turn_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_parameters::msg::ObstacleProximityLog;
    is_plain =
      (
      offsetof(DataType, turn_count) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ObstacleProximityLog__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_parameters::msg::ObstacleProximityLog *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleProximityLog__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_parameters::msg::ObstacleProximityLog *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleProximityLog__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_parameters::msg::ObstacleProximityLog *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleProximityLog__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ObstacleProximityLog(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ObstacleProximityLog__callbacks = {
  "my_parameters::msg",
  "ObstacleProximityLog",
  _ObstacleProximityLog__cdr_serialize,
  _ObstacleProximityLog__cdr_deserialize,
  _ObstacleProximityLog__get_serialized_size,
  _ObstacleProximityLog__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleProximityLog__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleProximityLog__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace my_parameters

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_my_parameters
const rosidl_message_type_support_t *
get_message_type_support_handle<my_parameters::msg::ObstacleProximityLog>()
{
  return &my_parameters::msg::typesupport_fastrtps_cpp::_ObstacleProximityLog__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_parameters, msg, ObstacleProximityLog)() {
  return &my_parameters::msg::typesupport_fastrtps_cpp::_ObstacleProximityLog__handle;
}

#ifdef __cplusplus
}
#endif
