#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.h>
#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise_", 0);

  // examples of api setter and logging usage

  // uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl];
  // byte_array_default(SF t0, numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl);
  // api_put_MissionCommand_out__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, t0);

  // api_logInfo__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logInfo"));

  // api_logDebug__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logDebug"));

  // api_logError__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logError"));
}

Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise_", 0);
}

Unit HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_timeTriggered_", 0);

  // examples of api getter usage
  printf("WARNING: in C AttestationGate\n");

  uint8_t t1[numBytes_HAMR_Simple_V4_Data_Types_AllowList_Impl];
  size_t t1_numBits;
  if(api_get_TrustedIds__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_HAMR_Simple_V4_Data_Types_AllowList_Impl, "numBits received does not match expected");

    // DeclNewString(TrustedIds_str);
    // String__append(SF (String) &TrustedIds_str, string("Received on TrustedIds: "));
    // byte_array_string(SF (String) &TrustedIds_str, t1, numBytes_HAMR_Simple_V4_Data_Types_AllowList_Impl);
    // api_logInfo__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF (String) &TrustedIds_str);
  }

  uint8_t t0[numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl];
  size_t t0_numBits;
  if(api_get_MissionCommand_in__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_Simple_V4_Data_Types_RF_Msg_Impl, "numBits received does not match expected");

    // DeclNewString(MissionCommand_in_str);
    // String__append(SF (String) &MissionCommand_in_str, string("Received on MissionCommand_in: "));
    // byte_array_string(SF (String) &MissionCommand_in_str, t0, numBytes_HAMR_Simple_V4_Data_Types_RF_Msg_Impl);
    // api_logInfo__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF (String) &MissionCommand_in_str);
    if (isTrusted(t0, t1)) {
      printf("GATE PASS\n");
      api_put_MissionCommand_out__HAMR_Simple_V4_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF t0_numBits, t0);
    } else {
      printf("GATE BLOCK\n");
    }
    print_RFMsg((const RFMsg *)t0);
    printf("\n");
  }
}
