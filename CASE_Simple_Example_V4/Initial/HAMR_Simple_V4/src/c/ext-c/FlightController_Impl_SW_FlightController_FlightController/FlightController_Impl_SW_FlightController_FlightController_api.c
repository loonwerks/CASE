#include <FlightController_Impl_SW_FlightController_FlightController_api.h>
#include <FlightController_Impl_SW_FlightController_FlightController.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "api_get_FlightPlan__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_3A1F68 = Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(api);
  Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &api, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));

  HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_FlightPlan_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

bool api_get_Alert__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "api_get_Alert__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController", 0);

  // Option_3A1F68 = Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
  DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Operational_Api(api);
  Option_3A1F68_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) &api, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_operational_api(SF_LAST));

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api_get_Alert_(
    SF
    (Option_C622DB) &t_0,
    &api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController", 0);

  // Option_6F9BAD = Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(api);
  Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "api_logDebug__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController", 0);

  // Option_6F9BAD = Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(api);
  Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "api_logError__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController", 0);

  // Option_6F9BAD = Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api(api);
  Option_6F9BAD_get_(SF (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_initialise(
  STACK_FRAME
  HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_initialise", 0);

  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_initialise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_finalise(
  STACK_FRAME
  HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_finalise", 0);

  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_finalise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan(
  STACK_FRAME
  HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api,
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan", 0);

  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_(SF value);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_Alert(
  STACK_FRAME
  HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_Alert", 0);

  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_handle_Alert_(SF_LAST);
}
