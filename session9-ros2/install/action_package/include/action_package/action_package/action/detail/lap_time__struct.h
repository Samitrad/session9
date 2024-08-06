// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_package:action/LapTime.idl
// generated code does not contain a copyright notice

#ifndef ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__STRUCT_H_
#define ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_Goal
{
  uint8_t structure_needs_at_least_one_member;
} action_package__action__LapTime_Goal;

// Struct for a sequence of action_package__action__LapTime_Goal.
typedef struct action_package__action__LapTime_Goal__Sequence
{
  action_package__action__LapTime_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_Result
{
  double total_time;
} action_package__action__LapTime_Result;

// Struct for a sequence of action_package__action__LapTime_Result.
typedef struct action_package__action__LapTime_Result__Sequence
{
  action_package__action__LapTime_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_Feedback
{
  double elapsed_time;
} action_package__action__LapTime_Feedback;

// Struct for a sequence of action_package__action__LapTime_Feedback.
typedef struct action_package__action__LapTime_Feedback__Sequence
{
  action_package__action__LapTime_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_package/action/detail/lap_time__struct.h"

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_package__action__LapTime_Goal goal;
} action_package__action__LapTime_SendGoal_Request;

// Struct for a sequence of action_package__action__LapTime_SendGoal_Request.
typedef struct action_package__action__LapTime_SendGoal_Request__Sequence
{
  action_package__action__LapTime_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_package__action__LapTime_SendGoal_Response;

// Struct for a sequence of action_package__action__LapTime_SendGoal_Response.
typedef struct action_package__action__LapTime_SendGoal_Response__Sequence
{
  action_package__action__LapTime_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_package__action__LapTime_GetResult_Request;

// Struct for a sequence of action_package__action__LapTime_GetResult_Request.
typedef struct action_package__action__LapTime_GetResult_Request__Sequence
{
  action_package__action__LapTime_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_package/action/detail/lap_time__struct.h"

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_GetResult_Response
{
  int8_t status;
  action_package__action__LapTime_Result result;
} action_package__action__LapTime_GetResult_Response;

// Struct for a sequence of action_package__action__LapTime_GetResult_Response.
typedef struct action_package__action__LapTime_GetResult_Response__Sequence
{
  action_package__action__LapTime_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_package/action/detail/lap_time__struct.h"

/// Struct defined in action/LapTime in the package action_package.
typedef struct action_package__action__LapTime_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_package__action__LapTime_Feedback feedback;
} action_package__action__LapTime_FeedbackMessage;

// Struct for a sequence of action_package__action__LapTime_FeedbackMessage.
typedef struct action_package__action__LapTime_FeedbackMessage__Sequence
{
  action_package__action__LapTime_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_package__action__LapTime_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_PACKAGE__ACTION__DETAIL__LAP_TIME__STRUCT_H_
