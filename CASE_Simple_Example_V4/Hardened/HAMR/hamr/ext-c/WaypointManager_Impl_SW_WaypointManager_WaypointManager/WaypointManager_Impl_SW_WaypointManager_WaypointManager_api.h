#ifndef WAYPOINTMANAGER_IMPL_SW_WAYPOINTMANAGER_WAYPOINTMANAGER_API_H
#define WAYPOINTMANAGER_IMPL_SW_WAYPOINTMANAGER_WAYPOINTMANAGER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_put_MissionWindow__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_MissionWindow value);

bool api_get_Status__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_Coordinate_Impl value);

bool api_get_ReturnHome__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str);

#endif
