// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/GnssFusionStatus.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__GNSS_FUSION_STATUS__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__GNSS_FUSION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/gnss_fusion_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_GnssFusionStatus_gnss_fusion_status
{
public:
  Init_GnssFusionStatus_gnss_fusion_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::msg::GnssFusionStatus gnss_fusion_status(::zed_msgs::msg::GnssFusionStatus::_gnss_fusion_status_type arg)
  {
    msg_.gnss_fusion_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::GnssFusionStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::GnssFusionStatus>()
{
  return zed_msgs::msg::builder::Init_GnssFusionStatus_gnss_fusion_status();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__GNSS_FUSION_STATUS__BUILDER_HPP_
