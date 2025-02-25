// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_parameters:msg/JoystickParameters.idl
// generated code does not contain a copyright notice

#ifndef MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__FUNCTIONS_H_
#define MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_parameters/msg/rosidl_generator_c__visibility_control.h"

#include "my_parameters/msg/detail/joystick_parameters__struct.h"

/// Initialize msg/JoystickParameters message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_parameters__msg__JoystickParameters
 * )) before or use
 * my_parameters__msg__JoystickParameters__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__init(my_parameters__msg__JoystickParameters * msg);

/// Finalize msg/JoystickParameters message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
void
my_parameters__msg__JoystickParameters__fini(my_parameters__msg__JoystickParameters * msg);

/// Create msg/JoystickParameters message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_parameters__msg__JoystickParameters__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
my_parameters__msg__JoystickParameters *
my_parameters__msg__JoystickParameters__create();

/// Destroy msg/JoystickParameters message.
/**
 * It calls
 * my_parameters__msg__JoystickParameters__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
void
my_parameters__msg__JoystickParameters__destroy(my_parameters__msg__JoystickParameters * msg);

/// Check for msg/JoystickParameters message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__are_equal(const my_parameters__msg__JoystickParameters * lhs, const my_parameters__msg__JoystickParameters * rhs);

/// Copy a msg/JoystickParameters message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__copy(
  const my_parameters__msg__JoystickParameters * input,
  my_parameters__msg__JoystickParameters * output);

/// Initialize array of msg/JoystickParameters messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_parameters__msg__JoystickParameters__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__Sequence__init(my_parameters__msg__JoystickParameters__Sequence * array, size_t size);

/// Finalize array of msg/JoystickParameters messages.
/**
 * It calls
 * my_parameters__msg__JoystickParameters__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
void
my_parameters__msg__JoystickParameters__Sequence__fini(my_parameters__msg__JoystickParameters__Sequence * array);

/// Create array of msg/JoystickParameters messages.
/**
 * It allocates the memory for the array and calls
 * my_parameters__msg__JoystickParameters__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
my_parameters__msg__JoystickParameters__Sequence *
my_parameters__msg__JoystickParameters__Sequence__create(size_t size);

/// Destroy array of msg/JoystickParameters messages.
/**
 * It calls
 * my_parameters__msg__JoystickParameters__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
void
my_parameters__msg__JoystickParameters__Sequence__destroy(my_parameters__msg__JoystickParameters__Sequence * array);

/// Check for msg/JoystickParameters message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__Sequence__are_equal(const my_parameters__msg__JoystickParameters__Sequence * lhs, const my_parameters__msg__JoystickParameters__Sequence * rhs);

/// Copy an array of msg/JoystickParameters messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_parameters
bool
my_parameters__msg__JoystickParameters__Sequence__copy(
  const my_parameters__msg__JoystickParameters__Sequence * input,
  my_parameters__msg__JoystickParameters__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_PARAMETERS__MSG__DETAIL__JOYSTICK_PARAMETERS__FUNCTIONS_H_
