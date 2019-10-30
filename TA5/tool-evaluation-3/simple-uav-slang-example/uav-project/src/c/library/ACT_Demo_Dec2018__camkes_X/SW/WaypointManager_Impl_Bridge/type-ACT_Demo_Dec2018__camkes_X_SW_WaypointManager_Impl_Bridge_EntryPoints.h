#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.EntryPoints
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints *ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints;
struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z WaypointManager_Impl_BridgeId;
  Z flight_plan_Id;
  Z mission_rcv_Id;
  Z mission_window_Id;
  Z tracking_id_Id;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints(x) struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints x = { .type = TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints }


#endif