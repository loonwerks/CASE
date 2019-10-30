#ifndef IPC_H
#define IPC_H
#include <all.h>

static const int seed = 1;

void camkes_In_Port_Data_Transfer (Z port, art_DataContent d);

void camkes_sendAsync(Z port, art_DataContent d);

#endif