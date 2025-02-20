// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/Skeleton2D.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__SKELETON2_D__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__SKELETON2_D__STRUCT_H_

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
#include "zed_msgs/msg/detail/keypoint2_df__struct.h"

/// Struct defined in msg/Skeleton2D in the package zed_msgs.
/**
  * Skeleton joints
 */
typedef struct zed_msgs__msg__Skeleton2D
{
  zed_msgs__msg__Keypoint2Df keypoints[70];
} zed_msgs__msg__Skeleton2D;

// Struct for a sequence of zed_msgs__msg__Skeleton2D.
typedef struct zed_msgs__msg__Skeleton2D__Sequence
{
  zed_msgs__msg__Skeleton2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__Skeleton2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__SKELETON2_D__STRUCT_H_
