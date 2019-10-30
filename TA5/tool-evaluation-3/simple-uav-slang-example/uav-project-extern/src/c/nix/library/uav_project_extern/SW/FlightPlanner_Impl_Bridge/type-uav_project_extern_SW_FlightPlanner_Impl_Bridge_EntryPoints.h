#ifndef SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints
#define SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints
#include <misc.h>

// uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Impl.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_82ABD8.h>

typedef struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints *uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints;
struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints {
  TYPE type;
  struct uav_project_extern_SW_FlightPlanner_Impl_Impl component;
  struct IS_82ABD8 dataInPortIds;
  struct IS_82ABD8 eventInPortIds;
  struct IS_82ABD8 dataOutPortIds;
  struct IS_82ABD8 eventOutPortIds;
  Z FlightPlanner_Impl_BridgeId;
  Z mission_rcv_Id;
  Z recv_map_Id;
  Z flight_plan_Id;
};

#define DeclNewuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints(x) struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints x = { .type = Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints }

#endif