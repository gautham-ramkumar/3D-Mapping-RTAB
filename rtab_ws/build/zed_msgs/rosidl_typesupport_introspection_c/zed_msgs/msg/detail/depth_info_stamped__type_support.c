// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from zed_msgs:msg/DepthInfoStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "zed_msgs/msg/detail/depth_info_stamped__rosidl_typesupport_introspection_c.h"
#include "zed_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "zed_msgs/msg/detail/depth_info_stamped__functions.h"
#include "zed_msgs/msg/detail/depth_info_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  zed_msgs__msg__DepthInfoStamped__init(message_memory);
}

void zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_fini_function(void * message_memory)
{
  zed_msgs__msg__DepthInfoStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__DepthInfoStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__DepthInfoStamped, min_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(zed_msgs__msg__DepthInfoStamped, max_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_members = {
  "zed_msgs__msg",  // message namespace
  "DepthInfoStamped",  // message name
  3,  // number of fields
  sizeof(zed_msgs__msg__DepthInfoStamped),
  zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_member_array,  // message members
  zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_type_support_handle = {
  0,
  &zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_zed_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, zed_msgs, msg, DepthInfoStamped)() {
  zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_type_support_handle.typesupport_identifier) {
    zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &zed_msgs__msg__DepthInfoStamped__rosidl_typesupport_introspection_c__DepthInfoStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
