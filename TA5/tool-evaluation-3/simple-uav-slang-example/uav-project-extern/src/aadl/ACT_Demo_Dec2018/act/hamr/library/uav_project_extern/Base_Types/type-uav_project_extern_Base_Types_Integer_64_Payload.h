#ifndef SIREUM_TYPE_H_uav_project_extern_Base_Types_Integer_64_Payload
#define SIREUM_TYPE_H_uav_project_extern_Base_Types_Integer_64_Payload
#include <misc.h>

// uav_project_extern.Base_Types.Integer_64_Payload
#include <type-org_sireum_S64.h>

typedef struct uav_project_extern_Base_Types_Integer_64_Payload *uav_project_extern_Base_Types_Integer_64_Payload;
struct uav_project_extern_Base_Types_Integer_64_Payload {
  TYPE type;
  S64 value;
};

#define DeclNewuav_project_extern_Base_Types_Integer_64_Payload(x) struct uav_project_extern_Base_Types_Integer_64_Payload x = { .type = Tuav_project_extern_Base_Types_Integer_64_Payload }

#endif