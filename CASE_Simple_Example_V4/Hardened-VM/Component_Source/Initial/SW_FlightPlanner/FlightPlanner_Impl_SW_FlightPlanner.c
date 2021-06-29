#include <FlightPlanner_Impl_SW_FlightPlanner_api.h>
#include <FlightPlanner_Impl_SW_FlightPlanner.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

const Coordinate b_l = {45.31010191362929,-121.0083254511704,1000.0};
const Coordinate t_r = {45.34120895091226,-120.9377622731235,1000.0};
const Coordinate good_intermediate = {45.31512567936078,-120.9549900754267,1000.0};
const Mission good_waypoints = {b_l, good_intermediate, t_r};

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_initialise_", 0);

  // examples of api setter and logging usage
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_handle_MissionCommand_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner_api.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_handle_MissionCommand_raw", 0);

  printf("numBits: %u bits, numBytes: %u bytes, sizeof(Mission): %u bytes\n", numBits_HAMR_Simple_V4_SW_Mission, numBytes_HAMR_Simple_V4_SW_Mission, sizeof(Mission));
  api_put_FlightPlan__HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner(SF numBits_HAMR_Simple_V4_SW_Mission, (uint8_t*)&good_waypoints);
  print_RFMsg((RFMsg*)byteArray);
}

Unit HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_handle_MissionCommand_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_SW_FlightPlanner.c", "", "HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_handle_MissionCommand_", 0);

  HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_handle_MissionCommand_raw(SF value->size, value->value);
}
