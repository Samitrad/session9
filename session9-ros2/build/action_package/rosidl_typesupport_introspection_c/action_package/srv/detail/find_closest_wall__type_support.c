// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from action_package:srv/FindClosestWall.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "action_package/srv/detail/find_closest_wall__rosidl_typesupport_introspection_c.h"
#include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "action_package/srv/detail/find_closest_wall__functions.h"
#include "action_package/srv/detail/find_closest_wall__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__srv__FindClosestWall_Request__init(message_memory);
}

void action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_fini_function(void * message_memory)
{
  action_package__srv__FindClosestWall_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__srv__FindClosestWall_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_members = {
  "action_package__srv",  // message namespace
  "FindClosestWall_Request",  // message name
  1,  // number of fields
  sizeof(action_package__srv__FindClosestWall_Request),
  action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_member_array,  // message members
  action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_type_support_handle = {
  0,
  &action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Request)() {
  if (!action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_type_support_handle.typesupport_identifier) {
    action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_package__srv__FindClosestWall_Request__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "action_package/srv/detail/find_closest_wall__rosidl_typesupport_introspection_c.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "action_package/srv/detail/find_closest_wall__functions.h"
// already included above
// #include "action_package/srv/detail/find_closest_wall__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  action_package__srv__FindClosestWall_Response__init(message_memory);
}

void action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_fini_function(void * message_memory)
{
  action_package__srv__FindClosestWall_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_member_array[1] = {
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(action_package__srv__FindClosestWall_Response, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_members = {
  "action_package__srv",  // message namespace
  "FindClosestWall_Response",  // message name
  1,  // number of fields
  sizeof(action_package__srv__FindClosestWall_Response),
  action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_member_array,  // message members
  action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_type_support_handle = {
  0,
  &action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Response)() {
  if (!action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_type_support_handle.typesupport_identifier) {
    action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &action_package__srv__FindClosestWall_Response__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "action_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "action_package/srv/detail/find_closest_wall__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_members = {
  "action_package__srv",  // service namespace
  "FindClosestWall",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_Request_message_type_support_handle,
  NULL  // response message
  // action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_Response_message_type_support_handle
};

static rosidl_service_type_support_t action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_type_support_handle = {
  0,
  &action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_action_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall)() {
  if (!action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_type_support_handle.typesupport_identifier) {
    action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, action_package, srv, FindClosestWall_Response)()->data;
  }

  return &action_package__srv__detail__find_closest_wall__rosidl_typesupport_introspection_c__FindClosestWall_service_type_support_handle;
}