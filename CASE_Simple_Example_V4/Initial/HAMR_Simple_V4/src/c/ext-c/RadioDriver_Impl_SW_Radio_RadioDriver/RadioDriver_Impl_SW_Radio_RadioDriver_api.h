#ifndef RADIODRIVER_IMPL_SW_RADIO_RADIODRIVER_API_H
#define RADIODRIVER_IMPL_SW_RADIO_RADIODRIVER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_AttestationTesterResponse__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AttestationTesterRequest__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_put_MissionCommand__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  String str);

void api_logError__HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_RadioDriver(
  STACK_FRAME
  String str);

#endif
