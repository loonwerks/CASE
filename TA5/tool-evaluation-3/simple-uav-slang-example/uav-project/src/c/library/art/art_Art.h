#ifndef SIREUM_H_art_Art
#define SIREUM_H_art_Art
#include <types.h>

void art_Art_init(STACK_FRAME_LAST);

Z art_Art_maxComponents(STACK_FRAME_LAST);
Z art_Art_maxPorts(STACK_FRAME_LAST);
String art_Art_logTitle(STACK_FRAME_LAST);
MS_94FFA9 art_Art_bridges(STACK_FRAME_LAST);
MS_E444B2 art_Art_connections(STACK_FRAME_LAST);
MS_F55A18 art_Art_ports(STACK_FRAME_LAST);

Unit art_Art_run(STACK_FRAME art_ArchitectureDescription system);

Unit art_Art_m_register(STACK_FRAME art_Bridge bridge);

Unit art_Art_connect(STACK_FRAME art_UPort from, art_UPort to);

void art_Art_dispatchStatus(STACK_FRAME art_DispatchStatus result, Z bridgeId);

Unit art_Art_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void art_Art_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit art_Art_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit art_Art_logInfo(STACK_FRAME Z bridgeId, String msg);

Unit art_Art_putValue(STACK_FRAME Z portId, art_DataContent data);

void art_Art_bridge(STACK_FRAME art_Bridge result, Z bridgeId);

Unit art_Art_logError(STACK_FRAME Z bridgeId, String msg);

#endif