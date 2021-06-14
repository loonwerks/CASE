#include <Output_impl_Output_Output_api.h>
#include <Output_impl_Output_Output.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logInfo"));

  api_logDebug__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logDebug"));

  api_logError__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(SF string("Example logError"));
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_finalise_", 0);
}

Unit CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Output_impl_Output_Output.c", "", "CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_CASE_MONITOR_2_TEST_ADSB_Types_MonitorReport_impl];
  size_t t0_numBits;
  if(api_get_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_CASE_MONITOR_2_TEST_ADSB_Types_MonitorReport_impl, "numBits received does not match expected");

    DeclNewString(Suspect_Traffic_Out_str);
    String__append(SF (String) &Suspect_Traffic_Out_str, string("Received on Suspect_Traffic_Out: "));
    byte_array_string(SF (String) &Suspect_Traffic_Out_str, t0, numBytes_CASE_MONITOR_2_TEST_ADSB_Types_MonitorReport_impl);
    api_logInfo__CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Output_Output(SF (String) &Suspect_Traffic_Out_str);
  }
}
