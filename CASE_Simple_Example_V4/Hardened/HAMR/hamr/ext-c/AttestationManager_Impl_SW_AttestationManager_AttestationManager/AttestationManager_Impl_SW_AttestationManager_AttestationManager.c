#include <AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.h>
#include <AttestationManager_Impl_SW_AttestationManager_AttestationManager.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_SW_AttestationRequestMsg_Impl];
  byte_array_default(SF t0, numBits_HAMR_SW_AttestationRequestMsg_Impl, numBytes_HAMR_SW_AttestationRequestMsg_Impl);
  api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF numBits_HAMR_SW_AttestationRequestMsg_Impl, t0);

  uint8_t t1[numBytes_HAMR_SW_Address_Impl];
  byte_array_default(SF t1, numBits_HAMR_SW_Address_Impl, numBytes_HAMR_SW_Address_Impl);
  api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF numBits_HAMR_SW_Address_Impl, t1);

  api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF string("Example logError"));
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_finalise_", 0);
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager_api.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationResponseString);
  String__append(SF (String) &AttestationResponseString, string("HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_raw called"));
  byte_array_string(SF (String) &AttestationResponseString, byteArray, numBytes);
  api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager (SF (String) &AttestationResponseString);
}

Unit HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationManager_Impl_SW_AttestationManager_AttestationManager.c", "", "HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_", 0);

  HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_handle_AttestationResponse_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_AttestationResponseMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_AttestationResponseMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationResponse_str);
    String__append(SF (String) &AttestationResponse_str, string("Received on AttestationResponse: "));
    byte_array_string(SF (String) &AttestationResponse_str, t0, numBytes_HAMR_SW_AttestationResponseMsg_Impl);
    api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(SF (String) &AttestationResponse_str);
  }
}
