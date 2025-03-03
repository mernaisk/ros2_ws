// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/stm32_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_parameters/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_parameters/msg/detail/stm32_data__struct.h"
#include "my_parameters/msg/detail/stm32_data__functions.h"
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


using _Stm32Data__ros_msg_type = my_parameters__msg__Stm32Data;

static bool _Stm32Data__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Stm32Data__ros_msg_type * ros_message = static_cast<const _Stm32Data__ros_msg_type *>(untyped_ros_message);
  // Field name: motor1_fr
  {
    cdr << ros_message->motor1_fr;
  }

  // Field name: motor2_fr
  {
    cdr << ros_message->motor2_fr;
  }

  // Field name: motor3_fr
  {
    cdr << ros_message->motor3_fr;
  }

  // Field name: motor1_fl
  {
    cdr << ros_message->motor1_fl;
  }

  // Field name: motor2_fl
  {
    cdr << ros_message->motor2_fl;
  }

  // Field name: motor3_fl
  {
    cdr << ros_message->motor3_fl;
  }

  // Field name: motor1_rr
  {
    cdr << ros_message->motor1_rr;
  }

  // Field name: motor2_rr
  {
    cdr << ros_message->motor2_rr;
  }

  // Field name: motor3_rr
  {
    cdr << ros_message->motor3_rr;
  }

  // Field name: motor1_rl
  {
    cdr << ros_message->motor1_rl;
  }

  // Field name: motor2_rl
  {
    cdr << ros_message->motor2_rl;
  }

  // Field name: motor3_rl
  {
    cdr << ros_message->motor3_rl;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  return true;
}

static bool _Stm32Data__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Stm32Data__ros_msg_type * ros_message = static_cast<_Stm32Data__ros_msg_type *>(untyped_ros_message);
  // Field name: motor1_fr
  {
    cdr >> ros_message->motor1_fr;
  }

  // Field name: motor2_fr
  {
    cdr >> ros_message->motor2_fr;
  }

  // Field name: motor3_fr
  {
    cdr >> ros_message->motor3_fr;
  }

  // Field name: motor1_fl
  {
    cdr >> ros_message->motor1_fl;
  }

  // Field name: motor2_fl
  {
    cdr >> ros_message->motor2_fl;
  }

  // Field name: motor3_fl
  {
    cdr >> ros_message->motor3_fl;
  }

  // Field name: motor1_rr
  {
    cdr >> ros_message->motor1_rr;
  }

  // Field name: motor2_rr
  {
    cdr >> ros_message->motor2_rr;
  }

  // Field name: motor3_rr
  {
    cdr >> ros_message->motor3_rr;
  }

  // Field name: motor1_rl
  {
    cdr >> ros_message->motor1_rl;
  }

  // Field name: motor2_rl
  {
    cdr >> ros_message->motor2_rl;
  }

  // Field name: motor3_rl
  {
    cdr >> ros_message->motor3_rl;
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
size_t get_serialized_size_my_parameters__msg__Stm32Data(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Stm32Data__ros_msg_type * ros_message = static_cast<const _Stm32Data__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor1_fr
  {
    size_t item_size = sizeof(ros_message->motor1_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor2_fr
  {
    size_t item_size = sizeof(ros_message->motor2_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor3_fr
  {
    size_t item_size = sizeof(ros_message->motor3_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor1_fl
  {
    size_t item_size = sizeof(ros_message->motor1_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor2_fl
  {
    size_t item_size = sizeof(ros_message->motor2_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor3_fl
  {
    size_t item_size = sizeof(ros_message->motor3_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor1_rr
  {
    size_t item_size = sizeof(ros_message->motor1_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor2_rr
  {
    size_t item_size = sizeof(ros_message->motor2_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor3_rr
  {
    size_t item_size = sizeof(ros_message->motor3_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor1_rl
  {
    size_t item_size = sizeof(ros_message->motor1_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor2_rl
  {
    size_t item_size = sizeof(ros_message->motor2_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor3_rl
  {
    size_t item_size = sizeof(ros_message->motor3_rl);
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

static uint32_t _Stm32Data__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_parameters__msg__Stm32Data(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_parameters
size_t max_serialized_size_my_parameters__msg__Stm32Data(
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

  // member: motor1_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor2_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor3_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor1_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor2_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor3_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor1_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor2_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor3_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor1_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor2_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor3_rl
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
    using DataType = my_parameters__msg__Stm32Data;
    is_plain =
      (
      offsetof(DataType, enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Stm32Data__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_parameters__msg__Stm32Data(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Stm32Data = {
  "my_parameters::msg",
  "Stm32Data",
  _Stm32Data__cdr_serialize,
  _Stm32Data__cdr_deserialize,
  _Stm32Data__get_serialized_size,
  _Stm32Data__max_serialized_size
};

static rosidl_message_type_support_t _Stm32Data__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Stm32Data,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_parameters, msg, Stm32Data)() {
  return &_Stm32Data__type_support;
}

#if defined(__cplusplus)
}
#endif
