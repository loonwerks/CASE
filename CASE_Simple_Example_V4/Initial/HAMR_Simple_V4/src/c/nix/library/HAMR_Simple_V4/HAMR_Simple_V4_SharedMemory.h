#ifndef SIREUM_H_HAMR_Simple_V4_SharedMemory
#define SIREUM_H_HAMR_Simple_V4_SharedMemory

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit HAMR_Simple_V4_SharedMemory_receive(STACK_FRAME Z port, MBox2_1CBFC4 out);

Unit HAMR_Simple_V4_SharedMemory_receiveAsync(STACK_FRAME Z port, MBox2_1029D1 out);

Z HAMR_Simple_V4_SharedMemory_create(STACK_FRAME Z id);

B HAMR_Simple_V4_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit HAMR_Simple_V4_SharedMemory_remove(STACK_FRAME Z id);

#ifdef __cplusplus
}
#endif

#endif