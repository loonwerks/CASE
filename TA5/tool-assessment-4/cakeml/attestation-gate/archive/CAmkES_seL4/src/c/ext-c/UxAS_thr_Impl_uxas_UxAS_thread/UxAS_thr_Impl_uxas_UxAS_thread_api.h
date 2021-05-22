#ifndef UXAS_THR_IMPL_UXAS_UXAS_THREAD_API_H
#define UXAS_THR_IMPL_UXAS_UXAS_THREAD_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_AutomationRequest__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_OperatingRegion__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_LineSearchTask__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_logInfo__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str);

void api_logDebug__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str);

void api_logError__attestation_gate_SysContext_UxAS_thr_Impl_uxas_UxAS_thread(
  STACK_FRAME
  String str);

#endif
