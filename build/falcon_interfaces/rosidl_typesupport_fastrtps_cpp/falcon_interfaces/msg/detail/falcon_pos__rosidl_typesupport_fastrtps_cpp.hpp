// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from falcon_interfaces:msg/FalconPos.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "falcon_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "falcon_interfaces/msg/detail/falcon_pos__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace falcon_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_falcon_interfaces
cdr_serialize(
  const falcon_interfaces::msg::FalconPos & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_falcon_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  falcon_interfaces::msg::FalconPos & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_falcon_interfaces
get_serialized_size(
  const falcon_interfaces::msg::FalconPos & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_falcon_interfaces
max_serialized_size_FalconPos(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace falcon_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_falcon_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, falcon_interfaces, msg, FalconPos)();

#ifdef __cplusplus
}
#endif

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
