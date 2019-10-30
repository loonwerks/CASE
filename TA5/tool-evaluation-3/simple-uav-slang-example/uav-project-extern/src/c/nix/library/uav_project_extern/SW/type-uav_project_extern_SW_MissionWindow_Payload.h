#ifndef SIREUM_TYPE_H_uav_project_extern_SW_MissionWindow_Payload
#define SIREUM_TYPE_H_uav_project_extern_SW_MissionWindow_Payload
#include <misc.h>

// uav_project_extern.SW.MissionWindow_Payload
#include <type-uav_project_extern_SW_MissionWindow.h>

typedef struct uav_project_extern_SW_MissionWindow_Payload *uav_project_extern_SW_MissionWindow_Payload;
struct uav_project_extern_SW_MissionWindow_Payload {
  TYPE type;
  struct uav_project_extern_SW_MissionWindow value;
};

#define DeclNewuav_project_extern_SW_MissionWindow_Payload(x) struct uav_project_extern_SW_MissionWindow_Payload x = { .type = Tuav_project_extern_SW_MissionWindow_Payload }

#endif