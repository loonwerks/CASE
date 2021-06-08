#ifndef RADIODRIVER_THR_IMPL_RADIO_RADIODRIVER_API_H
#define RADIODRIVER_THR_IMPL_RADIO_RADIODRIVER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_automation_request_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_operating_region_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_line_search_task_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str);

void api_logDebug__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str);

void api_logError__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(
  STACK_FRAME
  String str);

#endif
