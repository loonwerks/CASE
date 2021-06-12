#include <FlightController_Impl_FlightController_FlightController_api.h>
#include <FlightController_Impl_FlightController_FlightController.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  HAMR_SW_Mission value){
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "api_get_FlightPlan__HAMR_SW_FlightController_Impl_FlightController_FlightController", 0);

  // Option_642C2E = Option[HAMR.SW.FlightController_Impl_Operational_Api]
  DeclNewHAMR_SW_FlightController_Impl_Operational_Api(api);
  Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &api, HAMR_SW_FlightController_Impl_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));

  // Option_7CFE74 = Option[HAMR.SW.Mission]
  // Some_6BEBF6 = Some[HAMR.SW.Mission]
  DeclNewOption_7CFE74(t_0);
  HAMR_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(
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

bool api_get_Alert__HAMR_SW_FlightController_Impl_FlightController_FlightController(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "api_get_Alert__HAMR_SW_FlightController_Impl_FlightController_FlightController", 0);

  // Option_642C2E = Option[HAMR.SW.FlightController_Impl_Operational_Api]
  DeclNewHAMR_SW_FlightController_Impl_Operational_Api(api);
  Option_642C2E_get_(SF (HAMR_SW_FlightController_Impl_Operational_Api) &api, HAMR_SW_FlightController_Impl_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  HAMR_SW_FlightController_Impl_Operational_Api_get_Alert_(
    SF
    (Option_C622DB) &t_0,
    &api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController", 0);

  // Option_7A3D33 = Option[HAMR.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(api);
  Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &api, HAMR_SW_FlightController_Impl_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightController_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "api_logDebug__HAMR_SW_FlightController_Impl_FlightController_FlightController", 0);

  // Option_7A3D33 = Option[HAMR.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(api);
  Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &api, HAMR_SW_FlightController_Impl_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightController_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_FlightController_Impl_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "api_logError__HAMR_SW_FlightController_Impl_FlightController_FlightController", 0);

  // Option_7A3D33 = Option[HAMR.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightController_Impl_Initialization_Api(api);
  Option_7A3D33_get_(SF (HAMR_SW_FlightController_Impl_Initialization_Api) &api, HAMR_SW_FlightController_Impl_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightController_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_initialise(
  STACK_FRAME
  HAMR_SW_FlightController_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_initialise", 0);

  HAMR_SW_FlightController_Impl_FlightController_FlightController_initialise_(SF_LAST);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_finalise(
  STACK_FRAME
  HAMR_SW_FlightController_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_finalise", 0);

  HAMR_SW_FlightController_Impl_FlightController_FlightController_finalise_(SF_LAST);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan(
  STACK_FRAME
  HAMR_SW_FlightController_Impl_Operational_Api api,
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan", 0);

  HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan_(SF value);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert(
  STACK_FRAME
  HAMR_SW_FlightController_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_api.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert", 0);

  HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert_(SF_LAST);
}
