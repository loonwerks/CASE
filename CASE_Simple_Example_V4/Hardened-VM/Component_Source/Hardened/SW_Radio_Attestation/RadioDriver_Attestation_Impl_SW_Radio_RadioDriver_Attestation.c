#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_api.h>
#include <RadioDriver_Attestation_Impl_SW_Radio_RadioDriver.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_initialise_", 0);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation.c", "", "HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl];
  size_t t0_numBits;
  if(api_get_AttestationTesterResponse__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_Data_Types_AttestationResponseMsg_Impl, "numBits received does not match expected");
  
    api_put_AttestationResponse__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF t0_numBits, t0);

  }

  uint8_t t1[numBytes_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl];
  size_t t1_numBits;
  if(api_get_AttestationRequest__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_HAMR_Simple_V4_Data_Types_AttestationRequestMsg_Impl, "numBits received does not match expected");

    api_put_AttestationTesterRequest__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF t1_numBits, t1);
  }

  static int cycle_count = 0;
  printf("RADIO: cycle #%d\n", ++cycle_count);

  uint8_t *output = getRadioOutput();
  if (output != NULL) {
    printf("RADIO SEND\n");
    print_RFMsg((const RFMsg*)output);
    printf("\n");
    api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver(SF numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, output);
  }

}
