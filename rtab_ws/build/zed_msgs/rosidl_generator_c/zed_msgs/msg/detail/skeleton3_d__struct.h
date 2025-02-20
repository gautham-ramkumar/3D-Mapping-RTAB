// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/Skeleton3D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SKELETON3_D__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__SKELETON3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'keypoints'
#include "zed_msgs/msg/detail/keypoint3_d__struct.h"

/// Struct defined in msg/Skeleton3D in the package zed_msgs.
/**
  * Skeleton joints
 */
typedef struct zed_msgs__msg__Skeleton3D
{
  zed_msgs__msg__Keypoint3D keypoints[70];
} zed_msgs__msg__Skeleton3D;

// Struct for a sequence of zed_msgs__msg__Skeleton3D.
typedef struct zed_msgs__msg__Skeleton3D__Sequence
{
  zed_msgs__msg__Skeleton3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__Skeleton3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__SKELETON3_D__STRUCT_H_
