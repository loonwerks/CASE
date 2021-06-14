#include <CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.h>
#include <CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2.h>

// This file was auto-generated.  Do not edit

bool api_get_Observed__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "api_get_Observed__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_6F33AF = Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]
  DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api(api);
  Option_6F33AF_get_(SF (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &api, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_operational_api(SF_LAST));

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api_get_Observed_(
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

void api_put_Suspect_Traffic_Out__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "api_put_Suspect_Traffic_Out__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_F9C054 = Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]
  DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api(api);
  Option_F9C054_get_(SF (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &api, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_put_Suspect_Traffic_Out_(
    SF
    &api,
    &t_0);
}

void api_logInfo__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "api_logInfo__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2", 0);

  // Option_F9C054 = Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]
  DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api(api);
  Option_F9C054_get_(SF (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &api, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "api_logDebug__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2", 0);

  // Option_F9C054 = Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]
  DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api(api);
  Option_F9C054_get_(SF (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &api, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "api_logError__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2", 0);

  // Option_F9C054 = Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]
  DeclNewCASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api(api);
  Option_F9C054_get_(SF (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) &api, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_initialise(
  STACK_FRAME
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_initialise", 0);

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_initialise_(SF_LAST);
}

Unit CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_finalise(
  STACK_FRAME
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_finalise", 0);

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_finalise_(SF_LAST);
}

Unit CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_timeTriggered(
  STACK_FRAME
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api api) {
  DeclNewStackFrame(caller, "CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_api.c", "", "CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_timeTriggered", 0);

  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_timeTriggered_(SF_LAST);
}
