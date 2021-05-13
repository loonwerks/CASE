#ifndef CASE_ATTESTATIONGATE_IMPL_SW_ATTESTATIONGATE_CASE_ATTESTATIONGATE_API_H
#define CASE_ATTESTATIONGATE_IMPL_SW_ATTESTATIONGATE_CASE_ATTESTATIONGATE_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_MissionCommand_in__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

void api_put_MissionCommand_out__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_RF_Msg_Impl value);

bool api_get_TrustedIds__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  HAMR_SW_Address_Impl value);

void api_logInfo__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_CASE_AttestationGate_Impl_SW_AttestationGate_CASE_AttestationGate(
  STACK_FRAME
  String str);

#endif
