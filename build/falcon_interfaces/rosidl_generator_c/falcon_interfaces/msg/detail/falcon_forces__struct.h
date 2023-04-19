// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from falcon_interfaces:msg/FalconForces.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__STRUCT_H_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FalconForces in the package falcon_interfaces.
typedef struct falcon_interfaces__msg__FalconForces
{
  double x;
  double y;
  double z;
} falcon_interfaces__msg__FalconForces;

// Struct for a sequence of falcon_interfaces__msg__FalconForces.
typedef struct falcon_interfaces__msg__FalconForces__Sequence
{
  falcon_interfaces__msg__FalconForces * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} falcon_interfaces__msg__FalconForces__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__STRUCT_H_
