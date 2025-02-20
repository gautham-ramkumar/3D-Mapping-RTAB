// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:srv/SetROI.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__SRV__DETAIL__SET_ROI__BUILDER_HPP_
#define ZED_MSGS__SRV__DETAIL__SET_ROI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/srv/detail/set_roi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace srv
{

namespace builder
{

class Init_SetROI_Request_roi
{
public:
  Init_SetROI_Request_roi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::zed_msgs::srv::SetROI_Request roi(::zed_msgs::srv::SetROI_Request::_roi_type arg)
  {
    msg_.roi = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::srv::SetROI_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::srv::SetROI_Request>()
{
  return zed_msgs::srv::builder::Init_SetROI_Request_roi();
}

}  // namespace zed_msgs


namespace zed_msgs
{

namespace srv
{

namespace builder
{

class Init_SetROI_Response_message
{
public:
  explicit Init_SetROI_Response_message(::zed_msgs::srv::SetROI_Response & msg)
  : msg_(msg)
  {}
  ::zed_msgs::srv::SetROI_Response message(::zed_msgs::srv::SetROI_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::srv::SetROI_Response msg_;
};

class Init_SetROI_Response_success
{
public:
  Init_SetROI_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetROI_Response_message success(::zed_msgs::srv::SetROI_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetROI_Response_message(msg_);
  }

private:
  ::zed_msgs::srv::SetROI_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::srv::SetROI_Response>()
{
  return zed_msgs::srv::builder::Init_SetROI_Response_success();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__SRV__DETAIL__SET_ROI__BUILDER_HPP_
