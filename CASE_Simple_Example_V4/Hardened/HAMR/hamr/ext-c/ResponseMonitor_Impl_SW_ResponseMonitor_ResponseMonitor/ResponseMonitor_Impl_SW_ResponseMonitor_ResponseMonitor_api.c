#include <ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.h>
#include <ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  HAMR_SW_Mission value){
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_get_FlightPlan__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_51DB4A = Option[HAMR.SW.ResponseMonitor_Impl_Operational_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Operational_Api(api);
  Option_51DB4A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Operational_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_operational_api(SF_LAST));

  // Option_7CFE74 = Option[HAMR.SW.Mission]
  // Some_6BEBF6 = Some[HAMR.SW.Mission]
  DeclNewOption_7CFE74(t_0);
  HAMR_SW_ResponseMonitor_Impl_Operational_Api_get_FlightPlan_(
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

bool api_get_MissionCommand__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value){
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_get_MissionCommand__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_51DB4A = Option[HAMR.SW.ResponseMonitor_Impl_Operational_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Operational_Api(api);
  Option_51DB4A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Operational_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_operational_api(SF_LAST));

  // Option_50CDFF = Option[HAMR.SW.RF_Msg_Impl]
  // Some_B09443 = Some[HAMR.SW.RF_Msg_Impl]
  DeclNewOption_50CDFF(t_0);
  HAMR_SW_ResponseMonitor_Impl_Operational_Api_get_MissionCommand_(
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

void api_put_Alert__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_put_Alert__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_FAEF9A = Option[HAMR.SW.ResponseMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Initialization_Api(api);
  Option_FAEF9A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Initialization_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_ResponseMonitor_Impl_Initialization_Api_put_Alert_(
    SF
    &api);
}

void api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_FAEF9A = Option[HAMR.SW.ResponseMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Initialization_Api(api);
  Option_FAEF9A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Initialization_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_ResponseMonitor_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_logDebug__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_FAEF9A = Option[HAMR.SW.ResponseMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Initialization_Api(api);
  Option_FAEF9A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Initialization_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_ResponseMonitor_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "api_logError__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor", 0);

  // Option_FAEF9A = Option[HAMR.SW.ResponseMonitor_Impl_Initialization_Api]
  DeclNewHAMR_SW_ResponseMonitor_Impl_Initialization_Api(api);
  Option_FAEF9A_get_(SF (HAMR_SW_ResponseMonitor_Impl_Initialization_Api) &api, HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_ResponseMonitor_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_initialise(
  STACK_FRAME
  HAMR_SW_ResponseMonitor_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_initialise", 0);

  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_initialise_(SF_LAST);
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_finalise(
  STACK_FRAME
  HAMR_SW_ResponseMonitor_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_finalise", 0);

  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_finalise_(SF_LAST);
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan(
  STACK_FRAME
  HAMR_SW_ResponseMonitor_Impl_Operational_Api api,
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan", 0);

  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan_(SF value);
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand(
  STACK_FRAME
  HAMR_SW_ResponseMonitor_Impl_Operational_Api api,
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand", 0);

  HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand_(SF value);
}
