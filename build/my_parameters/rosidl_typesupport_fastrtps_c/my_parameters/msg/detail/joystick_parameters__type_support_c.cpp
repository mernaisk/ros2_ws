// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/joystick_parameters__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_parameters/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_parameters/msg/detail/joystick_parameters__struct.h"
#include "my_parameters/msg/detail/joystick_parameters__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JoystickParameters__ros_msg_type = my_parameters__msg__JoystickParameters;

static bool _JoystickParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JoystickParameters__ros_msg_type * ros_message = static_cast<const _JoystickParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_command
  {
    cdr << (ros_message->turn_command ? true : false);
  }

  // Field name: turn_angle
  {
    cdr << ros_message->turn_angle;
  }

  // Field name: position_command
  {
    cdr << (ros_message->position_command ? true : false);
  }

  // Field name: position_direction
  {
    cdr << ros_message->position_direction;
  }

  // Field name: velocity
  {
    cdr << ros_message->velocity;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  return true;
}

static bool _JoystickParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JoystickParameters__ros_msg_type * ros_message = static_cast<_JoystickParameters__ros_msg_type *>(untyped_ros_message);
  // Field name: turn_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->turn_command = tmp ? true : false;
  }

  // Field name: turn_angle
  {
    cdr >> ros_message->turn_angle;
  }

  // Field name: position_command
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_command = tmp ? true : false;
  }

  // Field name: position_direction
  {
    cdr >> ros_message->position_direction;
  }

  // Field name: velocity
  {
    cdr >> ros_message->velocity;
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_parameters
size_t get_serialized_size_my_parameters__msg__JoystickParameters(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JoystickParameters__ros_msg_type * ros_message = static_cast<const _JoystickParameters__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name turn_command
  {
    size_t item_size = sizeof(ros_message->turn_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_angle
  {
    size_t item_size = sizeof(ros_message->turn_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_command
  {
    size_t item_size = sizeof(ros_message->position_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_direction
  {
    size_t item_size = sizeof(ros_message->position_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity
  {
    size_t item_size = sizeof(ros_message->velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JoystickParameters__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_parameters__msg__JoystickParameters(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_parameters
size_t max_serialized_size_my_parameters__msg__JoystickParameters(
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

  // member: turn_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_angle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_command
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_direction
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enabled
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
    using DataType = my_parameters__msg__JoystickParameters;
    is_plain =
      (
      offsetof(DataType, enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JoystickParameters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_parameters__msg__JoystickParameters(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JoystickParameters = {
  "my_parameters::msg",
  "JoystickParameters",
  _JoystickParameters__cdr_serialize,
  _JoystickParameters__cdr_deserialize,
  _JoystickParameters__get_serialized_size,
  _JoystickParameters__max_serialized_size
};

static rosidl_message_type_support_t _JoystickParameters__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JoystickParameters,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_parameters, msg, JoystickParameters)() {
  return &_JoystickParameters__type_support;
}

#if defined(__cplusplus)
}
#endif
