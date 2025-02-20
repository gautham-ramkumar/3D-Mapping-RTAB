// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from zed_msgs:msg/PlaneStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__PLANE_STAMPED__BUILDER_HPP_
#define ZED_MSGS__MSG__DETAIL__PLANE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "zed_msgs/msg/detail/plane_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace zed_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaneStamped_bounds
{
public:
  explicit Init_PlaneStamped_bounds(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  ::zed_msgs::msg::PlaneStamped bounds(::zed_msgs::msg::PlaneStamped::_bounds_type arg)
  {
    msg_.bounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_extents
{
public:
  explicit Init_PlaneStamped_extents(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_bounds extents(::zed_msgs::msg::PlaneStamped::_extents_type arg)
  {
    msg_.extents = std::move(arg);
    return Init_PlaneStamped_bounds(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_pose
{
public:
  explicit Init_PlaneStamped_pose(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_extents pose(::zed_msgs::msg::PlaneStamped::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_PlaneStamped_extents(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_center
{
public:
  explicit Init_PlaneStamped_center(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_pose center(::zed_msgs::msg::PlaneStamped::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_PlaneStamped_pose(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_normal
{
public:
  explicit Init_PlaneStamped_normal(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_center normal(::zed_msgs::msg::PlaneStamped::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_PlaneStamped_center(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_coefficients
{
public:
  explicit Init_PlaneStamped_coefficients(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_normal coefficients(::zed_msgs::msg::PlaneStamped::_coefficients_type arg)
  {
    msg_.coefficients = std::move(arg);
    return Init_PlaneStamped_normal(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_mesh
{
public:
  explicit Init_PlaneStamped_mesh(::zed_msgs::msg::PlaneStamped & msg)
  : msg_(msg)
  {}
  Init_PlaneStamped_coefficients mesh(::zed_msgs::msg::PlaneStamped::_mesh_type arg)
  {
    msg_.mesh = std::move(arg);
    return Init_PlaneStamped_coefficients(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

class Init_PlaneStamped_header
{
public:
  Init_PlaneStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaneStamped_mesh header(::zed_msgs::msg::PlaneStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlaneStamped_mesh(msg_);
  }

private:
  ::zed_msgs::msg::PlaneStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::zed_msgs::msg::PlaneStamped>()
{
  return zed_msgs::msg::builder::Init_PlaneStamped_header();
}

}  // namespace zed_msgs

#endif  // ZED_MSGS__MSG__DETAIL__PLANE_STAMPED__BUILDER_HPP_
