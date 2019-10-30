#ifndef SIREUM_H_uav_project_extern_PlatformNix
#define SIREUM_H_uav_project_extern_PlatformNix
#include <types.h>

void uav_project_extern_PlatformNix_init(STACK_FRAME_ONLY);

Z uav_project_extern_PlatformNix_seed(STACK_FRAME_ONLY);
void uav_project_extern_PlatformNix_seed_a(STACK_FRAME Z p_seed);
IS_82ABD8 uav_project_extern_PlatformNix_ids(STACK_FRAME_ONLY);
void uav_project_extern_PlatformNix_ids_a(STACK_FRAME IS_82ABD8 p_ids);

void uav_project_extern_PlatformNix_receive(STACK_FRAME Tuple2_D0E3BB result, Option_882048 portOpt);

void uav_project_extern_PlatformNix_receiveAsync(STACK_FRAME Option_02FA6D result, Option_882048 portOpt);

Unit uav_project_extern_PlatformNix_initialise(STACK_FRAME Z seed, Option_882048 portOpt);

B uav_project_extern_PlatformNix_sendAsync(STACK_FRAME Z app, Z port, art_DataContent data);

Unit uav_project_extern_PlatformNix_finalise(STACK_FRAME_ONLY);

#endif