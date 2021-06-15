#include <RadioDriver_Impl_SW_Radio_RadioDriver_api.h>
#include <RadioDriver_Impl_SW_Radio_RadioDriver.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_Simple_V4_SW_AttestationRequestMsg_Impl];
  byte_array_default(SF t0, numBits_HAMR_Simple_V4_SW_AttestationRequestMsg_Impl, numBytes_HAMR_Simple_V4_SW_AttestationRequestMsg_Impl);
  api_put_AttestationTesterRequest__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_SW_AttestationRequestMsg_Impl, t0);

  uint8_t t1[numBytes_HAMR_Simple_V4_SW_RF_Msg_Impl];
  byte_array_default(SF t1, numBits_HAMR_Simple_V4_SW_RF_Msg_Impl, numBytes_HAMR_Simple_V4_SW_RF_Msg_Impl);
  api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_SW_RF_Msg_Impl, t1);

  api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF string("Example logInfo"));

  api_logDebug__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF string("Example logDebug"));

  api_logError__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF string("Example logError"));
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_RadioDriver_api.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationTesterResponseString);
  String__append(SF (String) &AttestationTesterResponseString, string("HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_raw called"));
  byte_array_string(SF (String) &AttestationTesterResponseString, byteArray, numBytes);
  api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver (SF (String) &AttestationTesterResponseString);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_", 0);

  HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver_handle_AttestationTesterResponse_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationTesterResponse__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationTesterResponse_str);
    String__append(SF (String) &AttestationTesterResponse_str, string("Received on AttestationTesterResponse: "));
    byte_array_string(SF (String) &AttestationTesterResponse_str, t0, numBytes_HAMR_Simple_V4_SW_AttestationResponseMsg_Impl);
    api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(SF (String) &AttestationTesterResponse_str);
  }
}
