// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_multi_target:msg/CurrentTarget.idl
// generated code does not contain a copyright notice

#include "turtle_multi_target/msg/detail/current_target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_multi_target
const rosidl_type_hash_t *
turtle_multi_target__msg__CurrentTarget__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0xfd, 0xbb, 0xe9, 0x46, 0xe3, 0xde, 0xdd,
      0xc5, 0x5b, 0x3a, 0xae, 0x04, 0x40, 0x0a, 0x46,
      0x1c, 0xeb, 0xa7, 0x8f, 0x92, 0xd8, 0xdb, 0x6b,
      0xb8, 0xae, 0x2e, 0x22, 0xa4, 0x1b, 0x69, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char turtle_multi_target__msg__CurrentTarget__TYPE_NAME[] = "turtle_multi_target/msg/CurrentTarget";

// Define type names, field names, and default values
static char turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_name[] = "target_name";
static char turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_x[] = "target_x";
static char turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_y[] = "target_y";
static char turtle_multi_target__msg__CurrentTarget__FIELD_NAME__distance_to_target[] = "distance_to_target";

static rosidl_runtime_c__type_description__Field turtle_multi_target__msg__CurrentTarget__FIELDS[] = {
  {
    {turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_name, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_multi_target__msg__CurrentTarget__FIELD_NAME__target_y, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_multi_target__msg__CurrentTarget__FIELD_NAME__distance_to_target, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_multi_target__msg__CurrentTarget__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_multi_target__msg__CurrentTarget__TYPE_NAME, 37, 37},
      {turtle_multi_target__msg__CurrentTarget__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string target_name\n"
  "float64 target_x\n"
  "float64 target_y\n"
  "float64 distance_to_target";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_multi_target__msg__CurrentTarget__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_multi_target__msg__CurrentTarget__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 80, 80},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_multi_target__msg__CurrentTarget__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_multi_target__msg__CurrentTarget__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
