#include <FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.h>
#include <FlightPlanner_Impl_FlightPlanner_FlightPlanner.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value){
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner", 0);

  // Option_6475FA = Option[HAMR.SW.FlightPlanner_Impl_Operational_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(api);
  Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &api, HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));

  // Option_50CDFF = Option[HAMR.SW.RF_Msg_Impl]
  // Some_B09443 = Some[HAMR.SW.RF_Msg_Impl]
  DeclNewOption_50CDFF(t_0);
  HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_(
    SF
    (Option_50CDFF) &t_0,
    &api);

  if(t_0.type == TSome_B09443){
    Type_assign(value, &t_0.Some_B09443.value, sizeof(struct HAMR_SW_RF_Msg_Impl));
    return true;
  } else {
    return false;
  }
}

void api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_put_FlightPlan_(
    SF
    &api,
    value);
}

void api_logInfo__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "api_logInfo__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "api_logDebug__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "api_logError__HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_initialise(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_initialise", 0);

  HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_initialise_(SF_LAST);
}

Unit HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_finalise(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_finalise", 0);

  HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_finalise_(SF_LAST);
}

Unit HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_handle_MissionCommand(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Operational_Api api,
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_handle_MissionCommand", 0);

  HAMR_SW_FlightPlanner_Impl_FlightPlanner_FlightPlanner_handle_MissionCommand_(SF value);
}
