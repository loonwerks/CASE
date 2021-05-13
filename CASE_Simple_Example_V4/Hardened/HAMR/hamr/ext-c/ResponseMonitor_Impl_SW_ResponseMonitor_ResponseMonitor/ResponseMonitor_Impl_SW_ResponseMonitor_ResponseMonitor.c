#include <ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_api.h>
#include <ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_initialise_", 0);

  // examples of api setter and logging usage

  api_put_Alert__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF_LAST);

  api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF string("Example logDebug"));

  api_logError__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF string("Example logError"));
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_finalise_", 0);
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan_(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan_", 0);

  DeclNewString(FlightPlanString);
  String__append(SF (String) &FlightPlanString, string("HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_FlightPlan called"));
  api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor (SF (String) &FlightPlanString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on FlightPlan: "));
  HAMR_SW_Mission_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_Mission(t0);
  if(api_get_FlightPlan__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF &t0)) {
    DeclNewString(FlightPlan_str);
    String__append(SF (String) &FlightPlan_str, string("Received on FlightPlan: "));
    HAMR_SW_Mission_string_(SF (String) &FlightPlan_str, &t0);
    api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF (String) &FlightPlan_str);
  }

  DeclNewHAMR_SW_RF_Msg_Impl(t1);
  if(api_get_MissionCommand__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF &t1)) {
    DeclNewString(MissionCommand_str);
    String__append(SF (String) &MissionCommand_str, string("Received on MissionCommand: "));
    HAMR_SW_RF_Msg_Impl_string_(SF (String) &MissionCommand_str, &t1);
    api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF (String) &MissionCommand_str);
  }
}

Unit HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand_(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor.c", "", "HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand_", 0);

  DeclNewString(MissionCommandString);
  String__append(SF (String) &MissionCommandString, string("HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor_handle_MissionCommand called"));
  api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor (SF (String) &MissionCommandString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on MissionCommand: "));
  HAMR_SW_RF_Msg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor(SF (String) &_str);

}
