#include <Input_impl_Input_Input_api.h>
#include <Input_impl_Input_Input.h>

// This file was auto-generated.  Do not edit

void api_put_Observed__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "api_put_Observed__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_7570D9 = Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]
  DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api(api);
  Option_7570D9_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &api, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_put_Observed_(
    SF
    &api,
    &t_0);
}

void api_logInfo__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "api_logInfo__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input", 0);

  // Option_7570D9 = Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]
  DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api(api);
  Option_7570D9_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &api, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "api_logDebug__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input", 0);

  // Option_7570D9 = Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]
  DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api(api);
  Option_7570D9_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &api, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "api_logError__CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input", 0);

  // Option_7570D9 = Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]
  DeclNewCASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api(api);
  Option_7570D9_get_(SF (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) &api, CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_initialise(
  STACK_FRAME
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_initialise", 0);

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_initialise_(SF_LAST);
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_finalise(
  STACK_FRAME
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_finalise", 0);

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_finalise_(SF_LAST);
}

Unit CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered(
  STACK_FRAME
  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input_api.c", "", "CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered", 0);

  CASE_MONITOR_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered_(SF_LAST);
}
