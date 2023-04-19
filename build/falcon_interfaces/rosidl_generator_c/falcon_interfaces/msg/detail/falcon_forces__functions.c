// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from falcon_interfaces:msg/FalconForces.idl
// generated code does not contain a copyright notice
#include "falcon_interfaces/msg/detail/falcon_forces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
falcon_interfaces__msg__FalconForces__init(falcon_interfaces__msg__FalconForces * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
falcon_interfaces__msg__FalconForces__fini(falcon_interfaces__msg__FalconForces * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
falcon_interfaces__msg__FalconForces__are_equal(const falcon_interfaces__msg__FalconForces * lhs, const falcon_interfaces__msg__FalconForces * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
falcon_interfaces__msg__FalconForces__copy(
  const falcon_interfaces__msg__FalconForces * input,
  falcon_interfaces__msg__FalconForces * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

falcon_interfaces__msg__FalconForces *
falcon_interfaces__msg__FalconForces__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconForces * msg = (falcon_interfaces__msg__FalconForces *)allocator.allocate(sizeof(falcon_interfaces__msg__FalconForces), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(falcon_interfaces__msg__FalconForces));
  bool success = falcon_interfaces__msg__FalconForces__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
falcon_interfaces__msg__FalconForces__destroy(falcon_interfaces__msg__FalconForces * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    falcon_interfaces__msg__FalconForces__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
falcon_interfaces__msg__FalconForces__Sequence__init(falcon_interfaces__msg__FalconForces__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconForces * data = NULL;

  if (size) {
    data = (falcon_interfaces__msg__FalconForces *)allocator.zero_allocate(size, sizeof(falcon_interfaces__msg__FalconForces), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = falcon_interfaces__msg__FalconForces__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        falcon_interfaces__msg__FalconForces__fini(&data[i - 1]);
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
falcon_interfaces__msg__FalconForces__Sequence__fini(falcon_interfaces__msg__FalconForces__Sequence * array)
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
      falcon_interfaces__msg__FalconForces__fini(&array->data[i]);
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

falcon_interfaces__msg__FalconForces__Sequence *
falcon_interfaces__msg__FalconForces__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconForces__Sequence * array = (falcon_interfaces__msg__FalconForces__Sequence *)allocator.allocate(sizeof(falcon_interfaces__msg__FalconForces__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = falcon_interfaces__msg__FalconForces__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
falcon_interfaces__msg__FalconForces__Sequence__destroy(falcon_interfaces__msg__FalconForces__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    falcon_interfaces__msg__FalconForces__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
falcon_interfaces__msg__FalconForces__Sequence__are_equal(const falcon_interfaces__msg__FalconForces__Sequence * lhs, const falcon_interfaces__msg__FalconForces__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!falcon_interfaces__msg__FalconForces__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
falcon_interfaces__msg__FalconForces__Sequence__copy(
  const falcon_interfaces__msg__FalconForces__Sequence * input,
  falcon_interfaces__msg__FalconForces__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(falcon_interfaces__msg__FalconForces);
    falcon_interfaces__msg__FalconForces * data =
      (falcon_interfaces__msg__FalconForces *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!falcon_interfaces__msg__FalconForces__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          falcon_interfaces__msg__FalconForces__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!falcon_interfaces__msg__FalconForces__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
