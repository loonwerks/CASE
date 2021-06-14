#include <FlightController_Impl_SW_FlightController_api.h>
#include <FlightController_Impl_SW_FlightController.h>
#include <ext.h>
#include <simple_v4.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_initialise_", 0);

  // examples of api setter and logging usage
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_api.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_raw", 0);

  print_Mission((Mission*)byteArray);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_", 0);

  HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_FlightPlan_raw(SF value->size, value->value);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_Alert_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_Alert_", 0);

  DeclNewString(AlertString);
  String__append(SF (String) &AlertString, string("HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_handle_Alert called"));
  api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController (SF (String) &AlertString);

  String str = string("Received event on Alert");
  api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController(SF str);

}
