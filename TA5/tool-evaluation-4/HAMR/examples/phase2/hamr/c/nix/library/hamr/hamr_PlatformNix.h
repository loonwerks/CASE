#ifndef SIREUM_H_hamr_PlatformNix
#define SIREUM_H_hamr_PlatformNix

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

void hamr_PlatformNix_init(STACK_FRAME_ONLY);

Z hamr_PlatformNix_seed(STACK_FRAME_ONLY);
void hamr_PlatformNix_seed_a(STACK_FRAME Z p_seed);
IS_82ABD8 hamr_PlatformNix_ids(STACK_FRAME_ONLY);
void hamr_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids);

Unit hamr_PlatformNix_receive(STACK_FRAME Option_882048 portOpt, MBox2_1CBFC4 out);

Unit hamr_PlatformNix_receiveAsync(STACK_FRAME Option_882048 portOpt, MBox2_1029D1 out);

Unit hamr_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt);

B hamr_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data);

Unit hamr_PlatformNix_finalise(STACK_FRAME_ONLY);

void hamr_PlatformNix_init_seed(STACK_FRAME_ONLY);

void hamr_PlatformNix_init_ids(STACK_FRAME_ONLY);

#ifdef __cplusplus
}
#endif

#endif