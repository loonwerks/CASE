#ifndef FLIGHTCONTROLLER_IMPL_SW_FLIGHTCONTROLLER_API_H
#define FLIGHTCONTROLLER_IMPL_SW_FLIGHTCONTROLLER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController(
  STACK_FRAME
  String str);

void api_logError__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController(
  STACK_FRAME
  String str);

#endif
