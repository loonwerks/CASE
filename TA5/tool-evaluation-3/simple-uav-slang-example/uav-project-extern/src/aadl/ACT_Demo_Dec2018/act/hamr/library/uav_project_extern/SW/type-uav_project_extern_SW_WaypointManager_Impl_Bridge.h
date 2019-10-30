#ifndef SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Bridge
#define SIREUM_TYPE_H_uav_project_extern_SW_WaypointManager_Impl_Bridge
#include <misc.h>

// uav_project_extern.SW.WaypointManager_Impl_Bridge
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_art_Port_97EF76.h>
#include <type-art_art_Port_CBF210.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_65F60A.h>
#include <type-art_Bridge_Ports.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.h>
#include <type-art_Bridge_EntryPoints.h>

typedef struct uav_project_extern_SW_WaypointManager_Impl_Bridge *uav_project_extern_SW_WaypointManager_Impl_Bridge;
struct uav_project_extern_SW_WaypointManager_Impl_Bridge {
  TYPE type;
  union art_DispatchPropertyProtocol dispatchProtocol;
  union art_Bridge_EntryPoints entryPoints;
  struct StaticString name;
  struct art_Port_97EF76 flight_plan;
  struct art_Port_CBF210 tracking_id;
  struct art_Port_C0524D mission_rcv;
  struct art_Port_65F60A mission_window;
  struct art_Bridge_Ports ports;
  struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api api;
  Z id;
};

#define DeclNewuav_project_extern_SW_WaypointManager_Impl_Bridge(x) struct uav_project_extern_SW_WaypointManager_Impl_Bridge x = { .type = Tuav_project_extern_SW_WaypointManager_Impl_Bridge }

#endif