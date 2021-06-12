#include <Monitor_Impl_Monitor_Monitor_api.h>
#include <Monitor_Impl_Monitor_Monitor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_Monitor_Monitor_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_Mission(t0);
  HAMR_SW_Mission_example(SF &t0);
  api_put_FlightPlan_out__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF &t0);

  api_put_Alert__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF_LAST);

  api_logInfo__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF string("Example logDebug"));

  api_logError__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF string("Example logError"));
}

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_Monitor_Monitor_finalise_", 0);
}

Unit HAMR_SW_Monitor_Impl_Monitor_Monitor_handle_FlightPlan_in_(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "Monitor_Impl_Monitor_Monitor.c", "", "HAMR_SW_Monitor_Impl_Monitor_Monitor_handle_FlightPlan_in_", 0);

  DeclNewString(FlightPlan_inString);
  String__append(SF (String) &FlightPlan_inString, string("HAMR_SW_Monitor_Impl_Monitor_Monitor_handle_FlightPlan_in called"));
  api_logInfo__HAMR_SW_Monitor_Impl_Monitor_Monitor (SF (String) &FlightPlan_inString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on FlightPlan_in: "));
  HAMR_SW_Mission_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_Mission(t0);
  if(api_get_FlightPlan_in__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF &t0)) {
    DeclNewString(FlightPlan_in_str);
    String__append(SF (String) &FlightPlan_in_str, string("Received on FlightPlan_in: "));
    HAMR_SW_Mission_string_(SF (String) &FlightPlan_in_str, &t0);
    api_logInfo__HAMR_SW_Monitor_Impl_Monitor_Monitor(SF (String) &FlightPlan_in_str);
  }
}
