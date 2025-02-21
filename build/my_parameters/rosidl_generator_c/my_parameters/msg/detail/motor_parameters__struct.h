// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_H_
#define MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorParameters in the package my_parameters.
typedef struct my_parameters__msg__MotorParameters
{
  float alpha_a_fr;
  float alpha_b_fr;
  float alpha_c_fr;
  float alpha_a_fl;
  float alpha_b_fl;
  float alpha_c_fl;
  float alpha_a_rr;
  float alpha_b_rr;
  float alpha_c_rr;
  float alpha_a_rl;
  float alpha_b_rl;
  float alpha_c_rl;
  bool move;
  bool pre_tight;
} my_parameters__msg__MotorParameters;

// Struct for a sequence of my_parameters__msg__MotorParameters.
typedef struct my_parameters__msg__MotorParameters__Sequence
{
  my_parameters__msg__MotorParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_parameters__msg__MotorParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__MOTOR_PARAMETERS__STRUCT_H_
