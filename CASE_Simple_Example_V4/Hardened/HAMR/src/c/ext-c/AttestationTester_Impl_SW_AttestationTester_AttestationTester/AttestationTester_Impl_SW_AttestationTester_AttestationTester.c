#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.h>
#include <AttestationTester_Impl_SW_AttestationTester_AttestationTester.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_SW_AttestationResponseMsg_Impl];
  byte_array_default(SF t0, numBits_HAMR_SW_AttestationResponseMsg_Impl, numBytes_HAMR_SW_AttestationResponseMsg_Impl);
  api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF numBits_HAMR_SW_AttestationResponseMsg_Impl, t0);

  api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF string("Example logError"));
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_finalise_", 0);
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester_api.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationRequestString);
  String__append(SF (String) &AttestationRequestString, string("HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_raw called"));
  byte_array_string(SF (String) &AttestationRequestString, byteArray, numBytes);
  api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester (SF (String) &AttestationRequestString);
}

Unit HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationTester_Impl_SW_AttestationTester_AttestationTester.c", "", "HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_", 0);

  HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester_handle_AttestationRequest_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_AttestationRequestMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_AttestationRequestMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationRequest_str);
    String__append(SF (String) &AttestationRequest_str, string("Received on AttestationRequest: "));
    byte_array_string(SF (String) &AttestationRequest_str, t0, numBytes_HAMR_SW_AttestationRequestMsg_Impl);
    api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(SF (String) &AttestationRequest_str);
  }
}
