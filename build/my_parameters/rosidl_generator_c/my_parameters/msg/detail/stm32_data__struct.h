// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_H_
#define MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Stm32Data in the package my_parameters.
typedef struct my_parameters__msg__Stm32Data
{
  int32_t motor1_fr;
  int32_t motor2_fr;
  int32_t motor3_fr;
  int32_t motor1_fl;
  int32_t motor2_fl;
  int32_t motor3_fl;
  int32_t motor1_rr;
  int32_t motor2_rr;
  int32_t motor3_rr;
  int32_t motor1_rl;
  int32_t motor2_rl;
  int32_t motor3_rl;
} my_parameters__msg__Stm32Data;

// Struct for a sequence of my_parameters__msg__Stm32Data.
typedef struct my_parameters__msg__Stm32Data__Sequence
{
  my_parameters__msg__Stm32Data * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_parameters__msg__Stm32Data__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__STM32_DATA__STRUCT_H_
