#ifndef FLIGHTPLANNER_IMPL_FLIGHTPLANNER_FLIGHTPLANNER_API_H
#define FLIGHTPLANNER_IMPL_FLIGHTPLANNER_FLIGHTPLANNER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

void api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_logInfo__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str);

#endif
