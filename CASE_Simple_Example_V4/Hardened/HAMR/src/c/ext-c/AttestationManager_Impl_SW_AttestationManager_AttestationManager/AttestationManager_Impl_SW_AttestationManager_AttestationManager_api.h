#ifndef ATTESTATIONMANAGER_IMPL_SW_ATTESTATIONMANAGER_ATTESTATIONMANAGER_API_H
#define ATTESTATIONMANAGER_IMPL_SW_ATTESTATIONMANAGER_ATTESTATIONMANAGER_API_H

#include <all.h>

// This file was auto-generated.  Do not edit

void api_put_AttestationRequest__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

bool api_get_AttestationResponse__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray);

void api_put_TrustedIds__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray);

void api_logInfo__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str);

void api_logDebug__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str);

void api_logError__HAMR_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager(
  STACK_FRAME
  String str);

#endif
