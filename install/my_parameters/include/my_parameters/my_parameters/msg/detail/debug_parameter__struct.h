// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_H_
#define MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DebugParameter in the package my_parameters.
typedef struct my_parameters__msg__DebugParameter
{
  double alpha_r_fr;
  double alpha_b_fr;
  double z_l_fr;
  double alpha_r_fl;
  double alpha_b_fl;
  double z_l_fl;
  double alpha_r_rr;
  double alpha_b_rr;
  double z_l_rr;
  double alpha_r_rl;
  double alpha_b_rl;
  double z_l_rl;
} my_parameters__msg__DebugParameter;

// Struct for a sequence of my_parameters__msg__DebugParameter.
typedef struct my_parameters__msg__DebugParameter__Sequence
{
  my_parameters__msg__DebugParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_parameters__msg__DebugParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__DEBUG_PARAMETER__STRUCT_H_
