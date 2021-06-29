#ifndef SIREUM_TYPE_H_HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api
#define SIREUM_TYPE_H_HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api

typedef struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api *HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api;
struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api {
  TYPE type;
  Z id;
  Z MissionCommand_Id;
  Z FlightPlan_Id;
};

#define DeclNewHAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api(x) struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api x = { .type = THAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api }

#ifdef __cplusplus
}
#endif

#endif