#ifndef SIREUM_H_uav_project_extern_ArtNix
#define SIREUM_H_uav_project_extern_ArtNix
#include <types.h>

void uav_project_extern_ArtNix_init(STACK_FRAME_ONLY);

Z uav_project_extern_ArtNix_maxPortIds(STACK_FRAME_ONLY);
art_TimeTriggered uav_project_extern_ArtNix_timeTriggered(STACK_FRAME_ONLY);
MS_2590FE uav_project_extern_ArtNix_data(STACK_FRAME_ONLY);
Option_8E9F45 uav_project_extern_ArtNix_noData(STACK_FRAME_ONLY);
MS_B5E3E6 uav_project_extern_ArtNix_connection(STACK_FRAME_ONLY);
MS_30A5B4 uav_project_extern_ArtNix_eventInPorts(STACK_FRAME_ONLY);
MS_2590FE uav_project_extern_ArtNix_frozen(STACK_FRAME_ONLY);
void uav_project_extern_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen);
MS_2590FE uav_project_extern_ArtNix_outgoing(STACK_FRAME_ONLY);
void uav_project_extern_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing);
B uav_project_extern_ArtNix_isTimeDispatch(STACK_FRAME_ONLY);
void uav_project_extern_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch);

Unit uav_project_extern_ArtNix_eventDispatch(STACK_FRAME_ONLY);

Unit uav_project_extern_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d);

Unit uav_project_extern_ArtNix_run(STACK_FRAME_ONLY);

Unit uav_project_extern_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit uav_project_extern_ArtNix_logInfo(STACK_FRAME String title, String msg);

void uav_project_extern_ArtNix_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId);

Unit uav_project_extern_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void uav_project_extern_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit uav_project_extern_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit uav_project_extern_ArtNix_logError(STACK_FRAME String title, String msg);

#endif