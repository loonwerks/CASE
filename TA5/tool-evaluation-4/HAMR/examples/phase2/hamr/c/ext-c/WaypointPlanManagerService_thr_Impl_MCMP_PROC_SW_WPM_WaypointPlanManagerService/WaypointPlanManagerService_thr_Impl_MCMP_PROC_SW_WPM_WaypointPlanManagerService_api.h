#ifndef WAYPOINTPLANMANAGERSERVICE_THR_IMPL_MCMP_PROC_SW_WPM_WAYPOINTPLANMANAGERSERVICE_API_H
#define WAYPOINTPLANMANAGERSERVICE_THR_IMPL_MCMP_PROC_SW_WPM_WAYPOINTPLANMANAGERSERVICE_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_AutomationResponse__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_AirVehicleState__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_MissionCommand__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_ReturnHome__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY);

void api_logInfo__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService(
  STACK_FRAME
  String str);

#endif
