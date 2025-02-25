// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:srv/SetPose.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__SRV__DETAIL__SET_POSE__BUILDER_HPP_
#define ZED_MSGS__SRV__DETAIL__SET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/srv/detail/set_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPose_Request_orient
{
public:
  explicit Init_SetPose_Request_orient(::zed_msgs::srv::SetPose_Request & msg)
  : msg_(msg)
  {}
  ::zed_msgs::srv::SetPose_Request orient(::zed_msgs::srv::SetPose_Request::_orient_type arg)
  {
    msg_.orient = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::srv::SetPose_Request msg_;
};

class Init_SetPose_Request_pos
{
public:
  Init_SetPose_Request_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPose_Request_orient pos(::zed_msgs::srv::SetPose_Request::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_SetPose_Request_orient(msg_);
  }

private:
  ::zed_msgs::srv::SetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::srv::SetPose_Request>()
{
  return zed_msgs::srv::builder::Init_SetPose_Request_pos();
}

}  // namespace zed_msgs


namespace zed_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPose_Response_message
{
public:
  explicit Init_SetPose_Response_message(::zed_msgs::srv::SetPose_Response & msg)
  : msg_(msg)
  {}
  ::zed_msgs::srv::SetPose_Response message(::zed_msgs::srv::SetPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::srv::SetPose_Response msg_;
};

class Init_SetPose_Response_success
{
public:
  Init_SetPose_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPose_Response_message success(::zed_msgs::srv::SetPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetPose_Response_message(msg_);
  }

private:
  ::zed_msgs::srv::SetPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::srv::SetPose_Response>()
{
  return zed_msgs::srv::builder::Init_SetPose_Response_success();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__SRV__DETAIL__SET_POSE__BUILDER_HPP_
