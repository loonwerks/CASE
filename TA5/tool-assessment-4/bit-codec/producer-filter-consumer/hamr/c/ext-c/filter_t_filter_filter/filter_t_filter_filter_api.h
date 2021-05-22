#ifndef FILTER_T_FILTER_FILTER_API_H
#define FILTER_T_FILTER_FILTER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_from_producer__pfc_PFC_filter_t_filter_filter(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_to_consumer__pfc_PFC_filter_t_filter_filter(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__pfc_PFC_filter_t_filter_filter(
  STACK_FRAME
  String str);

void api_logDebug__pfc_PFC_filter_t_filter_filter(
  STACK_FRAME
  String str);

void api_logError__pfc_PFC_filter_t_filter_filter(
  STACK_FRAME
  String str);

#endif
