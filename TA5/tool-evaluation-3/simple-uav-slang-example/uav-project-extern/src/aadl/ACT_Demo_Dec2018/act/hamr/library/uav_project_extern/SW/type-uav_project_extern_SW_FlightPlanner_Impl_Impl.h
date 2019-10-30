#ifndef SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Impl
#define SIREUM_TYPE_H_uav_project_extern_SW_FlightPlanner_Impl_Impl
#include <misc.h>

// uav_project_extern.SW.FlightPlanner_Impl_Impl
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api.h>

typedef struct uav_project_extern_SW_FlightPlanner_Impl_Impl *uav_project_extern_SW_FlightPlanner_Impl_Impl;
struct uav_project_extern_SW_FlightPlanner_Impl_Impl {
  TYPE type;
  struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api api;
  B missioncommand_sent;
};

#define DeclNewuav_project_extern_SW_FlightPlanner_Impl_Impl(x) struct uav_project_extern_SW_FlightPlanner_Impl_Impl x = { .type = Tuav_project_extern_SW_FlightPlanner_Impl_Impl }

#endif