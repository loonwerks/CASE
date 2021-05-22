#ifndef VM_UTILS_H
#define VM_UTILS_H

#include <stdint.h>
#include <stddef.h>

char* setupOutgoingEventDataPort(char* portName, int portSize, int* port_fd, int** portEmit); // convenience method

char* setupIncomingEventDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

char* setupOutgoingDataPort(char* portName, int portSize, int* port_fd); // convenience method

char* setupIncomingDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

void tearDownPort(char* raw_fd, int fd, int size); // convenience method

void hex_dump(uint8_t *byteArray, size_t numBits);

#endif