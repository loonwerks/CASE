#ifndef SIREUM_H_hamr_SharedMemory
#define SIREUM_H_hamr_SharedMemory

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

Unit hamr_SharedMemory_receive(STACK_FRAME Z port, MBox2_1CBFC4 out);

Unit hamr_SharedMemory_receiveAsync(STACK_FRAME Z port, MBox2_1029D1 out);

Z hamr_SharedMemory_create(STACK_FRAME Z id);

B hamr_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d);

Unit hamr_SharedMemory_remove(STACK_FRAME Z id);

#ifdef __cplusplus
}
#endif

#endif