#include <Output_impl_Output_Output_api.h>
#include <Output_impl_Output_Output.h>

// This file was auto-generated.  Do not edit

bool api_get_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "api_get_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_5DEDCA = Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api(api);
  Option_5DEDCA_get_(SF (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) &api, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_operational_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api_get_Suspect_Traffic_Out_(
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

void api_logInfo__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "api_logInfo__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output", 0);

  // Option_31DBF5 = Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api(api);
  Option_31DBF5_get_(SF (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "api_logDebug__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output", 0);

  // Option_31DBF5 = Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api(api);
  Option_31DBF5_get_(SF (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "api_logError__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output", 0);

  // Option_31DBF5 = Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]
  DeclNewCASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api(api);
  Option_31DBF5_get_(SF (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) &api, CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_Bridge_c_initialization_api(SF_LAST));

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_initialise(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_initialise", 0);

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_initialise_(SF_LAST);
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_finalise(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_finalise", 0);

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_finalise_(SF_LAST);
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered(
  STACK_FRAME
  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output_api.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered", 0);

  CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered_(SF_LAST);
}
