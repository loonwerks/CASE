#ifndef SIREUM_H_uav_project_extern_SharedMemory
#define SIREUM_H_uav_project_extern_SharedMemory
#include <types.h>

void uav_project_extern_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port);

void uav_project_extern_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port);

Z uav_project_extern_SharedMemory_create(STACK_FRAME Z id);

B uav_project_extern_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit uav_project_extern_SharedMemory_remove(STACK_FRAME Z id);

#endif