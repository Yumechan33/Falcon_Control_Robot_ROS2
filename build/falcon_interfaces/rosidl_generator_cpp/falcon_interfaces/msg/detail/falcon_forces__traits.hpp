// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from falcon_interfaces:msg/FalconForces.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__TRAITS_HPP_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__TRAITS_HPP_

#include "falcon_interfaces/msg/detail/falcon_forces__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<falcon_interfaces::msg::FalconForces>()
{
  return "falcon_interfaces::msg::FalconForces";
}

template<>
inline const char * name<falcon_interfaces::msg::FalconForces>()
{
  return "falcon_interfaces/msg/FalconForces";
}

template<>
struct has_fixed_size<falcon_interfaces::msg::FalconForces>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<falcon_interfaces::msg::FalconForces>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<falcon_interfaces::msg::FalconForces>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_FORCES__TRAITS_HPP_
