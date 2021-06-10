#ifndef CASE_MONITOR_GEO_THR_IMPL_MCMP_PROC_SW_MON_GEO_CASE_MONITOR_GEO_API_H
#define CASE_MONITOR_GEO_THR_IMPL_MCMP_PROC_SW_MON_GEO_CASE_MONITOR_GEO_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_keep_in_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_keep_out_zones__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

bool api_get_observed__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_output__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_alert__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY);

void api_logInfo__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str);

void api_logDebug__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str);

void api_logError__hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(
  STACK_FRAME
  String str);

#endif
