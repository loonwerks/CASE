#ifndef ATTESTATIONGATE_IMPL_ATTESTATIONGATE_ATTESTATIONGATE_API_H
#define ATTESTATIONGATE_IMPL_ATTESTATIONGATE_ATTESTATIONGATE_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand_in__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

void api_put_MissionCommand_out__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

bool api_get_TrustedIds__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  HAMR_SW_AllowList_Impl value);

void api_logInfo__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_AttestationGate_Impl_AttestationGate_AttestationGate(
  STACK_FRAME
  String str);

#endif
