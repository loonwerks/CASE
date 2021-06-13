#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.h>
#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_SW_AttestationRequestMsg_Impl];
  byte_array_default(SF t0, numBits_HAMR_SW_AttestationRequestMsg_Impl, numBytes_HAMR_SW_AttestationRequestMsg_Impl);
  api_put_AttestationTesterRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF numBits_HAMR_SW_AttestationRequestMsg_Impl, t0);

  uint8_t t1[numBytes_HAMR_SW_RF_Msg_Impl];
  byte_array_default(SF t1, numBits_HAMR_SW_RF_Msg_Impl, numBytes_HAMR_SW_RF_Msg_Impl);
  api_put_MissionCommand__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF numBits_HAMR_SW_RF_Msg_Impl, t1);

  uint8_t t2[numBytes_HAMR_SW_AttestationResponseMsg_Impl];
  byte_array_default(SF t2, numBits_HAMR_SW_AttestationResponseMsg_Impl, numBytes_HAMR_SW_AttestationResponseMsg_Impl);
  api_put_AttestationResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF numBits_HAMR_SW_AttestationResponseMsg_Impl, t2);

  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF string("Example logDebug"));

  api_logError__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF string("Example logError"));
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise_", 0);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationTesterResponseString);
  String__append(SF (String) &AttestationTesterResponseString, string("HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_raw called"));
  byte_array_string(SF (String) &AttestationTesterResponseString, byteArray, numBytes);
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation (SF (String) &AttestationTesterResponseString);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationTesterResponse_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_AttestationResponseMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationTesterResponse__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_AttestationResponseMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationTesterResponse_str);
    String__append(SF (String) &AttestationTesterResponse_str, string("Received on AttestationTesterResponse: "));
    byte_array_string(SF (String) &AttestationTesterResponse_str, t0, numBytes_HAMR_SW_AttestationResponseMsg_Impl);
    api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF (String) &AttestationTesterResponse_str);
  }

  uint8_t t1[numBytes_HAMR_SW_AttestationRequestMsg_Impl];
  size_t t1_numBits;
  if(api_get_AttestationRequest__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_HAMR_SW_AttestationRequestMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationRequest_str);
    String__append(SF (String) &AttestationRequest_str, string("Received on AttestationRequest: "));
    byte_array_string(SF (String) &AttestationRequest_str, t1, numBytes_HAMR_SW_AttestationRequestMsg_Impl);
    api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation(SF (String) &AttestationRequest_str);
  }
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_api.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(AttestationRequestString);
  String__append(SF (String) &AttestationRequestString, string("HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_raw called"));
  byte_array_string(SF (String) &AttestationRequestString, byteArray, numBytes);
  api_logInfo__HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation (SF (String) &AttestationRequestString);
}

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_", 0);

  HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_handle_AttestationRequest_raw(SF value->size, value->value);

}
