#ifndef SIREUM_H_HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix
#define SIREUM_H_HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationTesterRequest_Send(STACK_FRAME art_DataContent d);

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_MissionCommand_Send(STACK_FRAME art_DataContent d);

Unit HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationResponse_Send(STACK_FRAME art_DataContent d);

void HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationTesterResponse_Receive(STACK_FRAME Option_8E9F45 result);

void HAMR_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Attestation_seL4Nix_AttestationRequest_Receive(STACK_FRAME Option_8E9F45 result);

#ifdef __cplusplus
}
#endif

#endif