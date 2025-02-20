// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/DepthInfoStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__DEPTH_INFO_STAMPED__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__DEPTH_INFO_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/depth_info_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_DepthInfoStamped_max_depth
{
public:
  explicit Init_DepthInfoStamped_max_depth(::zed_msgs::msg::DepthInfoStamped & msg)
  : msg_(msg)
  {}
  ::zed_msgs::msg::DepthInfoStamped max_depth(::zed_msgs::msg::DepthInfoStamped::_max_depth_type arg)
  {
    msg_.max_depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::DepthInfoStamped msg_;
};

class Init_DepthInfoStamped_min_depth
{
public:
  explicit Init_DepthInfoStamped_min_depth(::zed_msgs::msg::DepthInfoStamped & msg)
  : msg_(msg)
  {}
  Init_DepthInfoStamped_max_depth min_depth(::zed_msgs::msg::DepthInfoStamped::_min_depth_type arg)
  {
    msg_.min_depth = std::move(arg);
    return Init_DepthInfoStamped_max_depth(msg_);
  }

private:
  ::zed_msgs::msg::DepthInfoStamped msg_;
};

class Init_DepthInfoStamped_header
{
public:
  Init_DepthInfoStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DepthInfoStamped_min_depth header(::zed_msgs::msg::DepthInfoStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DepthInfoStamped_min_depth(msg_);
  }

private:
  ::zed_msgs::msg::DepthInfoStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::DepthInfoStamped>()
{
  return zed_msgs::msg::builder::Init_DepthInfoStamped_header();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__DEPTH_INFO_STAMPED__BUILDER_HPP_
