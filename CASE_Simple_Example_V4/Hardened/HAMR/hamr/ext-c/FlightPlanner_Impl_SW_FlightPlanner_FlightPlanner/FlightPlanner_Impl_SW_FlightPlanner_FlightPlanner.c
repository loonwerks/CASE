#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.h>
#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_Mission(t0);
  HAMR_SW_Mission_example(SF &t0);
  api_put_FlightPlan__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF &t0);

  api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logDebug"));

  api_logError__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logError"));
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise_", 0);
}

Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_handle_MissionCommand_(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_handle_MissionCommand_", 0);

  DeclNewString(MissionCommandString);
  String__append(SF (String) &MissionCommandString, string("HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_handle_MissionCommand called"));
  api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner (SF (String) &MissionCommandString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on MissionCommand: "));
  HAMR_SW_RF_Msg_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_RF_Msg_Impl(t0);
  if(api_get_MissionCommand__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF &t0)) {
    DeclNewString(MissionCommand_str);
    String__append(SF (String) &MissionCommand_str, string("Received on MissionCommand: "));
    HAMR_SW_RF_Msg_Impl_string_(SF (String) &MissionCommand_str, &t0);
    api_logInfo__HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF (String) &MissionCommand_str);
  }
}
