#ifndef ATTESTATIONTESTER_IMPL_SW_ATTESTATIONTESTER_ATTESTATIONTESTER_API_H
#define ATTESTATIONTESTER_IMPL_SW_ATTESTATIONTESTER_ATTESTATIONTESTER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

bool api_get_AttestationRequest__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_AttestationResponse__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_AttestationTester_Impl_SW_AttestationTester_AttestationTester(
  STACK_FRAME
  String str);

#endif
