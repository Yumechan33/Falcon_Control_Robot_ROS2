// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from falcon_interfaces:msg/FalconPos.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__STRUCT_H_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/FalconPos in the package falcon_interfaces.
typedef struct falcon_interfaces__msg__FalconPos
{
  double x;
  double y;
  double z;
} falcon_interfaces__msg__FalconPos;

// Struct for a sequence of falcon_interfaces__msg__FalconPos.
typedef struct falcon_interfaces__msg__FalconPos__Sequence
{
  falcon_interfaces__msg__FalconPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} falcon_interfaces__msg__FalconPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__STRUCT_H_
