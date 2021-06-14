#ifndef CASE_MONITOR1_IMPL_CASE_MONITOR_CASE_MONITOR_API_H
#define CASE_MONITOR1_IMPL_CASE_MONITOR_CASE_MONITOR_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_Observed__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_Suspect_Traffic_Out__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str);

void api_logDebug__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str);

void api_logError__CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor(
  STACK_FRAME
  String str);

#endif
