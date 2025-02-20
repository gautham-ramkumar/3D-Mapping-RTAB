// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/Keypoint3D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__KEYPOINT3_D__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__KEYPOINT3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/keypoint3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_Keypoint3D_kp
{
public:
  Init_Keypoint3D_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::msg::Keypoint3D kp(::zed_msgs::msg::Keypoint3D::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::Keypoint3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::Keypoint3D>()
{
  return zed_msgs::msg::builder::Init_Keypoint3D_kp();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__KEYPOINT3_D__BUILDER_HPP_
