#include <Monitor_Impl_SW_Monitor_Monitor_api.h>
#include <Monitor_Impl_SW_Monitor_Monitor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_initialise_", 0);

  // examples of api setter and logging usage
/*
  uint8_t t0[numBytes_HAMR_SW_Mission];
  byte_array_default(SF t0, numBits_HAMR_SW_Mission, numBytes_HAMR_SW_Mission);
  api_put_FlightPlan_out__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF numBits_HAMR_SW_Mission, t0);

  api_put_Alert__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF_LAST);

  api_logInfo__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF string("Example logDebug"));

  api_logError__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF string("Example logError"));
*/
}

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_finalise_", 0);
}

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_Mission];
  size_t t0_numBits;
  if(api_get_FlightPlan_in__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_Mission, "numBits received does not match expected");
    uint8_t alert = getMonitorAlertOutput(t0);
    if (alert) {
      printf("MONITOR ALERT\n");
      api_put_Alert__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF_LAST);
    } else {
      printf("MONITOR PASS\n");
      print_Mission((const Mission*)t0);
      api_put_FlightPlan_out__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF t0_numBits, t0);
    }
    printf("\n");
/*
    DeclNewString(FlightPlan_in_str);
    String__append(SF (String) &FlightPlan_in_str, string("Received on FlightPlan_in: "));
    byte_array_string(SF (String) &FlightPlan_in_str, t0, numBytes_HAMR_SW_Mission);
    api_logInfo__HAMR_SW_Monitor_Impl_SW_Monitor_Monitor(SF (String) &FlightPlan_in_str);
*/
  }
}
