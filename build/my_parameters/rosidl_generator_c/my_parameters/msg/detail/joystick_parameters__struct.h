// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_H_
#define MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/JoystickParameters in the package my_parameters.
typedef struct my_parameters__msg__JoystickParameters
{
  bool turn_command;
  float turn_angle;
  bool position_command;
  float position_direction;
  float velocity;
  bool enabled;
} my_parameters__msg__JoystickParameters;

// Struct for a sequence of my_parameters__msg__JoystickParameters.
typedef struct my_parameters__msg__JoystickParameters__Sequence
{
  my_parameters__msg__JoystickParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_parameters__msg__JoystickParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__STRUCT_H_
