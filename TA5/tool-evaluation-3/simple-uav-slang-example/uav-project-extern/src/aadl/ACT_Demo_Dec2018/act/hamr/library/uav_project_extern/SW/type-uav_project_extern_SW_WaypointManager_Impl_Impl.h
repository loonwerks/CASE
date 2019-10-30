#ifndef SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Impl
#define SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Impl
#include <misc.h>

// uav_project_extern.SW.WaypointManager_Impl_Impl
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.h>
#include <type-org_sireum_Option_32416F.h>

typedef struct uav_project_extern_SW_WaypointManager_Impl_Impl *uav_project_extern_SW_WaypointManager_Impl_Impl;
struct uav_project_extern_SW_WaypointManager_Impl_Impl {
  TYPE type;
  union Option_32416F _mission;
  struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api api;
};

#define DeclNewuav_project_extern_SW_WaypointManager_Impl_Impl(x) struct uav_project_extern_SW_WaypointManager_Impl_Impl x = { .type = Tuav_project_extern_SW_WaypointManager_Impl_Impl }

#endif