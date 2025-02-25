// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_parameters:msg/MotorParameters.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/motor_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_parameters__msg__MotorParameters__init(my_parameters__msg__MotorParameters * msg)
{
  if (!msg) {
    return false;
  }
  // alpha_a_fr
  // alpha_b_fr
  // alpha_c_fr
  // alpha_a_fl
  // alpha_b_fl
  // alpha_c_fl
  // alpha_a_rr
  // alpha_b_rr
  // alpha_c_rr
  // alpha_a_rl
  // alpha_b_rl
  // alpha_c_rl
  // move
  // pre_tight
  return true;
}

void
my_parameters__msg__MotorParameters__fini(my_parameters__msg__MotorParameters * msg)
{
  if (!msg) {
    return;
  }
  // alpha_a_fr
  // alpha_b_fr
  // alpha_c_fr
  // alpha_a_fl
  // alpha_b_fl
  // alpha_c_fl
  // alpha_a_rr
  // alpha_b_rr
  // alpha_c_rr
  // alpha_a_rl
  // alpha_b_rl
  // alpha_c_rl
  // move
  // pre_tight
}

bool
my_parameters__msg__MotorParameters__are_equal(const my_parameters__msg__MotorParameters * lhs, const my_parameters__msg__MotorParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // alpha_a_fr
  if (lhs->alpha_a_fr != rhs->alpha_a_fr) {
    return false;
  }
  // alpha_b_fr
  if (lhs->alpha_b_fr != rhs->alpha_b_fr) {
    return false;
  }
  // alpha_c_fr
  if (lhs->alpha_c_fr != rhs->alpha_c_fr) {
    return false;
  }
  // alpha_a_fl
  if (lhs->alpha_a_fl != rhs->alpha_a_fl) {
    return false;
  }
  // alpha_b_fl
  if (lhs->alpha_b_fl != rhs->alpha_b_fl) {
    return false;
  }
  // alpha_c_fl
  if (lhs->alpha_c_fl != rhs->alpha_c_fl) {
    return false;
  }
  // alpha_a_rr
  if (lhs->alpha_a_rr != rhs->alpha_a_rr) {
    return false;
  }
  // alpha_b_rr
  if (lhs->alpha_b_rr != rhs->alpha_b_rr) {
    return false;
  }
  // alpha_c_rr
  if (lhs->alpha_c_rr != rhs->alpha_c_rr) {
    return false;
  }
  // alpha_a_rl
  if (lhs->alpha_a_rl != rhs->alpha_a_rl) {
    return false;
  }
  // alpha_b_rl
  if (lhs->alpha_b_rl != rhs->alpha_b_rl) {
    return false;
  }
  // alpha_c_rl
  if (lhs->alpha_c_rl != rhs->alpha_c_rl) {
    return false;
  }
  // move
  if (lhs->move != rhs->move) {
    return false;
  }
  // pre_tight
  if (lhs->pre_tight != rhs->pre_tight) {
    return false;
  }
  return true;
}

bool
my_parameters__msg__MotorParameters__copy(
  const my_parameters__msg__MotorParameters * input,
  my_parameters__msg__MotorParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // alpha_a_fr
  output->alpha_a_fr = input->alpha_a_fr;
  // alpha_b_fr
  output->alpha_b_fr = input->alpha_b_fr;
  // alpha_c_fr
  output->alpha_c_fr = input->alpha_c_fr;
  // alpha_a_fl
  output->alpha_a_fl = input->alpha_a_fl;
  // alpha_b_fl
  output->alpha_b_fl = input->alpha_b_fl;
  // alpha_c_fl
  output->alpha_c_fl = input->alpha_c_fl;
  // alpha_a_rr
  output->alpha_a_rr = input->alpha_a_rr;
  // alpha_b_rr
  output->alpha_b_rr = input->alpha_b_rr;
  // alpha_c_rr
  output->alpha_c_rr = input->alpha_c_rr;
  // alpha_a_rl
  output->alpha_a_rl = input->alpha_a_rl;
  // alpha_b_rl
  output->alpha_b_rl = input->alpha_b_rl;
  // alpha_c_rl
  output->alpha_c_rl = input->alpha_c_rl;
  // move
  output->move = input->move;
  // pre_tight
  output->pre_tight = input->pre_tight;
  return true;
}

my_parameters__msg__MotorParameters *
my_parameters__msg__MotorParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__MotorParameters * msg = (my_parameters__msg__MotorParameters *)allocator.allocate(sizeof(my_parameters__msg__MotorParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_parameters__msg__MotorParameters));
  bool success = my_parameters__msg__MotorParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_parameters__msg__MotorParameters__destroy(my_parameters__msg__MotorParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_parameters__msg__MotorParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_parameters__msg__MotorParameters__Sequence__init(my_parameters__msg__MotorParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__MotorParameters * data = NULL;

  if (size) {
    data = (my_parameters__msg__MotorParameters *)allocator.zero_allocate(size, sizeof(my_parameters__msg__MotorParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_parameters__msg__MotorParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_parameters__msg__MotorParameters__fini(&data[i - 1]);
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
my_parameters__msg__MotorParameters__Sequence__fini(my_parameters__msg__MotorParameters__Sequence * array)
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
      my_parameters__msg__MotorParameters__fini(&array->data[i]);
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

my_parameters__msg__MotorParameters__Sequence *
my_parameters__msg__MotorParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__MotorParameters__Sequence * array = (my_parameters__msg__MotorParameters__Sequence *)allocator.allocate(sizeof(my_parameters__msg__MotorParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_parameters__msg__MotorParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_parameters__msg__MotorParameters__Sequence__destroy(my_parameters__msg__MotorParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_parameters__msg__MotorParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_parameters__msg__MotorParameters__Sequence__are_equal(const my_parameters__msg__MotorParameters__Sequence * lhs, const my_parameters__msg__MotorParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_parameters__msg__MotorParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_parameters__msg__MotorParameters__Sequence__copy(
  const my_parameters__msg__MotorParameters__Sequence * input,
  my_parameters__msg__MotorParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_parameters__msg__MotorParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_parameters__msg__MotorParameters * data =
      (my_parameters__msg__MotorParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_parameters__msg__MotorParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_parameters__msg__MotorParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_parameters__msg__MotorParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
