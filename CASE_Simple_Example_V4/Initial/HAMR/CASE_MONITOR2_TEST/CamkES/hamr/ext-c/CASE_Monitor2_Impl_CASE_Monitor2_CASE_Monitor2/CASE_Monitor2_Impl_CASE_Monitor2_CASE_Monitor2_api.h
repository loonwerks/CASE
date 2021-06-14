#ifndef CASE_MONITOR2_IMPL_CASE_MONITOR2_CASE_MONITOR2_API_H
#define CASE_MONITOR2_IMPL_CASE_MONITOR2_CASE_MONITOR2_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_Observed__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_Suspect_Traffic_Out__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str);

void api_logDebug__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str);

void api_logError__CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2(
  STACK_FRAME
  String str);

#endif
