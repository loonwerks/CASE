#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge
#include <misc.h>

// art.Bridge

#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Bridge.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct uav_project_extern_SW_RadioDriver_Impl_Bridge uav_project_extern_SW_RadioDriver_Impl_Bridge;
  struct uav_project_extern_SW_WaypointManager_Impl_Bridge uav_project_extern_SW_WaypointManager_Impl_Bridge;
  struct uav_project_extern_SW_UARTDriver_Impl_Bridge uav_project_extern_SW_UARTDriver_Impl_Bridge;
  struct uav_project_extern_SW_FlightPlanner_Impl_Bridge uav_project_extern_SW_FlightPlanner_Impl_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#endif