#ifndef SIREUM_TYPE_H_uav_project_extern_SW_Command_Impl
#define SIREUM_TYPE_H_uav_project_extern_SW_Command_Impl
#include <misc.h>

// uav_project_extern.SW.Command_Impl
#include <type-uav_project_extern_SW_Map.h>
#include <type-uav_project_extern_SW_FlightPattern.h>

typedef struct uav_project_extern_SW_Command_Impl *uav_project_extern_SW_Command_Impl;
struct uav_project_extern_SW_Command_Impl {
  TYPE type;
  struct uav_project_extern_SW_Map Map;
  uav_project_extern_SW_FlightPattern Pattern;
  B HMAC;
};

#define DeclNewuav_project_extern_SW_Command_Impl(x) struct uav_project_extern_SW_Command_Impl x = { .type = Tuav_project_extern_SW_Command_Impl }

#endif