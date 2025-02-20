// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/ObjectsStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/objects_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectsStamped_objects
{
public:
  explicit Init_ObjectsStamped_objects(::zed_msgs::msg::ObjectsStamped & msg)
  : msg_(msg)
  {}
  ::zed_msgs::msg::ObjectsStamped objects(::zed_msgs::msg::ObjectsStamped::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::ObjectsStamped msg_;
};

class Init_ObjectsStamped_header
{
public:
  Init_ObjectsStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectsStamped_objects header(::zed_msgs::msg::ObjectsStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectsStamped_objects(msg_);
  }

private:
  ::zed_msgs::msg::ObjectsStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::ObjectsStamped>()
{
  return zed_msgs::msg::builder::Init_ObjectsStamped_header();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__BUILDER_HPP_
