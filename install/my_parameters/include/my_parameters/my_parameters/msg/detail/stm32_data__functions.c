// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_parameters:msg/Stm32Data.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/stm32_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_parameters__msg__Stm32Data__init(my_parameters__msg__Stm32Data * msg)
{
  if (!msg) {
    return false;
  }
  // motor1_fr
  // motor2_fr
  // motor3_fr
  // motor1_fl
  // motor2_fl
  // motor3_fl
  // motor1_rr
  // motor2_rr
  // motor3_rr
  // motor1_rl
  // motor2_rl
  // motor3_rl
  // enabled
  return true;
}

void
my_parameters__msg__Stm32Data__fini(my_parameters__msg__Stm32Data * msg)
{
  if (!msg) {
    return;
  }
  // motor1_fr
  // motor2_fr
  // motor3_fr
  // motor1_fl
  // motor2_fl
  // motor3_fl
  // motor1_rr
  // motor2_rr
  // motor3_rr
  // motor1_rl
  // motor2_rl
  // motor3_rl
  // enabled
}

bool
my_parameters__msg__Stm32Data__are_equal(const my_parameters__msg__Stm32Data * lhs, const my_parameters__msg__Stm32Data * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor1_fr
  if (lhs->motor1_fr != rhs->motor1_fr) {
    return false;
  }
  // motor2_fr
  if (lhs->motor2_fr != rhs->motor2_fr) {
    return false;
  }
  // motor3_fr
  if (lhs->motor3_fr != rhs->motor3_fr) {
    return false;
  }
  // motor1_fl
  if (lhs->motor1_fl != rhs->motor1_fl) {
    return false;
  }
  // motor2_fl
  if (lhs->motor2_fl != rhs->motor2_fl) {
    return false;
  }
  // motor3_fl
  if (lhs->motor3_fl != rhs->motor3_fl) {
    return false;
  }
  // motor1_rr
  if (lhs->motor1_rr != rhs->motor1_rr) {
    return false;
  }
  // motor2_rr
  if (lhs->motor2_rr != rhs->motor2_rr) {
    return false;
  }
  // motor3_rr
  if (lhs->motor3_rr != rhs->motor3_rr) {
    return false;
  }
  // motor1_rl
  if (lhs->motor1_rl != rhs->motor1_rl) {
    return false;
  }
  // motor2_rl
  if (lhs->motor2_rl != rhs->motor2_rl) {
    return false;
  }
  // motor3_rl
  if (lhs->motor3_rl != rhs->motor3_rl) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  return true;
}

bool
my_parameters__msg__Stm32Data__copy(
  const my_parameters__msg__Stm32Data * input,
  my_parameters__msg__Stm32Data * output)
{
  if (!input || !output) {
    return false;
  }
  // motor1_fr
  output->motor1_fr = input->motor1_fr;
  // motor2_fr
  output->motor2_fr = input->motor2_fr;
  // motor3_fr
  output->motor3_fr = input->motor3_fr;
  // motor1_fl
  output->motor1_fl = input->motor1_fl;
  // motor2_fl
  output->motor2_fl = input->motor2_fl;
  // motor3_fl
  output->motor3_fl = input->motor3_fl;
  // motor1_rr
  output->motor1_rr = input->motor1_rr;
  // motor2_rr
  output->motor2_rr = input->motor2_rr;
  // motor3_rr
  output->motor3_rr = input->motor3_rr;
  // motor1_rl
  output->motor1_rl = input->motor1_rl;
  // motor2_rl
  output->motor2_rl = input->motor2_rl;
  // motor3_rl
  output->motor3_rl = input->motor3_rl;
  // enabled
  output->enabled = input->enabled;
  return true;
}

my_parameters__msg__Stm32Data *
my_parameters__msg__Stm32Data__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__Stm32Data * msg = (my_parameters__msg__Stm32Data *)allocator.allocate(sizeof(my_parameters__msg__Stm32Data), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_parameters__msg__Stm32Data));
  bool success = my_parameters__msg__Stm32Data__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_parameters__msg__Stm32Data__destroy(my_parameters__msg__Stm32Data * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_parameters__msg__Stm32Data__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_parameters__msg__Stm32Data__Sequence__init(my_parameters__msg__Stm32Data__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__Stm32Data * data = NULL;

  if (size) {
    data = (my_parameters__msg__Stm32Data *)allocator.zero_allocate(size, sizeof(my_parameters__msg__Stm32Data), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_parameters__msg__Stm32Data__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_parameters__msg__Stm32Data__fini(&data[i - 1]);
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
my_parameters__msg__Stm32Data__Sequence__fini(my_parameters__msg__Stm32Data__Sequence * array)
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
      my_parameters__msg__Stm32Data__fini(&array->data[i]);
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

my_parameters__msg__Stm32Data__Sequence *
my_parameters__msg__Stm32Data__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__Stm32Data__Sequence * array = (my_parameters__msg__Stm32Data__Sequence *)allocator.allocate(sizeof(my_parameters__msg__Stm32Data__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_parameters__msg__Stm32Data__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_parameters__msg__Stm32Data__Sequence__destroy(my_parameters__msg__Stm32Data__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_parameters__msg__Stm32Data__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_parameters__msg__Stm32Data__Sequence__are_equal(const my_parameters__msg__Stm32Data__Sequence * lhs, const my_parameters__msg__Stm32Data__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_parameters__msg__Stm32Data__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_parameters__msg__Stm32Data__Sequence__copy(
  const my_parameters__msg__Stm32Data__Sequence * input,
  my_parameters__msg__Stm32Data__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_parameters__msg__Stm32Data);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_parameters__msg__Stm32Data * data =
      (my_parameters__msg__Stm32Data *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_parameters__msg__Stm32Data__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_parameters__msg__Stm32Data__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_parameters__msg__Stm32Data__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
