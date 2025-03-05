// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_parameters:msg/DebugParameter.idl
// generated code does not contain a copyright notice
#include "my_parameters/msg/detail/debug_parameter__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_parameters__msg__DebugParameter__init(my_parameters__msg__DebugParameter * msg)
{
  if (!msg) {
    return false;
  }
  // alpha_r_fr
  // alpha_b_fr
  // z_l_fr
  // alpha_r_fl
  // alpha_b_fl
  // z_l_fl
  // alpha_r_rr
  // alpha_b_rr
  // z_l_rr
  // alpha_r_rl
  // alpha_b_rl
  // z_l_rl
  return true;
}

void
my_parameters__msg__DebugParameter__fini(my_parameters__msg__DebugParameter * msg)
{
  if (!msg) {
    return;
  }
  // alpha_r_fr
  // alpha_b_fr
  // z_l_fr
  // alpha_r_fl
  // alpha_b_fl
  // z_l_fl
  // alpha_r_rr
  // alpha_b_rr
  // z_l_rr
  // alpha_r_rl
  // alpha_b_rl
  // z_l_rl
}

bool
my_parameters__msg__DebugParameter__are_equal(const my_parameters__msg__DebugParameter * lhs, const my_parameters__msg__DebugParameter * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // alpha_r_fr
  if (lhs->alpha_r_fr != rhs->alpha_r_fr) {
    return false;
  }
  // alpha_b_fr
  if (lhs->alpha_b_fr != rhs->alpha_b_fr) {
    return false;
  }
  // z_l_fr
  if (lhs->z_l_fr != rhs->z_l_fr) {
    return false;
  }
  // alpha_r_fl
  if (lhs->alpha_r_fl != rhs->alpha_r_fl) {
    return false;
  }
  // alpha_b_fl
  if (lhs->alpha_b_fl != rhs->alpha_b_fl) {
    return false;
  }
  // z_l_fl
  if (lhs->z_l_fl != rhs->z_l_fl) {
    return false;
  }
  // alpha_r_rr
  if (lhs->alpha_r_rr != rhs->alpha_r_rr) {
    return false;
  }
  // alpha_b_rr
  if (lhs->alpha_b_rr != rhs->alpha_b_rr) {
    return false;
  }
  // z_l_rr
  if (lhs->z_l_rr != rhs->z_l_rr) {
    return false;
  }
  // alpha_r_rl
  if (lhs->alpha_r_rl != rhs->alpha_r_rl) {
    return false;
  }
  // alpha_b_rl
  if (lhs->alpha_b_rl != rhs->alpha_b_rl) {
    return false;
  }
  // z_l_rl
  if (lhs->z_l_rl != rhs->z_l_rl) {
    return false;
  }
  return true;
}

bool
my_parameters__msg__DebugParameter__copy(
  const my_parameters__msg__DebugParameter * input,
  my_parameters__msg__DebugParameter * output)
{
  if (!input || !output) {
    return false;
  }
  // alpha_r_fr
  output->alpha_r_fr = input->alpha_r_fr;
  // alpha_b_fr
  output->alpha_b_fr = input->alpha_b_fr;
  // z_l_fr
  output->z_l_fr = input->z_l_fr;
  // alpha_r_fl
  output->alpha_r_fl = input->alpha_r_fl;
  // alpha_b_fl
  output->alpha_b_fl = input->alpha_b_fl;
  // z_l_fl
  output->z_l_fl = input->z_l_fl;
  // alpha_r_rr
  output->alpha_r_rr = input->alpha_r_rr;
  // alpha_b_rr
  output->alpha_b_rr = input->alpha_b_rr;
  // z_l_rr
  output->z_l_rr = input->z_l_rr;
  // alpha_r_rl
  output->alpha_r_rl = input->alpha_r_rl;
  // alpha_b_rl
  output->alpha_b_rl = input->alpha_b_rl;
  // z_l_rl
  output->z_l_rl = input->z_l_rl;
  return true;
}

my_parameters__msg__DebugParameter *
my_parameters__msg__DebugParameter__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__DebugParameter * msg = (my_parameters__msg__DebugParameter *)allocator.allocate(sizeof(my_parameters__msg__DebugParameter), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_parameters__msg__DebugParameter));
  bool success = my_parameters__msg__DebugParameter__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_parameters__msg__DebugParameter__destroy(my_parameters__msg__DebugParameter * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_parameters__msg__DebugParameter__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_parameters__msg__DebugParameter__Sequence__init(my_parameters__msg__DebugParameter__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__DebugParameter * data = NULL;

  if (size) {
    data = (my_parameters__msg__DebugParameter *)allocator.zero_allocate(size, sizeof(my_parameters__msg__DebugParameter), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_parameters__msg__DebugParameter__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_parameters__msg__DebugParameter__fini(&data[i - 1]);
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
my_parameters__msg__DebugParameter__Sequence__fini(my_parameters__msg__DebugParameter__Sequence * array)
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
      my_parameters__msg__DebugParameter__fini(&array->data[i]);
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

my_parameters__msg__DebugParameter__Sequence *
my_parameters__msg__DebugParameter__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_parameters__msg__DebugParameter__Sequence * array = (my_parameters__msg__DebugParameter__Sequence *)allocator.allocate(sizeof(my_parameters__msg__DebugParameter__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_parameters__msg__DebugParameter__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_parameters__msg__DebugParameter__Sequence__destroy(my_parameters__msg__DebugParameter__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_parameters__msg__DebugParameter__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_parameters__msg__DebugParameter__Sequence__are_equal(const my_parameters__msg__DebugParameter__Sequence * lhs, const my_parameters__msg__DebugParameter__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_parameters__msg__DebugParameter__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_parameters__msg__DebugParameter__Sequence__copy(
  const my_parameters__msg__DebugParameter__Sequence * input,
  my_parameters__msg__DebugParameter__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_parameters__msg__DebugParameter);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_parameters__msg__DebugParameter * data =
      (my_parameters__msg__DebugParameter *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_parameters__msg__DebugParameter__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_parameters__msg__DebugParameter__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_parameters__msg__DebugParameter__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
