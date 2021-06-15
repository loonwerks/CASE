#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.h>
#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_6475FA = Option[HAMR.SW.FlightPlanner_Impl_Operational_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Operational_Api(api);
  Option_6475FA_get_(SF (HAMR_SW_FlightPlanner_Impl_Operational_Api) &api, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_operational_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Operational_Api_get_MissionCommand_(
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

void api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_put_FlightPlan_(
    SF
    &api,
    &t_0);
}

void api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "api_logDebug__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "api_logError__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner", 0);

  // Option_A0CA6B = Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
  DeclNewHAMR_SW_FlightPlanner_Impl_Initialization_Api(api);
  Option_A0CA6B_get_(SF (HAMR_SW_FlightPlanner_Impl_Initialization_Api) &api, HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge_c_initialization_api(SF_LAST));

  HAMR_SW_FlightPlanner_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise", 0);

  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise_(SF_LAST);
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise", 0);

  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise_(SF_LAST);
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered(
  STACK_FRAME
  HAMR_SW_FlightPlanner_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered", 0);

  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered_(SF_LAST);
}
