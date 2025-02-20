// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from zed_msgs:msg/ObjectsStamped.idl
// generated code does not contain a copyright notice

#ifndef ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__STRUCT_H_
#define ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "zed_msgs/msg/detail/object__struct.h"

/// Struct defined in msg/ObjectsStamped in the package zed_msgs.
/**
  * Standard Header
 */
typedef struct zed_msgs__msg__ObjectsStamped
{
  std_msgs__msg__Header header;
  /// Array of `object_stamped` topics
  zed_msgs__msg__Object__Sequence objects;
} zed_msgs__msg__ObjectsStamped;

// Struct for a sequence of zed_msgs__msg__ObjectsStamped.
typedef struct zed_msgs__msg__ObjectsStamped__Sequence
{
  zed_msgs__msg__ObjectsStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} zed_msgs__msg__ObjectsStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ZED_MSGS__MSG__DETAIL__OBJECTS_STAMPED__STRUCT_H_
