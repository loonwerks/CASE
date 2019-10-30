#ifndef SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api
#define SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api
#include <misc.h>

// uav_project_extern.SW.FlightPlanner_Impl_Bridge.Api

typedef struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api *uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api;
struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api {
  TYPE type;
  Z id;
  Z mission_rcv_Id;
  Z recv_map_Id;
  Z flight_plan_Id;
};

#define DeclNewuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api(x) struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api x = { .type = Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api }

#endif