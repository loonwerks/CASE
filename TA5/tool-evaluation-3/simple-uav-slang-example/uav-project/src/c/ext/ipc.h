#ifndef IPC_H
#define IPC_H
#include <all.h>

#ifdef CAMKES

typedef void(*ipcCallbackType)(art_DataContent);

void ipc_registerCallback ( Z id, ipcCallbackType cb);
void camkes_In_Port_Data_Transfer (Z port, art_DataContent d);

#endif

#endif
