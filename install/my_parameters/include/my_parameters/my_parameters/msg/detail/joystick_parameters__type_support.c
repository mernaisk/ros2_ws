// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "my_parameters/msg/detail/joystick_parameters__rosidl_typesupport_introspection_c.h"
#include "my_parameters/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "my_parameters/msg/detail/joystick_parameters__functions.h"
#include "my_parameters/msg/detail/joystick_parameters__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  my_parameters__msg__JoystickParameters__init(message_memory);
}

void my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_fini_function(void * message_memory)
{
  my_parameters__msg__JoystickParameters__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_member_array[6] = {
  {
    "turn_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, turn_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, turn_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, position_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, position_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_parameters__msg__JoystickParameters, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_members = {
  "my_parameters__msg",  // message namespace
  "JoystickParameters",  // message name
  6,  // number of fields
  sizeof(my_parameters__msg__JoystickParameters),
  my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_member_array,  // message members
  my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_init_function,  // function to initialize message memory (memory has to be allocated)
  my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_type_support_handle = {
  0,
  &my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_my_parameters
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_parameters, msg, JoystickParameters)() {
  if (!my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_type_support_handle.typesupport_identifier) {
    my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &my_parameters__msg__JoystickParameters__rosidl_typesupport_introspection_c__JoystickParameters_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
