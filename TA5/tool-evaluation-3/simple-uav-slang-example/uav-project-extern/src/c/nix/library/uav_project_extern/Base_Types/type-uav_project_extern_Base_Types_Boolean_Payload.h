#ifndef SIREUM_TYPE_H_uav_project_extern_Base_Types_Boolean_Payload
#define SIREUM_TYPE_H_uav_project_extern_Base_Types_Boolean_Payload
#include <misc.h>

// uav_project_extern.Base_Types.Boolean_Payload

typedef struct uav_project_extern_Base_Types_Boolean_Payload *uav_project_extern_Base_Types_Boolean_Payload;
struct uav_project_extern_Base_Types_Boolean_Payload {
  TYPE type;
  B value;
};

#define DeclNewuav_project_extern_Base_Types_Boolean_Payload(x) struct uav_project_extern_Base_Types_Boolean_Payload x = { .type = Tuav_project_extern_Base_Types_Boolean_Payload }

#endif