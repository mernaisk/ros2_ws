// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/stm32_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "my_parameters/msg/detail/stm32_data__struct.hpp"

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
  const my_parameters::msg::Stm32Data & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor1_fr
  cdr << ros_message.motor1_fr;
  // Member: motor2_fr
  cdr << ros_message.motor2_fr;
  // Member: motor3_fr
  cdr << ros_message.motor3_fr;
  // Member: motor1_fl
  cdr << ros_message.motor1_fl;
  // Member: motor2_fl
  cdr << ros_message.motor2_fl;
  // Member: motor3_fl
  cdr << ros_message.motor3_fl;
  // Member: motor1_rr
  cdr << ros_message.motor1_rr;
  // Member: motor2_rr
  cdr << ros_message.motor2_rr;
  // Member: motor3_rr
  cdr << ros_message.motor3_rr;
  // Member: motor1_rl
  cdr << ros_message.motor1_rl;
  // Member: motor2_rl
  cdr << ros_message.motor2_rl;
  // Member: motor3_rl
  cdr << ros_message.motor3_rl;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  my_parameters::msg::Stm32Data & ros_message)
{
  // Member: motor1_fr
  cdr >> ros_message.motor1_fr;

  // Member: motor2_fr
  cdr >> ros_message.motor2_fr;

  // Member: motor3_fr
  cdr >> ros_message.motor3_fr;

  // Member: motor1_fl
  cdr >> ros_message.motor1_fl;

  // Member: motor2_fl
  cdr >> ros_message.motor2_fl;

  // Member: motor3_fl
  cdr >> ros_message.motor3_fl;

  // Member: motor1_rr
  cdr >> ros_message.motor1_rr;

  // Member: motor2_rr
  cdr >> ros_message.motor2_rr;

  // Member: motor3_rr
  cdr >> ros_message.motor3_rr;

  // Member: motor1_rl
  cdr >> ros_message.motor1_rl;

  // Member: motor2_rl
  cdr >> ros_message.motor2_rl;

  // Member: motor3_rl
  cdr >> ros_message.motor3_rl;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
get_serialized_size(
  const my_parameters::msg::Stm32Data & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor1_fr
  {
    size_t item_size = sizeof(ros_message.motor1_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor2_fr
  {
    size_t item_size = sizeof(ros_message.motor2_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor3_fr
  {
    size_t item_size = sizeof(ros_message.motor3_fr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor1_fl
  {
    size_t item_size = sizeof(ros_message.motor1_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor2_fl
  {
    size_t item_size = sizeof(ros_message.motor2_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor3_fl
  {
    size_t item_size = sizeof(ros_message.motor3_fl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor1_rr
  {
    size_t item_size = sizeof(ros_message.motor1_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor2_rr
  {
    size_t item_size = sizeof(ros_message.motor2_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor3_rr
  {
    size_t item_size = sizeof(ros_message.motor3_rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor1_rl
  {
    size_t item_size = sizeof(ros_message.motor1_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor2_rl
  {
    size_t item_size = sizeof(ros_message.motor2_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor3_rl
  {
    size_t item_size = sizeof(ros_message.motor3_rl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_my_parameters
max_serialized_size_Stm32Data(
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


  // Member: motor1_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor2_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor3_fr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor1_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor2_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor3_fl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor1_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor2_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor3_rr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor1_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor2_rl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor3_rl
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
    using DataType = my_parameters::msg::Stm32Data;
    is_plain =
      (
      offsetof(DataType, motor3_rl) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Stm32Data__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const my_parameters::msg::Stm32Data *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Stm32Data__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<my_parameters::msg::Stm32Data *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Stm32Data__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const my_parameters::msg::Stm32Data *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Stm32Data__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Stm32Data(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Stm32Data__callbacks = {
  "my_parameters::msg",
  "Stm32Data",
  _Stm32Data__cdr_serialize,
  _Stm32Data__cdr_deserialize,
  _Stm32Data__get_serialized_size,
  _Stm32Data__max_serialized_size
};

static rosidl_message_type_support_t _Stm32Data__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Stm32Data__callbacks,
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
get_message_type_support_handle<my_parameters::msg::Stm32Data>()
{
  return &my_parameters::msg::typesupport_fastrtps_cpp::_Stm32Data__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, my_parameters, msg, Stm32Data)() {
  return &my_parameters::msg::typesupport_fastrtps_cpp::_Stm32Data__handle;
}

#ifdef __cplusplus
}
#endif
