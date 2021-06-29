#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_api.h>
#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl];
  byte_array_default(SF t0, numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl);
  api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, t0);

  uint8_t t1[numBytes_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl];
  byte_array_default(SF t1, numBits_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl, numBytes_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl);
  api_put_AttestationResponse__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl, t1);

  uint8_t t2[numBytes_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl];
  byte_array_default(SF t2, numBits_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl, numBytes_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl);
  api_put_AttestationTesterRequest__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl, t2);

  api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF string("Example logInfo"));

  api_logDebug__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF string("Example logDebug"));

  api_logError__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF string("Example logError"));
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationRequest__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationRequest_str);
    String__append(SF (String) &AttestationRequest_str, string("Received on AttestationRequest: "));
    byte_array_string(SF (String) &AttestationRequest_str, t0, numBytes_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl);
    api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF (String) &AttestationRequest_str);
  }

  uint8_t t1[numBytes_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl];
  size_t t1_numBits;
  if(api_get_AttestationTesterResponse__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl, "numBits received does not match expected");

    DeclNewString(AttestationTesterResponse_str);
    String__append(SF (String) &AttestationTesterResponse_str, string("Received on AttestationTesterResponse: "));
    byte_array_string(SF (String) &AttestationTesterResponse_str, t1, numBytes_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl);
    api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF (String) &AttestationTesterResponse_str);
  }
}
