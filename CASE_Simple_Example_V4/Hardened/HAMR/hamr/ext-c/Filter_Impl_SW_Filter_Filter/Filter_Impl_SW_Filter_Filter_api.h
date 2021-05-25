#ifndef FILTER_IMPL_SW_FILTER_FILTER_API_H
#define FILTER_IMPL_SW_FILTER_FILTER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_Input__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_Output__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_Filter_Impl_SW_Filter_Filter(
  STACK_FRAME
  String str);

#endif
