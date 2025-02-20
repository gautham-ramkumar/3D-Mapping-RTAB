// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/Keypoint2Di.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/keypoint2_di__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_Keypoint2Di_kp
{
public:
  Init_Keypoint2Di_kp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::msg::Keypoint2Di kp(::zed_msgs::msg::Keypoint2Di::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::Keypoint2Di msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::Keypoint2Di>()
{
  return zed_msgs::msg::builder::Init_Keypoint2Di_kp();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__BUILDER_HPP_
