#include <CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_api.h>
#include <CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.c", "", "CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_initialise_", 0);

  // examples of api setter and logging usage

  // uint8_t t0[numBytes_CASE_MONITOR_TEST_ADSB_Types_MonitorReport_impl];
  // byte_array_default(SF t0, numBits_CASE_MONITOR_TEST_ADSB_Types_MonitorReport_impl, numBytes_CASE_MONITOR_TEST_ADSB_Types_MonitorReport_impl);
  // api_put_Suspect_Traffic_Out__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF numBits_CASE_MONITOR_TEST_ADSB_Types_MonitorReport_impl, t0);

  // api_logInfo__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF string("Example logInfo"));

  // api_logDebug__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF string("Example logDebug"));

  // api_logError__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF string("Example logError"));
}

Unit CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.c", "", "CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_finalise_", 0);
}

Unit CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor.c", "", "CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_CASE_MONITOR_TEST_ADSB_Types_ADSB_Aggregated_Message_impl];
  size_t t0_numBits;
  if(api_get_Observed__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_CASE_MONITOR_TEST_ADSB_Types_ADSB_Aggregated_Message_impl, "numBits received does not match expected");

    DeclNewString(Observed_str);
    String__append(SF (String) &Observed_str, string("Received on Observed: "));
    byte_array_string(SF (String) &Observed_str, t0, numBytes_CASE_MONITOR_TEST_ADSB_Types_ADSB_Aggregated_Message_impl);
    api_logInfo__CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(SF (String) &Observed_str);
  }
}
