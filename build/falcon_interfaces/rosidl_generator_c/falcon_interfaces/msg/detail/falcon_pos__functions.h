// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from falcon_interfaces:msg/FalconPos.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__FUNCTIONS_H_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "falcon_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "falcon_interfaces/msg/detail/falcon_pos__struct.h"

/// Initialize msg/FalconPos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * falcon_interfaces__msg__FalconPos
 * )) before or use
 * falcon_interfaces__msg__FalconPos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconPos__init(falcon_interfaces__msg__FalconPos * msg);

/// Finalize msg/FalconPos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconPos__fini(falcon_interfaces__msg__FalconPos * msg);

/// Create msg/FalconPos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * falcon_interfaces__msg__FalconPos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
falcon_interfaces__msg__FalconPos *
falcon_interfaces__msg__FalconPos__create();

/// Destroy msg/FalconPos message.
/**
 * It calls
 * falcon_interfaces__msg__FalconPos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconPos__destroy(falcon_interfaces__msg__FalconPos * msg);

/// Check for msg/FalconPos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconPos__are_equal(const falcon_interfaces__msg__FalconPos * lhs, const falcon_interfaces__msg__FalconPos * rhs);

/// Copy a msg/FalconPos message.
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
falcon_interfaces__msg__FalconPos__copy(
  const falcon_interfaces__msg__FalconPos * input,
  falcon_interfaces__msg__FalconPos * output);

/// Initialize array of msg/FalconPos messages.
/**
 * It allocates the memory for the number of elements and calls
 * falcon_interfaces__msg__FalconPos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconPos__Sequence__init(falcon_interfaces__msg__FalconPos__Sequence * array, size_t size);

/// Finalize array of msg/FalconPos messages.
/**
 * It calls
 * falcon_interfaces__msg__FalconPos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconPos__Sequence__fini(falcon_interfaces__msg__FalconPos__Sequence * array);

/// Create array of msg/FalconPos messages.
/**
 * It allocates the memory for the array and calls
 * falcon_interfaces__msg__FalconPos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
falcon_interfaces__msg__FalconPos__Sequence *
falcon_interfaces__msg__FalconPos__Sequence__create(size_t size);

/// Destroy array of msg/FalconPos messages.
/**
 * It calls
 * falcon_interfaces__msg__FalconPos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
void
falcon_interfaces__msg__FalconPos__Sequence__destroy(falcon_interfaces__msg__FalconPos__Sequence * array);

/// Check for msg/FalconPos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_falcon_interfaces
bool
falcon_interfaces__msg__FalconPos__Sequence__are_equal(const falcon_interfaces__msg__FalconPos__Sequence * lhs, const falcon_interfaces__msg__FalconPos__Sequence * rhs);

/// Copy an array of msg/FalconPos messages.
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
falcon_interfaces__msg__FalconPos__Sequence__copy(
  const falcon_interfaces__msg__FalconPos__Sequence * input,
  falcon_interfaces__msg__FalconPos__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__FUNCTIONS_H_
