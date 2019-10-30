#ifndef IPC_H
#define IPC_H
#include <all.h>

static const int seed = 1;

void camkes_In_Port_Data_Transfer (Z port, art_DataContent d);

// needs to be implemented per AADL component in order to send
// slang payloads to consumers via CAmkES
void camkes_sendAsync(Z port, art_DataContent d);

#endif