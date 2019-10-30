#ifndef SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Bridge_Api
#define SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Bridge_Api
#include <misc.h>

// uav_project_extern.SW.WaypointManager_Impl_Bridge.Api

typedef struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api *uav_project_extern_SW_WaypointManager_Impl_Bridge_Api;
struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z flight_plan_Id;
  Z tracking_id_Id;
  Z mission_rcv_Id;
  Z mission_window_Id;
};

#define DeclNewuav_project_extern_SW_WaypointManager_Impl_Bridge_Api(x) struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api x = { .type = Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api }

#endif