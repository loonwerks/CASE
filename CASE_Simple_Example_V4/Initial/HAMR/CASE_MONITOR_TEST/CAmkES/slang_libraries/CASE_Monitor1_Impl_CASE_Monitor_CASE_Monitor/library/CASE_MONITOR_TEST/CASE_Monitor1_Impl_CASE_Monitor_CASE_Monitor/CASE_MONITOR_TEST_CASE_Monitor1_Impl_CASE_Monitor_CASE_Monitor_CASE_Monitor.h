#ifndef SIREUM_H_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor
#define SIREUM_H_CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init(STACK_FRAME_ONLY);

CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_Bridge CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_CASE_MonitorBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_noData(STACK_FRAME_ONLY);
Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_id(STACK_FRAME_ONLY);
Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port(STACK_FRAME_ONLY);
void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Observed_port_a(STACK_FRAME Option_8E9F45 p_Observed_port);
Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_id(STACK_FRAME_ONLY);
Option_8E9F45 CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port(STACK_FRAME_ONLY);
void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_Suspect_Traffic_Out_port_a(STACK_FRAME Option_8E9F45 p_Suspect_Traffic_Out_port);

Z CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_main(STACK_FRAME IS_948B60 args);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseArchitecture(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_computeEntryPoint(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_touch(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_run(STACK_FRAME_ONLY);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logInfo(STACK_FRAME String title, String msg);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logDebug(STACK_FRAME String title, String msg);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_logError(STACK_FRAME String title, String msg);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_CASE_MonitorBridge(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_entryPoints(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_noData(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_id(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Observed_port(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_id(STACK_FRAME_ONLY);

void CASE_MONITOR_TEST_CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor_CASE_Monitor_init_Suspect_Traffic_Out_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif