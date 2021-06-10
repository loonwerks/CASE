#ifndef CASE_ATTESTATIONGATE_THR_IMPL_MCMP_PROC_SW_AM_GATE_CASE_ATTESTATIONGATE_API_H
#define CASE_ATTESTATIONGATE_THR_IMPL_MCMP_PROC_SW_AM_GATE_CASE_ATTESTATIONGATE_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_trusted_ids__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_AutomationRequest_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AutomationRequest_out_UXAS__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_AutomationRequest_out_MON_REQ__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_OperatingRegion_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_OperatingRegion_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_LineSearchTask_in__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_LineSearchTask_out__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(
  STACK_FRAME
  String str);

#endif
