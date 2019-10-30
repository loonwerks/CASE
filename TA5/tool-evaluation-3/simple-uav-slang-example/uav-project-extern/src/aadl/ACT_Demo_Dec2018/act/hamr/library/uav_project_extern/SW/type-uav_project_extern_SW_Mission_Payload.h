#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Mission_Payload
#define SIREUM_TYPE_H_uav_project_extern_SW_Mission_Payload
#include <misc.h>

// uav_project_extern.SW.Mission_Payload
#include <type-uav_project_extern_SW_Mission.h>

typedef struct uav_project_extern_SW_Mission_Payload *uav_project_extern_SW_Mission_Payload;
struct uav_project_extern_SW_Mission_Payload {
  TYPE type;
  struct uav_project_extern_SW_Mission value;
};

#define DeclNewuav_project_extern_SW_Mission_Payload(x) struct uav_project_extern_SW_Mission_Payload x = { .type = Tuav_project_extern_SW_Mission_Payload }

#endif