#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Command_Impl_Payload
#define SIREUM_TYPE_H_uav_project_extern_SW_Command_Impl_Payload
#include <misc.h>

// uav_project_extern.SW.Command_Impl_Payload
#include <type-uav_project_extern_SW_Command_Impl.h>

typedef struct uav_project_extern_SW_Command_Impl_Payload *uav_project_extern_SW_Command_Impl_Payload;
struct uav_project_extern_SW_Command_Impl_Payload {
  TYPE type;
  struct uav_project_extern_SW_Command_Impl value;
};

#define DeclNewuav_project_extern_SW_Command_Impl_Payload(x) struct uav_project_extern_SW_Command_Impl_Payload x = { .type = Tuav_project_extern_SW_Command_Impl_Payload }

#endif