#include <RadioDriver_Impl_SW_Radio_api.h>
#include <RadioDriver_Impl_SW_Radio.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

const Coordinate bottom_left = {45.31010191362929,-121.0083254511704,1000.0};
const Coordinate top_right = {45.34120895091226,-120.9377622731235,1000.0};
const Map map = {{bottom_left,top_right}};
const Command cmd = {map};
const MsgHeader msg_header = {1, 0};
const RFMsg input = { msg_header, cmd };

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_initialise_", 0);

  // examples of api setter and logging usage

  api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF numBits_HAMR_Simple_V4_SW_RF_Msg_Impl, (uint8_t*)&input);

  printf("Sent Mission Command:\n");
  print_RFMsg(&input);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_finalise_", 0);
}

