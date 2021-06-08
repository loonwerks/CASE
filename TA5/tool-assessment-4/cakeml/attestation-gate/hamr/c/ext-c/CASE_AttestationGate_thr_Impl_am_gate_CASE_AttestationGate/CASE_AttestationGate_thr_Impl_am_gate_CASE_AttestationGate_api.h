#ifndef CASE_ATTESTATIONGATE_THR_IMPL_AM_GATE_CASE_ATTESTATIONGATE_API_H
#define CASE_ATTESTATIONGATE_THR_IMPL_AM_GATE_CASE_ATTESTATIONGATE_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_AutomationRequest_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AutomationRequest_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_OperatingRegion_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_OperatingRegion_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_LineSearchTask_in__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_LineSearchTask_out__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logDebug__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logError__attestation_gate_CASE_AttestationGate_CASE_AttestationGate_thr_Impl_am_gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

#endif
