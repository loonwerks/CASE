#include <FlightController_Impl_SW_FlightController_FlightController_api.h>
#include <FlightController_Impl_SW_FlightController_FlightController.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logInfo"));

  api_logDebug__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logDebug"));

  api_logError__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF string("Example logError"));
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_SW_FlightController_FlightController.c", "", "HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_Mission];
  size_t t0_numBits;
  if(api_get_FlightPlan__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_Data_Types_Mission, "numBits received does not match expected");

    DeclNewString(FlightPlan_str);
    String__append(SF (String) &FlightPlan_str, string("Received on FlightPlan: "));
    byte_array_string(SF (String) &FlightPlan_str, t0, numBytes_HAMR_Simple_V4_Data_Types_Mission);
    api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF (String) &FlightPlan_str);
  }

  if(api_get_Alert__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF_LAST )){
    String Alert_str = string("Received event on Alert");
    api_logInfo__HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController(SF Alert_str);
  }
}
