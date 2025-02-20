// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/Keypoint2Di.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Keypoint2Di in the package zed_msgs.
typedef struct zed_msgs__msg__Keypoint2Di
{
  uint32_t kp[2];
} zed_msgs__msg__Keypoint2Di;

// Struct for a sequence of zed_msgs__msg__Keypoint2Di.
typedef struct zed_msgs__msg__Keypoint2Di__Sequence
{
  zed_msgs__msg__Keypoint2Di * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__Keypoint2Di__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__KEYPOINT2_DI__STRUCT_H_
