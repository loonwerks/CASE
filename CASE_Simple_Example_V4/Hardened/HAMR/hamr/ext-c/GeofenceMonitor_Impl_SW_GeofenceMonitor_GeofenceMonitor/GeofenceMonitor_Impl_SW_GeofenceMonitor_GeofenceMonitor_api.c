#include <GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.h>
#include <GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor.h>

// This file was auto-generated.  Do not edit

bool api_get_FlyZones__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_MapArray value){
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_get_FlyZones__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_AB3FA9 = Option[HAMR.SW.GeofenceMonitor_Impl_Operational_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Operational_Api(api);
  Option_AB3FA9_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Operational_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_operational_api(SF_LAST));

  // Option_D26A96 = Option[HAMR.SW.MapArray]
  // Some_D93892 = Some[HAMR.SW.MapArray]
  DeclNewOption_D26A96(t_0);
  HAMR_SW_GeofenceMonitor_Impl_Operational_Api_get_FlyZones_(
    SF
    (Option_D26A96) &t_0,
    &api);

  if(t_0.type == TSome_D93892){
    Type_assign(value, &t_0.Some_D93892.value, sizeof(struct HAMR_SW_MapArray));
    return true;
  } else {
    return false;
  }
}

bool api_get_FlightPlan_In__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_Mission value){
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_get_FlightPlan_In__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_AB3FA9 = Option[HAMR.SW.GeofenceMonitor_Impl_Operational_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Operational_Api(api);
  Option_AB3FA9_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Operational_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_operational_api(SF_LAST));

  // Option_7CFE74 = Option[HAMR.SW.Mission]
  // Some_6BEBF6 = Some[HAMR.SW.Mission]
  DeclNewOption_7CFE74(t_0);
  HAMR_SW_GeofenceMonitor_Impl_Operational_Api_get_FlightPlan_In_(
    SF
    (Option_7CFE74) &t_0,
    &api);

  if(t_0.type == TSome_6BEBF6){
    Type_assign(value, &t_0.Some_6BEBF6.value, sizeof(struct HAMR_SW_Mission));
    return true;
  } else {
    return false;
  }
}

void api_put_FlightPlan_Out__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_put_FlightPlan_Out__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_68F9C4 = Option[HAMR.SW.GeofenceMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Initialization_Api(api);
  Option_68F9C4_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Initialization_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api_put_FlightPlan_Out_(
    SF
    &api,
    value);
}

void api_put_Alert__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_put_Alert__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_68F9C4 = Option[HAMR.SW.GeofenceMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Initialization_Api(api);
  Option_68F9C4_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Initialization_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api_put_Alert_(
    SF
    &api);
}

void api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_logInfo__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_68F9C4 = Option[HAMR.SW.GeofenceMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Initialization_Api(api);
  Option_68F9C4_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Initialization_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_logDebug__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_68F9C4 = Option[HAMR.SW.GeofenceMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Initialization_Api(api);
  Option_68F9C4_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Initialization_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "api_logError__HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor", 0);

  // Option_68F9C4 = Option[HAMR.SW.GeofenceMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_GeofenceMonitor_Impl_Initialization_Api(api);
  Option_68F9C4_get_(SF (HAMR_SW_GeofenceMonitor_Impl_Initialization_Api) &api, HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_initialise(
  STACK_FRAME
  HAMR_SW_GeofenceMonitor_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_initialise", 0);

  HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_initialise_(SF_LAST);
}

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_finalise(
  STACK_FRAME
  HAMR_SW_GeofenceMonitor_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_finalise", 0);

  HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_finalise_(SF_LAST);
}

Unit HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In(
  STACK_FRAME
  HAMR_SW_GeofenceMonitor_Impl_Operational_Api api,
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_api.c", "", "HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In", 0);

  HAMR_SW_GeofenceMonitor_Impl_SW_GeofenceMonitor_GeofenceMonitor_handle_FlightPlan_In_(SF value);
}
