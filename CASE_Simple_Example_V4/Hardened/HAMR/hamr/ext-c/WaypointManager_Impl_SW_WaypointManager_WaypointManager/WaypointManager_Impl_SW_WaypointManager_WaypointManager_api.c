#include <WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.h>
#include <WaypointManager_Impl_SW_WaypointManager_WaypointManager.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_Mission value){
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_get_FlightPlan__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_45795D = Option[HAMR.SW.WaypointManager_Impl_Operational_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Operational_Api(api);
  Option_45795D_get_(SF (HAMR_SW_WaypointManager_Impl_Operational_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_operational_api(SF_LAST));

  // Option_7CFE74 = Option[HAMR.SW.Mission]
  // Some_6BEBF6 = Some[HAMR.SW.Mission]
  DeclNewOption_7CFE74(t_0);
  HAMR_SW_WaypointManager_Impl_Operational_Api_get_FlightPlan_(
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

void api_put_MissionWindow__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_put_MissionWindow__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_874B1E = Option[HAMR.SW.WaypointManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Initialization_Api(api);
  Option_874B1E_get_(SF (HAMR_SW_WaypointManager_Impl_Initialization_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_WaypointManager_Impl_Initialization_Api_put_MissionWindow_(
    SF
    &api,
    value);
}

bool api_get_Status__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  HAMR_SW_Coordinate_Impl value){
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_get_Status__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_45795D = Option[HAMR.SW.WaypointManager_Impl_Operational_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Operational_Api(api);
  Option_45795D_get_(SF (HAMR_SW_WaypointManager_Impl_Operational_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_operational_api(SF_LAST));

  // Option_539DFB = Option[HAMR.SW.Coordinate_Impl]
  // Some_356A30 = Some[HAMR.SW.Coordinate_Impl]
  DeclNewOption_539DFB(t_0);
  HAMR_SW_WaypointManager_Impl_Operational_Api_get_Status_(
    SF
    (Option_539DFB) &t_0,
    &api);

  if(t_0.type == TSome_356A30){
    Type_assign(value, &t_0.Some_356A30.value, sizeof(struct HAMR_SW_Coordinate_Impl));
    return true;
  } else {
    return false;
  }
}

bool api_get_ReturnHome__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_get_ReturnHome__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_45795D = Option[HAMR.SW.WaypointManager_Impl_Operational_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Operational_Api(api);
  Option_45795D_get_(SF (HAMR_SW_WaypointManager_Impl_Operational_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_operational_api(SF_LAST));

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  HAMR_SW_WaypointManager_Impl_Operational_Api_get_ReturnHome_(
    SF
    (Option_C622DB) &t_0,
    &api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_874B1E = Option[HAMR.SW.WaypointManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Initialization_Api(api);
  Option_874B1E_get_(SF (HAMR_SW_WaypointManager_Impl_Initialization_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_WaypointManager_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_logDebug__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_874B1E = Option[HAMR.SW.WaypointManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Initialization_Api(api);
  Option_874B1E_get_(SF (HAMR_SW_WaypointManager_Impl_Initialization_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_WaypointManager_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "api_logError__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager", 0);

  // Option_874B1E = Option[HAMR.SW.WaypointManager_Impl_Initialization_Api]
  DeclNewHAMR_SW_WaypointManager_Impl_Initialization_Api(api);
  Option_874B1E_get_(SF (HAMR_SW_WaypointManager_Impl_Initialization_Api) &api, HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_WaypointManager_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_initialise(
  STACK_FRAME
  HAMR_SW_WaypointManager_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_initialise", 0);

  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_initialise_(SF_LAST);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_finalise(
  STACK_FRAME
  HAMR_SW_WaypointManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_finalise", 0);

  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_finalise_(SF_LAST);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan(
  STACK_FRAME
  HAMR_SW_WaypointManager_Impl_Operational_Api api,
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan", 0);

  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan_(SF value);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status(
  STACK_FRAME
  HAMR_SW_WaypointManager_Impl_Operational_Api api,
  HAMR_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status", 0);

  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status_(SF value);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome(
  STACK_FRAME
  HAMR_SW_WaypointManager_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome", 0);

  HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome_(SF_LAST);
}
