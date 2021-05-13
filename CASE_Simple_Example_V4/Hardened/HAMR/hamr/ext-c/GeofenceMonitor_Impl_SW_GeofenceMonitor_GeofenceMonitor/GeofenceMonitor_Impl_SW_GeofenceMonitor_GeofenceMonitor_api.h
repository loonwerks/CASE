#ifndef GEOFENCEMONITOR_IMPL_SW_GEOFENCEMONITOR_GEOFENCEMONITOR_API_H
#define GEOFENCEMONITOR_IMPL_SW_GEOFENCEMONITOR_GEOFENCEMONITOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_FlyZones__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_MapArray value);

bool api_get_FlightPlan_In__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_put_FlightPlan_Out__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_Mission value);

void api_put_Alert__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(STACK_FRAME_ONLY);

void api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str);

#endif
