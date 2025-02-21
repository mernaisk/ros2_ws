// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/joystick_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_parameters/msg/detail/joystick_parameters__struct.hpp"

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

namespace my_parameters
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_serialize(
  const my_parameters::msg::JoystickParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: turn_command
  cdr << (ros_message.turn_command ? true : false);
  // Member: turn_angle
  cdr << ros_message.turn_angle;
  // Member: position_command
  cdr << (ros_message.position_command ? true : false);
  // Member: position_direction
  cdr << ros_message.position_direction;
  // Member: velocity
  cdr << ros_message.velocity;
  // Member: enabled
  cdr << (ros_message.enabled ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_parameters::msg::JoystickParameters & ros_message)
{
  // Member: turn_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.turn_command = tmp ? true : false;
  }

  // Member: turn_angle
  cdr >> ros_message.turn_angle;

  // Member: position_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_command = tmp ? true : false;
  }

  // Member: position_direction
  cdr >> ros_message.position_direction;

  // Member: velocity
  cdr >> ros_message.velocity;

  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
get_serialized_size(
  const my_parameters::msg::JoystickParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: turn_command
  {
    size_t item_size = sizeof(ros_message.turn_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_angle
  {
    size_t item_size = sizeof(ros_message.turn_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_command
  {
    size_t item_size = sizeof(ros_message.position_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_direction
  {
    size_t item_size = sizeof(ros_message.position_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: velocity
  {
    size_t item_size = sizeof(ros_message.velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
max_serialized_size_JoystickParameters(
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


  // Member: turn_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_parameters::msg::JoystickParameters;
    is_plain =
      (
      offsetof(DataType, enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JoystickParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_parameters::msg::JoystickParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JoystickParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_parameters::msg::JoystickParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JoystickParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_parameters::msg::JoystickParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JoystickParameters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JoystickParameters(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JoystickParameters__callbacks = {
  "my_parameters::msg",
  "JoystickParameters",
  _JoystickParameters__cdr_serialize,
  _JoystickParameters__cdr_deserialize,
  _JoystickParameters__get_serialized_size,
  _JoystickParameters__max_serialized_size
};

static rosidl_message_type_support_t _JoystickParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JoystickParameters__callbacks,
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
get_message_type_support_handle<my_parameters::msg::JoystickParameters>()
{
  return &my_parameters::msg::typesupport_fastrtps_cpp::_JoystickParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_parameters, msg, JoystickParameters)() {
  return &my_parameters::msg::typesupport_fastrtps_cpp::_JoystickParameters__handle;
}

#ifdef __cplusplus
}
#endif
