#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SharedMemory
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SharedMemory
#include <types.h>

Z ACT_Demo_Dec2018__camkes_X_SharedMemory_create(STACK_FRAME Z id);

void ACT_Demo_Dec2018__camkes_X_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port);

void ACT_Demo_Dec2018__camkes_X_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port);

B ACT_Demo_Dec2018__camkes_X_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit ACT_Demo_Dec2018__camkes_X_SharedMemory_remove(STACK_FRAME Z id);

#endif