#ifndef SIREUM_TYPE_H_uav_project_extern_SW_MissionWindow
#define SIREUM_TYPE_H_uav_project_extern_SW_MissionWindow
#include <misc.h>

// uav_project_extern.SW.MissionWindow
#include <type-org_sireum_IS_83A978.h>

typedef struct uav_project_extern_SW_MissionWindow *uav_project_extern_SW_MissionWindow;
struct uav_project_extern_SW_MissionWindow {
  TYPE type;
  struct IS_83A978 value;
};

#define DeclNewuav_project_extern_SW_MissionWindow(x) struct uav_project_extern_SW_MissionWindow x = { .type = Tuav_project_extern_SW_MissionWindow }

#endif