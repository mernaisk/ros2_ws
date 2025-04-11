// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_parameters:msg/ObstacleProximityLog.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/obstacle_proximity_log__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
my_parameters__msg__ObstacleProximityLog__init(my_parameters__msg__ObstacleProximityLog * msg)
{
  if (!msg) {
    return false;
  }
  // distance_zone
  // goal_status
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    my_parameters__msg__ObstacleProximityLog__fini(msg);
    return false;
  }
  // turn_count
  return true;
}

void
my_parameters__msg__ObstacleProximityLog__fini(my_parameters__msg__ObstacleProximityLog * msg)
{
  if (!msg) {
    return;
  }
  // distance_zone
  // goal_status
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // turn_count
}

bool
my_parameters__msg__ObstacleProximityLog__are_equal(const my_parameters__msg__ObstacleProximityLog * lhs, const my_parameters__msg__ObstacleProximityLog * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_zone
  if (lhs->distance_zone != rhs->distance_zone) {
    return false;
  }
  // goal_status
  if (lhs->goal_status != rhs->goal_status) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // turn_count
  if (lhs->turn_count != rhs->turn_count) {
    return false;
  }
  return true;
}

bool
my_parameters__msg__ObstacleProximityLog__copy(
  const my_parameters__msg__ObstacleProximityLog * input,
  my_parameters__msg__ObstacleProximityLog * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_zone
  output->distance_zone = input->distance_zone;
  // goal_status
  output->goal_status = input->goal_status;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // turn_count
  output->turn_count = input->turn_count;
  return true;
}

my_parameters__msg__ObstacleProximityLog *
my_parameters__msg__ObstacleProximityLog__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__ObstacleProximityLog * msg = (my_parameters__msg__ObstacleProximityLog *)allocator.allocate(sizeof(my_parameters__msg__ObstacleProximityLog), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_parameters__msg__ObstacleProximityLog));
  bool success = my_parameters__msg__ObstacleProximityLog__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_parameters__msg__ObstacleProximityLog__destroy(my_parameters__msg__ObstacleProximityLog * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_parameters__msg__ObstacleProximityLog__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_parameters__msg__ObstacleProximityLog__Sequence__init(my_parameters__msg__ObstacleProximityLog__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__ObstacleProximityLog * data = NULL;

  if (size) {
    data = (my_parameters__msg__ObstacleProximityLog *)allocator.zero_allocate(size, sizeof(my_parameters__msg__ObstacleProximityLog), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_parameters__msg__ObstacleProximityLog__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_parameters__msg__ObstacleProximityLog__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
my_parameters__msg__ObstacleProximityLog__Sequence__fini(my_parameters__msg__ObstacleProximityLog__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      my_parameters__msg__ObstacleProximityLog__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

my_parameters__msg__ObstacleProximityLog__Sequence *
my_parameters__msg__ObstacleProximityLog__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__ObstacleProximityLog__Sequence * array = (my_parameters__msg__ObstacleProximityLog__Sequence *)allocator.allocate(sizeof(my_parameters__msg__ObstacleProximityLog__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_parameters__msg__ObstacleProximityLog__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_parameters__msg__ObstacleProximityLog__Sequence__destroy(my_parameters__msg__ObstacleProximityLog__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_parameters__msg__ObstacleProximityLog__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_parameters__msg__ObstacleProximityLog__Sequence__are_equal(const my_parameters__msg__ObstacleProximityLog__Sequence * lhs, const my_parameters__msg__ObstacleProximityLog__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_parameters__msg__ObstacleProximityLog__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_parameters__msg__ObstacleProximityLog__Sequence__copy(
  const my_parameters__msg__ObstacleProximityLog__Sequence * input,
  my_parameters__msg__ObstacleProximityLog__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_parameters__msg__ObstacleProximityLog);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_parameters__msg__ObstacleProximityLog * data =
      (my_parameters__msg__ObstacleProximityLog *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_parameters__msg__ObstacleProximityLog__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_parameters__msg__ObstacleProximityLog__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_parameters__msg__ObstacleProximityLog__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
