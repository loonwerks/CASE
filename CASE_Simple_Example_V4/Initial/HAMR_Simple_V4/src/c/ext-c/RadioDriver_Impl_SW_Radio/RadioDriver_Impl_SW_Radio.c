#include <RadioDriver_Impl_SW_Radio_api.h>
#include <RadioDriver_Impl_SW_Radio.h>
#include <ext.h>
#include <simple_v4.h>

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

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_api.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_raw", 0);
/*
  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationTesterResponseString);
  String__append(SF (String) &AttestationTesterResponseString, string("HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_raw called"));
  byte_array_string(SF (String) &AttestationTesterResponseString, byteArray, numBytes);
  api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio (SF (String) &AttestationTesterResponseString);
*/
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_", 0);
/*
  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_handle_AttestationTesterResponse_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationTesterResponse__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationTesterResponse_str);
    String__append(SF (String) &AttestationTesterResponse_str, string("Received on AttestationTesterResponse: "));
    byte_array_string(SF (String) &AttestationTesterResponse_str, t0, numBytes_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl);
    api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio(SF (String) &AttestationTesterResponse_str);
  }
*/
}
