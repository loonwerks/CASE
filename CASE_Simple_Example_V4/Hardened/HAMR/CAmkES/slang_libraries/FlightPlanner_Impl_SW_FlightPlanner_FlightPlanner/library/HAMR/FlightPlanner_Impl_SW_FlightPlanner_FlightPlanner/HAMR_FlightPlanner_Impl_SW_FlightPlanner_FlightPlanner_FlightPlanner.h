#ifndef SIREUM_H_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner
#define SIREUM_H_HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init(STACK_FRAME_ONLY);

HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_Bridge HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlannerBridge(STACK_FRAME_ONLY);
art_Bridge_EntryPoints HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_entryPoints(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_noData(STACK_FRAME_ONLY);
Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port(STACK_FRAME_ONLY);
void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_MissionCommand_port_a(STACK_FRAME Option_8E9F45 p_MissionCommand_port);
Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_id(STACK_FRAME_ONLY);
Option_8E9F45 HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port(STACK_FRAME_ONLY);
void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_FlightPlan_port_a(STACK_FRAME Option_8E9F45 p_FlightPlan_port);

Z HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_main(STACK_FRAME IS_948B60 args);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseArchitecture(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_initialiseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_computeEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_finaliseEntryPoint(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch_printDataContent(STACK_FRAME art_DataContent a);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_touch(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_run(STACK_FRAME_ONLY);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logInfo(STACK_FRAME String title, String msg);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logDebug(STACK_FRAME String title, String msg);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_logError(STACK_FRAME String title, String msg);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlannerBridge(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_entryPoints(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_noData(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_id(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_MissionCommand_port(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_id(STACK_FRAME_ONLY);

void HAMR_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_FlightPlanner_init_FlightPlan_port(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif