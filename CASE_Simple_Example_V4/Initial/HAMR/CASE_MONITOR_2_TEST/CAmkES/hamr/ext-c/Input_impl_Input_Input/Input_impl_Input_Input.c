#include <Input_impl_Input_Input_api.h>
#include <Input_impl_Input_Input.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_CASE_MONITOR_2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl];
  byte_array_default(SF t0, numBits_CASE_MONITOR_2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl, numBytes_CASE_MONITOR_2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl);
  api_put_Observed__CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input(SF numBits_CASE_MONITOR_2_TEST_ADSB_Types_ADSB_Aggregated_Message_impl, t0);

  api_logInfo__CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input(SF string("Example logInfo"));

  api_logDebug__CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input(SF string("Example logDebug"));

  api_logError__CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input(SF string("Example logError"));
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_finalise_", 0);
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Input_impl_Input_Input.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Input_Input_timeTriggered_", 0);

}
