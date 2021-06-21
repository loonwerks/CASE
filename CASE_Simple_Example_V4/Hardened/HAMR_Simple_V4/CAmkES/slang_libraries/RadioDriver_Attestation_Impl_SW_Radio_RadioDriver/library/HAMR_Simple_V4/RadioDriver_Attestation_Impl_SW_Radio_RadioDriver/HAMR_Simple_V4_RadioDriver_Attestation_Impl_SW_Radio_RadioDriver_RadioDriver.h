#ifndef SIREUM_H_HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver
#define SIREUM_H_HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init(STACK_FRAME_ONLY);

HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_Bridge HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_RadioDriverBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_noData(STACK_FRAME_ONLY);
Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_MissionCommand_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_MissionCommand_port(STACK_FRAME_ONLY);
void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port);
Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationRequest_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationRequest_port(STACK_FRAME_ONLY);
void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationRequest_port);
Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationResponse_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationResponse_port(STACK_FRAME_ONLY);
void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationResponse_port);
Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterResponse_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterResponse_port(STACK_FRAME_ONLY);
void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterResponse_port_a(STACK_FRAME Option_8E9F45 p_AttestationTesterResponse_port);
Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterRequest_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterRequest_port(STACK_FRAME_ONLY);
void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_AttestationTesterRequest_port_a(STACK_FRAME Option_8E9F45 p_AttestationTesterRequest_port);

Z HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_main(STACK_FRAME IS_948B60 args);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_initialiseArchitecture(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_computeEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_touch(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_run(STACK_FRAME_ONLY);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_logInfo(STACK_FRAME String title, String msg);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_logDebug(STACK_FRAME String title, String msg);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_logError(STACK_FRAME String title, String msg);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_putValue(STACK_FRAME Z portId, art_DataContent data);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_RadioDriverBridge(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_entryPoints(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_noData(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_MissionCommand_id(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_MissionCommand_port(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationRequest_id(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationRequest_port(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationResponse_id(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationResponse_port(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationTesterResponse_id(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationTesterResponse_port(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationTesterRequest_id(STACK_FRAME_ONLY);

void HAMR_Simple_V4_RadioDriver_Attestation_Impl_SW_Radio_RadioDriver_RadioDriver_init_AttestationTesterRequest_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif