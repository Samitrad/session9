// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_package:srv/FindClosestWall.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_
#define ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FindClosestWall in the package action_package.
typedef struct action_package__srv__FindClosestWall_Request
{
  uint8_t structure_needs_at_least_one_member;
} action_package__srv__FindClosestWall_Request;

// Struct for a sequence of action_package__srv__FindClosestWall_Request.
typedef struct action_package__srv__FindClosestWall_Request__Sequence
{
  action_package__srv__FindClosestWall_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__srv__FindClosestWall_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FindClosestWall in the package action_package.
typedef struct action_package__srv__FindClosestWall_Response
{
  /// Response
  float distance;
} action_package__srv__FindClosestWall_Response;

// Struct for a sequence of action_package__srv__FindClosestWall_Response.
typedef struct action_package__srv__FindClosestWall_Response__Sequence
{
  action_package__srv__FindClosestWall_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__srv__FindClosestWall_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PACKAGE__SRV__DETAIL__FIND_CLOSEST_WALL__STRUCT_H_
