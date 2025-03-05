// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/debug_parameter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "my_parameters/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "my_parameters/msg/detail/debug_parameter__struct.h"
#include "my_parameters/msg/detail/debug_parameter__functions.h"
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


using _DebugParameter__ros_msg_type = my_parameters__msg__DebugParameter;

static bool _DebugParameter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DebugParameter__ros_msg_type * ros_message = static_cast<const _DebugParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: alpha_r_fr
  {
    cdr << ros_message->alpha_r_fr;
  }

  // Field name: alpha_b_fr
  {
    cdr << ros_message->alpha_b_fr;
  }

  // Field name: z_l_fr
  {
    cdr << ros_message->z_l_fr;
  }

  // Field name: alpha_r_fl
  {
    cdr << ros_message->alpha_r_fl;
  }

  // Field name: alpha_b_fl
  {
    cdr << ros_message->alpha_b_fl;
  }

  // Field name: z_l_fl
  {
    cdr << ros_message->z_l_fl;
  }

  // Field name: alpha_r_rr
  {
    cdr << ros_message->alpha_r_rr;
  }

  // Field name: alpha_b_rr
  {
    cdr << ros_message->alpha_b_rr;
  }

  // Field name: z_l_rr
  {
    cdr << ros_message->z_l_rr;
  }

  // Field name: alpha_r_rl
  {
    cdr << ros_message->alpha_r_rl;
  }

  // Field name: alpha_b_rl
  {
    cdr << ros_message->alpha_b_rl;
  }

  // Field name: z_l_rl
  {
    cdr << ros_message->z_l_rl;
  }

  return true;
}

static bool _DebugParameter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DebugParameter__ros_msg_type * ros_message = static_cast<_DebugParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: alpha_r_fr
  {
    cdr >> ros_message->alpha_r_fr;
  }

  // Field name: alpha_b_fr
  {
    cdr >> ros_message->alpha_b_fr;
  }

  // Field name: z_l_fr
  {
    cdr >> ros_message->z_l_fr;
  }

  // Field name: alpha_r_fl
  {
    cdr >> ros_message->alpha_r_fl;
  }

  // Field name: alpha_b_fl
  {
    cdr >> ros_message->alpha_b_fl;
  }

  // Field name: z_l_fl
  {
    cdr >> ros_message->z_l_fl;
  }

  // Field name: alpha_r_rr
  {
    cdr >> ros_message->alpha_r_rr;
  }

  // Field name: alpha_b_rr
  {
    cdr >> ros_message->alpha_b_rr;
  }

  // Field name: z_l_rr
  {
    cdr >> ros_message->z_l_rr;
  }

  // Field name: alpha_r_rl
  {
    cdr >> ros_message->alpha_r_rl;
  }

  // Field name: alpha_b_rl
  {
    cdr >> ros_message->alpha_b_rl;
  }

  // Field name: z_l_rl
  {
    cdr >> ros_message->z_l_rl;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_parameters
size_t get_serialized_size_my_parameters__msg__DebugParameter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DebugParameter__ros_msg_type * ros_message = static_cast<const _DebugParameter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name alpha_r_fr
  {
    size_t item_size = sizeof(ros_message->alpha_r_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_b_fr
  {
    size_t item_size = sizeof(ros_message->alpha_b_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_l_fr
  {
    size_t item_size = sizeof(ros_message->z_l_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_r_fl
  {
    size_t item_size = sizeof(ros_message->alpha_r_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_b_fl
  {
    size_t item_size = sizeof(ros_message->alpha_b_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_l_fl
  {
    size_t item_size = sizeof(ros_message->z_l_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_r_rr
  {
    size_t item_size = sizeof(ros_message->alpha_r_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_b_rr
  {
    size_t item_size = sizeof(ros_message->alpha_b_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_l_rr
  {
    size_t item_size = sizeof(ros_message->z_l_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_r_rl
  {
    size_t item_size = sizeof(ros_message->alpha_r_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alpha_b_rl
  {
    size_t item_size = sizeof(ros_message->alpha_b_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_l_rl
  {
    size_t item_size = sizeof(ros_message->z_l_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DebugParameter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_my_parameters__msg__DebugParameter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_my_parameters
size_t max_serialized_size_my_parameters__msg__DebugParameter(
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

  // member: alpha_r_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_b_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_l_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_r_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_b_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_l_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_r_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_b_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_l_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_r_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alpha_b_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z_l_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = my_parameters__msg__DebugParameter;
    is_plain =
      (
      offsetof(DataType, z_l_rl) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DebugParameter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_my_parameters__msg__DebugParameter(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DebugParameter = {
  "my_parameters::msg",
  "DebugParameter",
  _DebugParameter__cdr_serialize,
  _DebugParameter__cdr_deserialize,
  _DebugParameter__get_serialized_size,
  _DebugParameter__max_serialized_size
};

static rosidl_message_type_support_t _DebugParameter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DebugParameter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_parameters, msg, DebugParameter)() {
  return &_DebugParameter__type_support;
}

#if defined(__cplusplus)
}
#endif
