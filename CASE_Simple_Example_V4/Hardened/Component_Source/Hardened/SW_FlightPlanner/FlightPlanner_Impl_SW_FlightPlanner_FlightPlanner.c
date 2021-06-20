#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_api.h>
#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_initialise_", 0);

  // examples of api setter and logging usage
/*
  uint8_t t0[numBytes_HAMR_Simple_V4_SW_Mission];
  byte_array_default(SF t0, numBits_HAMR_Simple_V4_SW_Mission, numBytes_HAMR_Simple_V4_SW_Mission);
  api_put_FlightPlan__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF numBits_HAMR_Simple_V4_SW_Mission, t0);

  api_logInfo__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logInfo"));

  api_logDebug__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logDebug"));

  api_logError__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF string("Example logError"));
*/
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_SW_RF_Msg_Impl];
  size_t t0_numBits;
  if(api_get_MissionCommand__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_SW_RF_Msg_Impl, "numBits received does not match expected");
    uint8_t* output = getFlightPlannerOutput(t0);
    if (output != NULL) {
      printf("FLIGHTPLANNER SEND\n");
      print_Mission((const Mission*)output);
      api_put_FlightPlan__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF numBits_HAMR_Simple_V4_SW_Mission, output);
    }
/*
    DeclNewString(MissionCommand_str);
    String__append(SF (String) &MissionCommand_str, string("Received on MissionCommand: "));
    byte_array_string(SF (String) &MissionCommand_str, t0, numBytes_HAMR_Simple_V4_SW_RF_Msg_Impl);
    api_logInfo__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner(SF (String) &MissionCommand_str);
*/
  }
}
