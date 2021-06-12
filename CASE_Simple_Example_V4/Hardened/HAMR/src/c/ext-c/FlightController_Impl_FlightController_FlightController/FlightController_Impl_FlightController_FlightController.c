#include <FlightController_Impl_FlightController_FlightController_api.h>
#include <FlightController_Impl_FlightController_FlightController.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF string("Example logDebug"));

  api_logError__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF string("Example logError"));
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_finalise_", 0);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan_(
  STACK_FRAME
  HAMR_SW_Mission value) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan_", 0);

  DeclNewString(FlightPlanString);
  String__append(SF (String) &FlightPlanString, string("HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_FlightPlan called"));
  api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController (SF (String) &FlightPlanString);

  DeclNewString(_str);
  String__append(SF (String) &_str, string("Received on FlightPlan: "));
  HAMR_SW_Mission_string_(SF (String) &_str, value);
  api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF (String) &_str);

  // examples of api getter usage

  DeclNewHAMR_SW_Mission(t0);
  if(api_get_FlightPlan__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF &t0)) {
    DeclNewString(FlightPlan_str);
    String__append(SF (String) &FlightPlan_str, string("Received on FlightPlan: "));
    HAMR_SW_Mission_string_(SF (String) &FlightPlan_str, &t0);
    api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF (String) &FlightPlan_str);
  }

  if(api_get_Alert__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF_LAST )){
    String Alert_str = string("Received event on Alert");
    api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF Alert_str);
  }
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert_", 0);

  DeclNewString(AlertString);
  String__append(SF (String) &AlertString, string("HAMR_SW_FlightController_Impl_FlightController_FlightController_handle_Alert called"));
  api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController (SF (String) &AlertString);

  String str = string("Received event on Alert");
  api_logInfo__HAMR_SW_FlightController_Impl_FlightController_FlightController(SF str);

}
