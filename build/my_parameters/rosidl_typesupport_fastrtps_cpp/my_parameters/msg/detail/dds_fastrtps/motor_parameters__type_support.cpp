// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/motor_parameters__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_parameters/msg/detail/motor_parameters__struct.hpp"

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
  const my_parameters::msg::MotorParameters & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: alpha_a_fr
  cdr << ros_message.alpha_a_fr;
  // Member: alpha_b_fr
  cdr << ros_message.alpha_b_fr;
  // Member: alpha_c_fr
  cdr << ros_message.alpha_c_fr;
  // Member: alpha_a_fl
  cdr << ros_message.alpha_a_fl;
  // Member: alpha_b_fl
  cdr << ros_message.alpha_b_fl;
  // Member: alpha_c_fl
  cdr << ros_message.alpha_c_fl;
  // Member: alpha_a_rr
  cdr << ros_message.alpha_a_rr;
  // Member: alpha_b_rr
  cdr << ros_message.alpha_b_rr;
  // Member: alpha_c_rr
  cdr << ros_message.alpha_c_rr;
  // Member: alpha_a_rl
  cdr << ros_message.alpha_a_rl;
  // Member: alpha_b_rl
  cdr << ros_message.alpha_b_rl;
  // Member: alpha_c_rl
  cdr << ros_message.alpha_c_rl;
  // Member: move
  cdr << (ros_message.move ? true : false);
  // Member: pre_tight
  cdr << (ros_message.pre_tight ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_parameters::msg::MotorParameters & ros_message)
{
  // Member: alpha_a_fr
  cdr >> ros_message.alpha_a_fr;

  // Member: alpha_b_fr
  cdr >> ros_message.alpha_b_fr;

  // Member: alpha_c_fr
  cdr >> ros_message.alpha_c_fr;

  // Member: alpha_a_fl
  cdr >> ros_message.alpha_a_fl;

  // Member: alpha_b_fl
  cdr >> ros_message.alpha_b_fl;

  // Member: alpha_c_fl
  cdr >> ros_message.alpha_c_fl;

  // Member: alpha_a_rr
  cdr >> ros_message.alpha_a_rr;

  // Member: alpha_b_rr
  cdr >> ros_message.alpha_b_rr;

  // Member: alpha_c_rr
  cdr >> ros_message.alpha_c_rr;

  // Member: alpha_a_rl
  cdr >> ros_message.alpha_a_rl;

  // Member: alpha_b_rl
  cdr >> ros_message.alpha_b_rl;

  // Member: alpha_c_rl
  cdr >> ros_message.alpha_c_rl;

  // Member: move
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.move = tmp ? true : false;
  }

  // Member: pre_tight
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pre_tight = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
get_serialized_size(
  const my_parameters::msg::MotorParameters & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: alpha_a_fr
  {
    size_t item_size = sizeof(ros_message.alpha_a_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_fr
  {
    size_t item_size = sizeof(ros_message.alpha_b_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_c_fr
  {
    size_t item_size = sizeof(ros_message.alpha_c_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_a_fl
  {
    size_t item_size = sizeof(ros_message.alpha_a_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_fl
  {
    size_t item_size = sizeof(ros_message.alpha_b_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_c_fl
  {
    size_t item_size = sizeof(ros_message.alpha_c_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_a_rr
  {
    size_t item_size = sizeof(ros_message.alpha_a_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_rr
  {
    size_t item_size = sizeof(ros_message.alpha_b_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_c_rr
  {
    size_t item_size = sizeof(ros_message.alpha_c_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_a_rl
  {
    size_t item_size = sizeof(ros_message.alpha_a_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_b_rl
  {
    size_t item_size = sizeof(ros_message.alpha_b_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alpha_c_rl
  {
    size_t item_size = sizeof(ros_message.alpha_c_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: move
  {
    size_t item_size = sizeof(ros_message.move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_tight
  {
    size_t item_size = sizeof(ros_message.pre_tight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
max_serialized_size_MotorParameters(
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


  // Member: alpha_a_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_b_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_c_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_a_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_b_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_c_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_a_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_b_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_c_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_a_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_b_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alpha_c_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: move
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pre_tight
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
    using DataType = my_parameters::msg::MotorParameters;
    is_plain =
      (
      offsetof(DataType, pre_tight) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MotorParameters__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_parameters::msg::MotorParameters *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorParameters__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_parameters::msg::MotorParameters *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorParameters__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_parameters::msg::MotorParameters *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorParameters__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MotorParameters(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MotorParameters__callbacks = {
  "my_parameters::msg",
  "MotorParameters",
  _MotorParameters__cdr_serialize,
  _MotorParameters__cdr_deserialize,
  _MotorParameters__get_serialized_size,
  _MotorParameters__max_serialized_size
};

static rosidl_message_type_support_t _MotorParameters__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorParameters__callbacks,
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
get_message_type_support_handle<my_parameters::msg::MotorParameters>()
{
  return &my_parameters::msg::typesupport_fastrtps_cpp::_MotorParameters__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_parameters, msg, MotorParameters)() {
  return &my_parameters::msg::typesupport_fastrtps_cpp::_MotorParameters__handle;
}

#ifdef __cplusplus
}
#endif
