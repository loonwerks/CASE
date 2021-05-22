#ifndef CASE_FILTER_LST_THR_IMPL_MCMP_PROC_SW_FLT_LST_CASE_FILTER_LST_API_H
#define CASE_FILTER_LST_THR_IMPL_MCMP_PROC_SW_FLT_LST_CASE_FILTER_LST_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_filter_in__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_filter_out__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(
  STACK_FRAME
  String str);

#endif
