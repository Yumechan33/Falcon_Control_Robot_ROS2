// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from falcon_interfaces:msg/FalconForces.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "falcon_interfaces/msg/detail/falcon_forces__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace falcon_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FalconForces_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) falcon_interfaces::msg::FalconForces(_init);
}

void FalconForces_fini_function(void * message_memory)
{
  auto typed_message = static_cast<falcon_interfaces::msg::FalconForces *>(message_memory);
  typed_message->~FalconForces();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FalconForces_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(falcon_interfaces::msg::FalconForces, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(falcon_interfaces::msg::FalconForces, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(falcon_interfaces::msg::FalconForces, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FalconForces_message_members = {
  "falcon_interfaces::msg",  // message namespace
  "FalconForces",  // message name
  3,  // number of fields
  sizeof(falcon_interfaces::msg::FalconForces),
  FalconForces_message_member_array,  // message members
  FalconForces_init_function,  // function to initialize message memory (memory has to be allocated)
  FalconForces_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FalconForces_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FalconForces_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace falcon_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<falcon_interfaces::msg::FalconForces>()
{
  return &::falcon_interfaces::msg::rosidl_typesupport_introspection_cpp::FalconForces_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, falcon_interfaces, msg, FalconForces)() {
  return &::falcon_interfaces::msg::rosidl_typesupport_introspection_cpp::FalconForces_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
