// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/debug_parameter__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_parameters/msg/detail/debug_parameter__struct.hpp"

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
  const my_parameters::msg::DebugParameter & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: alpha_r_fr
  cdr << ros_message.alpha_r_fr;
  // Member: alpha_b_fr
  cdr << ros_message.alpha_b_fr;
  // Member: z_l_fr
  cdr << ros_message.z_l_fr;
  // Member: alpha_r_fl
  cdr << ros_message.alpha_r_fl;
  // Member: alpha_b_fl
  cdr << ros_message.alpha_b_fl;
  // Member: z_l_fl
  cdr << ros_message.z_l_fl;
  // Member: alpha_r_rr
  cdr << ros_message.alpha_r_rr;
  // Member: alpha_b_rr
  cdr << ros_message.alpha_b_rr;
  // Member: z_l_rr
  cdr << ros_message.z_l_rr;
  // Member: alpha_r_rl
  cdr << ros_message.alpha_r_rl;
  // Member: alpha_b_rl
  cdr << ros_message.alpha_b_rl;
  // Member: z_l_rl
  cdr << ros_message.z_l_rl;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_parameters::msg::DebugParameter & ros_message)
{
  // Member: alpha_r_fr
  cdr >> ros_message.alpha_r_fr;

  // Member: alpha_b_fr
  cdr >> ros_message.alpha_b_fr;

  // Member: z_l_fr
  cdr >> ros_message.z_l_fr;

  // Member: alpha_r_fl
  cdr >> ros_message.alpha_r_fl;

  // Member: alpha_b_fl
  cdr >> ros_message.alpha_b_fl;

  // Member: z_l_fl
  cdr >> ros_message.z_l_fl;

  // Member: alpha_r_rr
  cdr >> ros_message.alpha_r_rr;

  // Member: alpha_b_rr
  cdr >> ros_message.alpha_b_rr;

  // Member: z_l_rr
  cdr >> ros_message.z_l_rr;

  // Member: alpha_r_rl
  cdr >> ros_message.alpha_r_rl;

  // Member: alpha_b_rl
  cdr >> ros_message.alpha_b_rl;

  // Member: z_l_rl
  cdr >> ros_message.z_l_rl;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
get_serialized_size(
  const my_parameters::msg::DebugParameter & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: alpha_r_fr
  {
    size_t item_size = sizeof(ros_message.alpha_r_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_fr
  {
    size_t item_size = sizeof(ros_message.alpha_b_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_l_fr
  {
    size_t item_size = sizeof(ros_message.z_l_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_r_fl
  {
    size_t item_size = sizeof(ros_message.alpha_r_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_fl
  {
    size_t item_size = sizeof(ros_message.alpha_b_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_l_fl
  {
    size_t item_size = sizeof(ros_message.z_l_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_r_rr
  {
    size_t item_size = sizeof(ros_message.alpha_r_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_rr
  {
    size_t item_size = sizeof(ros_message.alpha_b_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_l_rr
  {
    size_t item_size = sizeof(ros_message.z_l_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_r_rl
  {
    size_t item_size = sizeof(ros_message.alpha_r_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_rl
  {
    size_t item_size = sizeof(ros_message.alpha_b_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_l_rl
  {
    size_t item_size = sizeof(ros_message.z_l_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
max_serialized_size_DebugParameter(
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


  // Member: alpha_r_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_b_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_l_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_r_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_b_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_l_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_r_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_b_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_l_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_r_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alpha_b_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: z_l_rl
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
    using DataType = my_parameters::msg::DebugParameter;
    is_plain =
      (
      offsetof(DataType, z_l_rl) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DebugParameter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_parameters::msg::DebugParameter *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DebugParameter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_parameters::msg::DebugParameter *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DebugParameter__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_parameters::msg::DebugParameter *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DebugParameter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DebugParameter(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DebugParameter__callbacks = {
  "my_parameters::msg",
  "DebugParameter",
  _DebugParameter__cdr_serialize,
  _DebugParameter__cdr_deserialize,
  _DebugParameter__get_serialized_size,
  _DebugParameter__max_serialized_size
};

static rosidl_message_type_support_t _DebugParameter__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DebugParameter__callbacks,
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
get_message_type_support_handle<my_parameters::msg::DebugParameter>()
{
  return &my_parameters::msg::typesupport_fastrtps_cpp::_DebugParameter__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_parameters, msg, DebugParameter)() {
  return &my_parameters::msg::typesupport_fastrtps_cpp::_DebugParameter__handle;
}

#ifdef __cplusplus
}
#endif
