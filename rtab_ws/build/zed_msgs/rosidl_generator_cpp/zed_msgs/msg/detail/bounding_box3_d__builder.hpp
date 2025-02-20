// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/bounding_box3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox3D_corners
{
public:
  Init_BoundingBox3D_corners()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::msg::BoundingBox3D corners(::zed_msgs::msg::BoundingBox3D::_corners_type arg)
  {
    msg_.corners = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::BoundingBox3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::BoundingBox3D>()
{
  return zed_msgs::msg::builder::Init_BoundingBox3D_corners();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
