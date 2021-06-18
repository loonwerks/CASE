#ifndef SIREUM_H_hamr_ArtNix
#define SIREUM_H_hamr_ArtNix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_ArtNix_init(STACK_FRAME_ONLY);

Z hamr_ArtNix_maxPortIds(STACK_FRAME_ONLY);
Option_8E9F45 hamr_ArtNix_noData(STACK_FRAME_ONLY);
MS_2590FE hamr_ArtNix_data(STACK_FRAME_ONLY);
MS_B5E3E6 hamr_ArtNix_connection(STACK_FRAME_ONLY);
MS_2590FE hamr_ArtNix_frozen(STACK_FRAME_ONLY);
void hamr_ArtNix_frozen_a(STACK_FRAME MS_2590FE p_frozen);
MS_2590FE hamr_ArtNix_outgoing(STACK_FRAME_ONLY);
void hamr_ArtNix_outgoing_a(STACK_FRAME MS_2590FE p_outgoing);
B hamr_ArtNix_isTimeDispatch(STACK_FRAME_ONLY);
void hamr_ArtNix_isTimeDispatch_a(STACK_FRAME B p_isTimeDispatch);

Unit hamr_ArtNix_timeDispatch(STACK_FRAME_ONLY);

Unit hamr_ArtNix_updateData(STACK_FRAME Z port, art_DataContent d);

Unit hamr_ArtNix_run(STACK_FRAME_ONLY);

Unit hamr_ArtNix_logInfo(STACK_FRAME String title, String msg);

Unit hamr_ArtNix_logDebug(STACK_FRAME String title, String msg);

Unit hamr_ArtNix_logError(STACK_FRAME String title, String msg);

void hamr_ArtNix_getValue(STACK_FRAME Option_8E9F45 result, Z portId);

Unit hamr_ArtNix_putValue(STACK_FRAME Z portId, art_DataContent data);

Unit hamr_ArtNix_sendOutput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

Unit hamr_ArtNix_receiveInput(STACK_FRAME IS_82ABD8 eventPortIds, IS_82ABD8 dataPortIds);

void hamr_ArtNix_init_maxPortIds(STACK_FRAME_ONLY);

void hamr_ArtNix_init_noData(STACK_FRAME_ONLY);

void hamr_ArtNix_init_data(STACK_FRAME_ONLY);

void hamr_ArtNix_init_connection(STACK_FRAME_ONLY);

void hamr_ArtNix_init_frozen(STACK_FRAME_ONLY);

void hamr_ArtNix_init_outgoing(STACK_FRAME_ONLY);

void hamr_ArtNix_init_isTimeDispatch(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif