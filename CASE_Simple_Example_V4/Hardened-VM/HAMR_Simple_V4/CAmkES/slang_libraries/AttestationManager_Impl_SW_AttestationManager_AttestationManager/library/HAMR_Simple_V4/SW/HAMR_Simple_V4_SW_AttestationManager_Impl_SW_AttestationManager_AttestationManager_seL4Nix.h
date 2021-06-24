#ifndef SIREUM_H_HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix
#define SIREUM_H_HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationRequest_Send(STACK_FRAME art_DataContent d);

Unit HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_TrustedIds_Send(STACK_FRAME art_DataContent d);

void HAMR_Simple_V4_SW_AttestationManager_Impl_SW_AttestationManager_AttestationManager_seL4Nix_AttestationResponse_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif