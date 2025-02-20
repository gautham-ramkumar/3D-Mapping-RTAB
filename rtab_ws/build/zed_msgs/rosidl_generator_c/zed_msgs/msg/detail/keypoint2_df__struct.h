// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/Keypoint2Df.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__KEYPOINT2_DF__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__KEYPOINT2_DF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Keypoint2Df in the package zed_msgs.
typedef struct zed_msgs__msg__Keypoint2Df
{
  float kp[2];
} zed_msgs__msg__Keypoint2Df;

// Struct for a sequence of zed_msgs__msg__Keypoint2Df.
typedef struct zed_msgs__msg__Keypoint2Df__Sequence
{
  zed_msgs__msg__Keypoint2Df * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__Keypoint2Df__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__KEYPOINT2_DF__STRUCT_H_
