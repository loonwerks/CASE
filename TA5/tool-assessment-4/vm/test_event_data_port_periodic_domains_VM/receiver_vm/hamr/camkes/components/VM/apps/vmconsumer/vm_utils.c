#include "vm_utils.h"

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <stdbool.h>
#include <sys/mman.h>

void hex_dump(uint8_t* byte_array, size_t numBytes) {
  printf("[ ");
  for(size_t byte = 0; byte < numBytes; byte++) {
    if(byte != 0 && byte % 16 == 0) { printf("\n  "); }
    printf("%02X ", byte_array[byte]);
  }
  printf("]\n");
}

void tearDownPort(char* raw_fd, int fd, int size) {
  munmap(raw_fd, size);
  close(fd);
}

char* setupIncomingDataPort_Helper(char* portName, int portSize, int* portQueue_fd, bool isEventPort) {

  printf("Setting up incoming %sdata port %s with size %i\n", isEventPort ? "event " : "", portName, portSize);

  assert(portSize > 0);

  *portQueue_fd = open(portName, O_RDWR);
  assert(*portQueue_fd >= 0 && portName);

  char *raw_port_queue;
  if ((raw_port_queue = mmap(NULL, 
                             portSize, 
                             PROT_READ | PROT_WRITE, MAP_SHARED, 
                             *portQueue_fd, 
                             1 * getpagesize())) == (void *) -1) {
    printf("mmap %s failed\n", portName);
    close(*portQueue_fd);
    return NULL;
  }

  printf("Successfully setup incoming %sdata port %s\n", isEventPort ? "event " : "", portName);
    
  return raw_port_queue;
}


char* setupOutgoingEventDataPort(
  char* portName, 
  int portSize,
  int* port_fd,
  int** portEmit) {

  printf("Setting up outgoing event data port %s %i\n", portName, portSize);
  assert(portSize > 0);
 
  *port_fd = open(portName, O_RDWR);
  assert(*port_fd >= 0 && portName);

  char *raw_port_queue;
  if ((raw_port_queue = mmap(NULL, 
                       portSize, 
                       PROT_READ | PROT_WRITE, 
                       MAP_SHARED, 
                       *port_fd, 
                       1 * getpagesize())) == (void *) -1) {
    printf("incoming event data port mmap %s failed\n", portName);
    close(*port_fd);
    return NULL;
  }

  char *emit;
  if ((emit = mmap(NULL, 
                   0x1000, 
                   PROT_READ | PROT_WRITE, 
                   MAP_SHARED, 
                   *port_fd, 
                   0 * getpagesize())) == (void *) -1) {
    printf("mmap emit failed for %s\n", portName);
    close(*port_fd);
    return NULL;
  }
  
  *portEmit = (int*) emit;
  
  printf("Successfully setup %s\n", portName);
  
  return raw_port_queue;
}

char* setupOutgoingDataPort(char* portName, int portSize, int* port_fd) {
  assert(false);
}

char* setupIncomingEventDataPort(char* portName, int portSize, int* portQueue_fd) {
  return setupIncomingDataPort_Helper(portName, portSize, portQueue_fd, true);
}

char* setupIncomingDataPort(char* portName, int portSize, int* portQueue_fd) {
  return setupIncomingDataPort_Helper(portName, portSize, portQueue_fd, false);
}

