// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from falcon_interfaces:msg/FalconPos.idl
// generated code does not contain a copyright notice

#ifndef FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__BUILDER_HPP_
#define FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__BUILDER_HPP_

#include "falcon_interfaces/msg/detail/falcon_pos__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace falcon_interfaces
{

namespace msg
{

namespace builder
{

class Init_FalconPos_z
{
public:
  explicit Init_FalconPos_z(::falcon_interfaces::msg::FalconPos & msg)
  : msg_(msg)
  {}
  ::falcon_interfaces::msg::FalconPos z(::falcon_interfaces::msg::FalconPos::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::falcon_interfaces::msg::FalconPos msg_;
};

class Init_FalconPos_y
{
public:
  explicit Init_FalconPos_y(::falcon_interfaces::msg::FalconPos & msg)
  : msg_(msg)
  {}
  Init_FalconPos_z y(::falcon_interfaces::msg::FalconPos::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_FalconPos_z(msg_);
  }

private:
  ::falcon_interfaces::msg::FalconPos msg_;
};

class Init_FalconPos_x
{
public:
  Init_FalconPos_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FalconPos_y x(::falcon_interfaces::msg::FalconPos::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_FalconPos_y(msg_);
  }

private:
  ::falcon_interfaces::msg::FalconPos msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::falcon_interfaces::msg::FalconPos>()
{
  return falcon_interfaces::msg::builder::Init_FalconPos_x();
}

}  // namespace falcon_interfaces

#endif  // FALCON_INTERFACES__MSG__DETAIL__FALCON_POS__BUILDER_HPP_
