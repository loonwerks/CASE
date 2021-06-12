#ifndef MONITOR_IMPL_MONITOR_MONITOR_API_H
#define MONITOR_IMPL_MONITOR_MONITOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan_in__HAMR_SW_Monitor_Impl_Monitor_Monitor(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_put_FlightPlan_out__HAMR_SW_Monitor_Impl_Monitor_Monitor(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_put_Alert__HAMR_SW_Monitor_Impl_Monitor_Monitor(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_Monitor_Impl_Monitor_Monitor(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_Monitor_Impl_Monitor_Monitor(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_Monitor_Impl_Monitor_Monitor(
  STACK_FRAME
  String str);

#endif
