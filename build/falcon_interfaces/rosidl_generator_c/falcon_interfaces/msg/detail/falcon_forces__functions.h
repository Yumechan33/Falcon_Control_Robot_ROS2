// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from falcon_interfaces:msg/FalconForces.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__FUNCTIONS_H_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "falcon_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "falcon_interfaces/msg/detail/falcon_forces__struct.h"

/// Initialize msg/FalconForces message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * falcon_interfaces__msg__FalconForces
 * )) before or use
 * falcon_interfaces__msg__FalconForces__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__init(falcon_interfaces__msg__FalconForces * msg);

/// Finalize msg/FalconForces message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconForces__fini(falcon_interfaces__msg__FalconForces * msg);

/// Create msg/FalconForces message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * falcon_interfaces__msg__FalconForces__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
falcon_interfaces__msg__FalconForces *
falcon_interfaces__msg__FalconForces__create();

/// Destroy msg/FalconForces message.
/**
 * It calls
 * falcon_interfaces__msg__FalconForces__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconForces__destroy(falcon_interfaces__msg__FalconForces * msg);

/// Check for msg/FalconForces message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__are_equal(const falcon_interfaces__msg__FalconForces * lhs, const falcon_interfaces__msg__FalconForces * rhs);

/// Copy a msg/FalconForces message.
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
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__copy(
  const falcon_interfaces__msg__FalconForces * input,
  falcon_interfaces__msg__FalconForces * output);

/// Initialize array of msg/FalconForces messages.
/**
 * It allocates the memory for the number of elements and calls
 * falcon_interfaces__msg__FalconForces__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__Sequence__init(falcon_interfaces__msg__FalconForces__Sequence * array, size_t size);

/// Finalize array of msg/FalconForces messages.
/**
 * It calls
 * falcon_interfaces__msg__FalconForces__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconForces__Sequence__fini(falcon_interfaces__msg__FalconForces__Sequence * array);

/// Create array of msg/FalconForces messages.
/**
 * It allocates the memory for the array and calls
 * falcon_interfaces__msg__FalconForces__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
falcon_interfaces__msg__FalconForces__Sequence *
falcon_interfaces__msg__FalconForces__Sequence__create(size_t size);

/// Destroy array of msg/FalconForces messages.
/**
 * It calls
 * falcon_interfaces__msg__FalconForces__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconForces__Sequence__destroy(falcon_interfaces__msg__FalconForces__Sequence * array);

/// Check for msg/FalconForces message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__Sequence__are_equal(const falcon_interfaces__msg__FalconForces__Sequence * lhs, const falcon_interfaces__msg__FalconForces__Sequence * rhs);

/// Copy an array of msg/FalconForces messages.
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
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconForces__Sequence__copy(
  const falcon_interfaces__msg__FalconForces__Sequence * input,
  falcon_interfaces__msg__FalconForces__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__FUNCTIONS_H_
