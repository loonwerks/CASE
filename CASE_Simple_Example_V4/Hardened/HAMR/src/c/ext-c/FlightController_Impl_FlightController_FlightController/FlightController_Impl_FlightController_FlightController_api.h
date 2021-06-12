#ifndef FLIGHTCONTROLLER_IMPL_FLIGHTCONTROLLER_FLIGHTCONTROLLER_API_H
#define FLIGHTCONTROLLER_IMPL_FLIGHTCONTROLLER_FLIGHTCONTROLLER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  HAMR_SW_Mission value);

bool api_get_Alert__HAMR_SW_FlightController_Impl_FlightController_FlightController(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str);

#endif
