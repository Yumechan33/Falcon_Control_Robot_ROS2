// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from falcon_interfaces:msg/FalconPos.idl
// generated code does not contain a copyright notice
#include "falcon_interfaces/msg/detail/falcon_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
falcon_interfaces__msg__FalconPos__init(falcon_interfaces__msg__FalconPos * msg)
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
falcon_interfaces__msg__FalconPos__fini(falcon_interfaces__msg__FalconPos * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
falcon_interfaces__msg__FalconPos__are_equal(const falcon_interfaces__msg__FalconPos * lhs, const falcon_interfaces__msg__FalconPos * rhs)
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
falcon_interfaces__msg__FalconPos__copy(
  const falcon_interfaces__msg__FalconPos * input,
  falcon_interfaces__msg__FalconPos * output)
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

falcon_interfaces__msg__FalconPos *
falcon_interfaces__msg__FalconPos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconPos * msg = (falcon_interfaces__msg__FalconPos *)allocator.allocate(sizeof(falcon_interfaces__msg__FalconPos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(falcon_interfaces__msg__FalconPos));
  bool success = falcon_interfaces__msg__FalconPos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
falcon_interfaces__msg__FalconPos__destroy(falcon_interfaces__msg__FalconPos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    falcon_interfaces__msg__FalconPos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
falcon_interfaces__msg__FalconPos__Sequence__init(falcon_interfaces__msg__FalconPos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconPos * data = NULL;

  if (size) {
    data = (falcon_interfaces__msg__FalconPos *)allocator.zero_allocate(size, sizeof(falcon_interfaces__msg__FalconPos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = falcon_interfaces__msg__FalconPos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        falcon_interfaces__msg__FalconPos__fini(&data[i - 1]);
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
falcon_interfaces__msg__FalconPos__Sequence__fini(falcon_interfaces__msg__FalconPos__Sequence * array)
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
      falcon_interfaces__msg__FalconPos__fini(&array->data[i]);
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

falcon_interfaces__msg__FalconPos__Sequence *
falcon_interfaces__msg__FalconPos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  falcon_interfaces__msg__FalconPos__Sequence * array = (falcon_interfaces__msg__FalconPos__Sequence *)allocator.allocate(sizeof(falcon_interfaces__msg__FalconPos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = falcon_interfaces__msg__FalconPos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
falcon_interfaces__msg__FalconPos__Sequence__destroy(falcon_interfaces__msg__FalconPos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    falcon_interfaces__msg__FalconPos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
falcon_interfaces__msg__FalconPos__Sequence__are_equal(const falcon_interfaces__msg__FalconPos__Sequence * lhs, const falcon_interfaces__msg__FalconPos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!falcon_interfaces__msg__FalconPos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
falcon_interfaces__msg__FalconPos__Sequence__copy(
  const falcon_interfaces__msg__FalconPos__Sequence * input,
  falcon_interfaces__msg__FalconPos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(falcon_interfaces__msg__FalconPos);
    falcon_interfaces__msg__FalconPos * data =
      (falcon_interfaces__msg__FalconPos *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!falcon_interfaces__msg__FalconPos__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          falcon_interfaces__msg__FalconPos__fini(&data[i]);
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
    if (!falcon_interfaces__msg__FalconPos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
