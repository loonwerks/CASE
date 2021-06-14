#include <CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.h>
#include <CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.h>

// This file was auto-generated.  Do not edit

bool api_get_Observed__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "api_get_Observed__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_D45805 = Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api(api);
  Option_D45805_get_(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_operational_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_get_Observed_(
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

void api_put_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "api_put_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_A9BD80 = Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(api);
  Option_A9BD80_get_(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_put_Suspect_Traffic_Out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "api_logInfo__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor", 0);

  // Option_A9BD80 = Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(api);
  Option_A9BD80_get_(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "api_logDebug__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor", 0);

  // Option_A9BD80 = Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(api);
  Option_A9BD80_get_(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "api_logError__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor", 0);

  // Option_A9BD80 = Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api(api);
  Option_A9BD80_get_(SF (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise", 0);

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise_(SF_LAST);
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise", 0);

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise_(SF_LAST);
}

Unit CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.c", "", "CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered", 0);

  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered_(SF_LAST);
}
