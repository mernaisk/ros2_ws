// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_H_
#define MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ObstacleProximityLog in the package my_parameters.
typedef struct my_parameters__msg__ObstacleProximityLog
{
  int8_t distance_zone;
  int8_t goal_status;
  builtin_interfaces__msg__Time stamp;
  int32_t turn_count;
} my_parameters__msg__ObstacleProximityLog;

// Struct for a sequence of my_parameters__msg__ObstacleProximityLog.
typedef struct my_parameters__msg__ObstacleProximityLog__Sequence
{
  my_parameters__msg__ObstacleProximityLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_parameters__msg__ObstacleProximityLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__OBSTACLE_PROXIMITY_LOG__STRUCT_H_
