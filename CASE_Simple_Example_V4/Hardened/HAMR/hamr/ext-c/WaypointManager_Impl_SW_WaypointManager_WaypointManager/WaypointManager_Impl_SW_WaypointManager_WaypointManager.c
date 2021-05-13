#include <WaypointManager_Impl_SW_WaypointManager_WaypointManager_api.h>
#include <WaypointManager_Impl_SW_WaypointManager_WaypointManager.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_initialise_", 0);

  // examples of api setter and logging usage

  DeclNewHAMR_SW_MissionWindow(t0);
  HAMR_SW_MissionWindow_example(SF &t0);
  api_put_MissionWindow__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF &t0);

  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF string("Example logDebug"));

  api_logError__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF string("Example logError"));
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_finalise_", 0);
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan_(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan_", 0);

  DeclNewString(FlightPlanString);
  String__append(SF (String) &FlightPlanString, string("HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_FlightPlan called"));
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager (SF (String) &FlightPlanString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on FlightPlan: "));
  HAMR_SW_Mission_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_Mission(t0);
  if(api_get_FlightPlan__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF &t0)) {
    DeclNewString(FlightPlan_str);
    String__append(SF (String) &FlightPlan_str, string("Received on FlightPlan: "));
    HAMR_SW_Mission_string_(SF (String) &FlightPlan_str, &t0);
    api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF (String) &FlightPlan_str);
  }

  DeclNewHAMR_SW_Coordinate_Impl(t1);
  if(api_get_Status__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF &t1)) {
    DeclNewString(Status_str);
    String__append(SF (String) &Status_str, string("Received on Status: "));
    HAMR_SW_Coordinate_Impl_string_(SF (String) &Status_str, &t1);
    api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF (String) &Status_str);
  }

  if(api_get_ReturnHome__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF_LAST )){
    String ReturnHome_str = string("Received event on ReturnHome");
    api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF ReturnHome_str);
  }
}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status_(
  STACK_FRAME
  HAMR_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status_", 0);

  DeclNewString(StatusString);
  String__append(SF (String) &StatusString, string("HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_Status called"));
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager (SF (String) &StatusString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on Status: "));
  HAMR_SW_Coordinate_Impl_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF (String) &_str);

}

Unit HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_SW_WaypointManager_WaypointManager.c", "", "HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome_", 0);

  DeclNewString(ReturnHomeString);
  String__append(SF (String) &ReturnHomeString, string("HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager_handle_ReturnHome called"));
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager (SF (String) &ReturnHomeString);

  String str = string("Received event on ReturnHome");
  api_logInfo__HAMR_SW_WaypointManager_Impl_SW_WaypointManager_WaypointManager(SF str);

}
