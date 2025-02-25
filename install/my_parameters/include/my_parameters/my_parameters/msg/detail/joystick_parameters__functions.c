// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/joystick_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_parameters__msg__JoystickParameters__init(my_parameters__msg__JoystickParameters * msg)
{
  if (!msg) {
    return false;
  }
  // turn_command
  // turn_angle
  // position_command
  // position_direction
  // velocity
  // enabled
  return true;
}

void
my_parameters__msg__JoystickParameters__fini(my_parameters__msg__JoystickParameters * msg)
{
  if (!msg) {
    return;
  }
  // turn_command
  // turn_angle
  // position_command
  // position_direction
  // velocity
  // enabled
}

bool
my_parameters__msg__JoystickParameters__are_equal(const my_parameters__msg__JoystickParameters * lhs, const my_parameters__msg__JoystickParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // turn_command
  if (lhs->turn_command != rhs->turn_command) {
    return false;
  }
  // turn_angle
  if (lhs->turn_angle != rhs->turn_angle) {
    return false;
  }
  // position_command
  if (lhs->position_command != rhs->position_command) {
    return false;
  }
  // position_direction
  if (lhs->position_direction != rhs->position_direction) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  return true;
}

bool
my_parameters__msg__JoystickParameters__copy(
  const my_parameters__msg__JoystickParameters * input,
  my_parameters__msg__JoystickParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // turn_command
  output->turn_command = input->turn_command;
  // turn_angle
  output->turn_angle = input->turn_angle;
  // position_command
  output->position_command = input->position_command;
  // position_direction
  output->position_direction = input->position_direction;
  // velocity
  output->velocity = input->velocity;
  // enabled
  output->enabled = input->enabled;
  return true;
}

my_parameters__msg__JoystickParameters *
my_parameters__msg__JoystickParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__JoystickParameters * msg = (my_parameters__msg__JoystickParameters *)allocator.allocate(sizeof(my_parameters__msg__JoystickParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_parameters__msg__JoystickParameters));
  bool success = my_parameters__msg__JoystickParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_parameters__msg__JoystickParameters__destroy(my_parameters__msg__JoystickParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_parameters__msg__JoystickParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_parameters__msg__JoystickParameters__Sequence__init(my_parameters__msg__JoystickParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__JoystickParameters * data = NULL;

  if (size) {
    data = (my_parameters__msg__JoystickParameters *)allocator.zero_allocate(size, sizeof(my_parameters__msg__JoystickParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_parameters__msg__JoystickParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_parameters__msg__JoystickParameters__fini(&data[i - 1]);
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
my_parameters__msg__JoystickParameters__Sequence__fini(my_parameters__msg__JoystickParameters__Sequence * array)
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
      my_parameters__msg__JoystickParameters__fini(&array->data[i]);
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

my_parameters__msg__JoystickParameters__Sequence *
my_parameters__msg__JoystickParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__JoystickParameters__Sequence * array = (my_parameters__msg__JoystickParameters__Sequence *)allocator.allocate(sizeof(my_parameters__msg__JoystickParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_parameters__msg__JoystickParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_parameters__msg__JoystickParameters__Sequence__destroy(my_parameters__msg__JoystickParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_parameters__msg__JoystickParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_parameters__msg__JoystickParameters__Sequence__are_equal(const my_parameters__msg__JoystickParameters__Sequence * lhs, const my_parameters__msg__JoystickParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_parameters__msg__JoystickParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_parameters__msg__JoystickParameters__Sequence__copy(
  const my_parameters__msg__JoystickParameters__Sequence * input,
  my_parameters__msg__JoystickParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_parameters__msg__JoystickParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_parameters__msg__JoystickParameters * data =
      (my_parameters__msg__JoystickParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_parameters__msg__JoystickParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_parameters__msg__JoystickParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_parameters__msg__JoystickParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
