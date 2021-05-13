#ifndef RESPONSEMONITOR_IMPL_SW_RESPONSEMONITOR_RESPONSEMONITOR_API_H
#define RESPONSEMONITOR_IMPL_SW_RESPONSEMONITOR_RESPONSEMONITOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  HAMR_SW_Mission value);

bool api_get_MissionCommand__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

void api_put_Alert__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str);

#endif
