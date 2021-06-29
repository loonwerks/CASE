#include <Monitor_Impl_SW_Monitor_Monitor_api.h>
#include <Monitor_Impl_SW_Monitor_Monitor.h>

// This file was auto-generated.  Do not edit

bool api_get_FlightPlan_in__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_get_FlightPlan_in__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_29FE3D = Option[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Operational_Api(api);
  Option_29FE3D_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_operational_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api_get_FlightPlan_in_(
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

void api_put_FlightPlan_out__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_put_FlightPlan_out__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_99834F = Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api(api);
  Option_99834F_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_put_FlightPlan_out_(
    SF
    &api,
    &t_0);
}

void api_put_Alert__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_put_Alert__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  // Option_99834F = Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api(api);
  Option_99834F_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_put_Alert_(
    SF
    &api);
}

void api_logInfo__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_logInfo__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  // Option_99834F = Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api(api);
  Option_99834F_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_logDebug__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  // Option_99834F = Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api(api);
  Option_99834F_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "api_logError__HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor", 0);

  // Option_99834F = Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]
  DeclNewHAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api(api);
  Option_99834F_get_(SF (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &api, HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_Bridge_c_initialization_api(SF_LAST));

  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_initialise(
  STACK_FRAME
  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_initialise", 0);

  HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_initialise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_finalise(
  STACK_FRAME
  HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_finalise", 0);

  HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_finalise_(SF_LAST);
}

Unit HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered(
  STACK_FRAME
  HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_api.c", "", "HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered", 0);

  HAMR_Simple_V4_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered_(SF_LAST);
}
