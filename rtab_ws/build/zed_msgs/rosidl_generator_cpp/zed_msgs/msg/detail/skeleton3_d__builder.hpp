// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/Skeleton3D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SKELETON3_D__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__SKELETON3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/skeleton3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_Skeleton3D_keypoints
{
public:
  Init_Skeleton3D_keypoints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::msg::Skeleton3D keypoints(::zed_msgs::msg::Skeleton3D::_keypoints_type arg)
  {
    msg_.keypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::Skeleton3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::Skeleton3D>()
{
  return zed_msgs::msg::builder::Init_Skeleton3D_keypoints();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__SKELETON3_D__BUILDER_HPP_
