#ifndef RADIODRIVER_ATTESTATION_THR_IMPL_MCMP_PROC_SW_RADIO_RADIODRIVER_ATTESTATION_API_H
#define RADIODRIVER_ATTESTATION_THR_IMPL_MCMP_PROC_SW_RADIO_RADIODRIVER_ATTESTATION_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_recv_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_send_data__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_trusted_ids__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_AutomationRequest__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_OperatingRegion__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_LineSearchTask__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(
  STACK_FRAME
  String str);

#endif
