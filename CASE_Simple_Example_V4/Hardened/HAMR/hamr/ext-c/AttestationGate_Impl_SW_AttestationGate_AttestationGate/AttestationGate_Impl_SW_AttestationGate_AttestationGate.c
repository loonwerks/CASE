#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.h>
#include <AttestationGate_Impl_SW_AttestationGate_AttestationGate.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_initialise_", 0);

  // examples of api setter and logging usage

  uint8_t t0[numBytes_HAMR_SW_RF_Msg_Impl];
  byte_array_default(SF t0, numBits_HAMR_SW_RF_Msg_Impl, numBytes_HAMR_SW_RF_Msg_Impl);
  api_put_MissionCommand_out__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF numBits_HAMR_SW_RF_Msg_Impl, t0);

  api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logInfo"));

  api_logDebug__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logDebug"));

  api_logError__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF string("Example logError"));
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_finalise_", 0);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(MissionCommand_inString);
  String__append(SF (String) &MissionCommand_inString, string("HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_raw called"));
  byte_array_string(SF (String) &MissionCommand_inString, byteArray, numBytes);
  api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate (SF (String) &MissionCommand_inString);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_", 0);

  HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_MissionCommand_in_raw(SF value->size, value->value);

  // examples of api getter usage

  uint8_t t0[numBytes_HAMR_SW_RF_Msg_Impl];
  size_t t0_numBits;
  if(api_get_MissionCommand_in__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_HAMR_SW_RF_Msg_Impl, "numBits received does not match expected");

    DeclNewString(MissionCommand_in_str);
    String__append(SF (String) &MissionCommand_in_str, string("Received on MissionCommand_in: "));
    byte_array_string(SF (String) &MissionCommand_in_str, t0, numBytes_HAMR_SW_RF_Msg_Impl);
    api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF (String) &MissionCommand_in_str);
  }

  uint8_t t1[numBytes_HAMR_SW_Address_Impl];
  size_t t1_numBits;
  if(api_get_TrustedIds__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF &t1_numBits, t1)) {
    // sanity check
    sfAssert(SF (Z) t1_numBits == numBits_HAMR_SW_Address_Impl, "numBits received does not match expected");

    DeclNewString(TrustedIds_str);
    String__append(SF (String) &TrustedIds_str, string("Received on TrustedIds: "));
    byte_array_string(SF (String) &TrustedIds_str, t1, numBytes_HAMR_SW_Address_Impl);
    api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate(SF (String) &TrustedIds_str);
  }
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate_api.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(TrustedIdsString);
  String__append(SF (String) &TrustedIdsString, string("HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_raw called"));
  byte_array_string(SF (String) &TrustedIdsString, byteArray, numBytes);
  api_logInfo__HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate (SF (String) &TrustedIdsString);
}

Unit HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "AttestationGate_Impl_SW_AttestationGate_AttestationGate.c", "", "HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_", 0);

  HAMR_SW_AttestationGate_Impl_SW_AttestationGate_AttestationGate_handle_TrustedIds_raw(SF value->size, value->value);

}
