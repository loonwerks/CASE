#ifndef UXAS_THR_IMPL_MCMP_PROC_SW_UXAS_UXAS_API_H
#define UXAS_THR_IMPL_MCMP_PROC_SW_UXAS_UXAS_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_AutomationRequest__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_AirVehicleState__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_OperatingRegion__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_LineSearchTask__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AutomationResponse_MON_GEO__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_AutomationResponse_MON_REQ__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS(
  STACK_FRAME
  String str);

#endif
