#include <FlightController_Impl_SW_FlightController_FlightController_api.h>
#include <FlightController_Impl_SW_FlightController_FlightController.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logDebug"));

  api_logError__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logError"));
}

Unit HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_finalise_", 0);
}

Unit HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController_api.c", "", "HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(FlightPlanString);
  String__append(SF (String) &FlightPlanString, string("HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_raw called"));
  byte_array_string(SF (String) &FlightPlanString, byteArray, numBytes);
  api_logInfo__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController (SF (String) &FlightPlanString);
}

Unit HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_", 0);

  HAMR_SW_FlightController_Impl_SW_FlightController_FlightController_handle_FlightPlan_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_Mission];
  size_t t0_numBits;
  if(api_get_FlightPlan__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_Mission, "numBits received does not match expected");

    DeclNewString(FlightPlan_str);
    String__append(SF (String) &FlightPlan_str, string("Received on FlightPlan: "));
    byte_array_string(SF (String) &FlightPlan_str, t0, numBytes_HAMR_SW_Mission);
    api_logInfo__HAMR_SW_FlightController_Impl_SW_FlightController_FlightController(SF (String) &FlightPlan_str);
  }
}
