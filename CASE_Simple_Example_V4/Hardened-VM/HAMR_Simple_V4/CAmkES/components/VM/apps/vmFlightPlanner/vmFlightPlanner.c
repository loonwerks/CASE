#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>

// This file will not be overwritten so is safe to edit
#include <sb_queue_union_art_DataContent_1.h>
#include "hardened_v4.h"

char* setupIncomingDataPort(
  char* portName, 
  int portSize, 
  int* portQueue_fd, 
  bool isEventPort) {
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

void pre_init(void) {
  //initialise data structure for incoming event data port read_port
  sb_queue_union_art_DataContent_1_Recv_init(
    &sb_read_port_recv_queue, sb_read_port_queue);
  sb_queue_int8_t_1_Recv_init(
    &sb_pacer_period_recv_queue, sb_pacer_period_queue);  
}

/**********************************************************************
 * replicate the behavior of a native seL4 version of pacer wait
 **********************************************************************/
void sb_pacer_notification_wait() {
  sb_event_counter_t numDropped = 0;
  int8_t data;

  while (!sb_queue_int8_t_1_dequeue(&sb_pacer_period_recv_queue, &numDropped, &data)) {
    int val;

    /* Blocking read */
    int result = read(sb_pacer_period_fd, &val, sizeof(val));
    if (result < 0) {
      printf("Error reading period. %i\n", result);
      //return -1;
    }
  }
  // printf("read %i -- numDropped %i\n", data, numDropped);
}

/**********************************************************************
 * the following api_get_X method are adapted from the non-vm versions
 * of slang-embedded c-api's
 **********************************************************************/
 bool api_get_MissionCommand(size_t *numBits, uint8_t *byteArray){
  DeclNewart_DataContent(payload);
  if(sb_read_port_dequeue(&payload)) {
  	return populateByteArray(&payload.base_Base_Types_Bits_Payload, numBits, byteArray);
  } else {
    return false;
  }    
}

/**********************************************************************
 * the following api_put_X method are adapted from the non-vm versions
 * of slang-embedded c-api's
 **********************************************************************/
void api_put_FlightPlan(size_t numBits, uint8_t *byteArray){
  DeclNewbase_Base_Types_Bits_Payload(payload);
  populatePayload(SF numBits, byteArray, &payload);
  sb_write_port_enqueue((const union art_DataContent *) &payload);
}


void run(void){
  uint32_t numBytes_RF_Msg = 32;
  uint32_t numBits_RF_Msg = numBytes_RF_Msg * 8;
  uint32_t numBytes_Mission = 36;
  uint32_t numBits_Mission = numBytes_Mission * 8;

  for(;;) {
    sb_pacer_notification_wait();
    
    uint8_t t0[numBytes_RF_Msg]; // producer will send 1-byte/8-bits
    size_t t0_numBits;
    if(api_get_MissionCommand(&t0_numBits, t0)) {      
      assert(t0_numBits == numBits_RF_Msg);
      uint8_t* output = getFlightPlannerOutput(t0);
      if (output != NULL) {
        printf("FLIGHTPLANNER SEND\n");
        print_Mission((const Mission*)output);
        api_put_FlightPlan(numBits_Mission, output);
      }
    }    
  }
}

void tearDownPort(char* raw_fd, int fd, int size) {
  munmap(raw_fd, size);
  close(fd);
}

int main(int argc, char *argv[]) {
  char* defaults[] = {get_instance_name(), 
                      "/dev/uio0", "8192", // read_port 
                      "/dev/uio1", "8192", // write_port 
                      "/dev/uio2", "4096"  // pacer 
                    };

  char**myargs = defaults;

  // Check command line arguments that overide defaults if provided
  if(argc > 1){
    myargs = argv;
    if(argc != (sizeof(defaults) / sizeof(char*))) {
      char* a = "<fc of sb_read_port_queue> <size of sb_read_port_queue>";
      char* b = "<fc of sb_write_port_queue> <size of sb_write_port_queue>";
      char* c = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n %s\n %s\n %s\n\n", a, b, c);
      
      return 1;
    }
  }

  // Create the read port
  int arg = 1;
  char* raw_read_port = 
    setupIncomingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
      &sb_read_port_fd);
  sb_read_port_queue = (sb_queue_union_art_DataContent_1_t *) raw_read_port;

  // Create the write port
  char* raw_write_port = 
    setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
      &sb_write_port_fd, &sb_write_port_emit);
  sb_write_port_queue_1 = (sb_queue_union_art_DataContent_1_t *) raw_write_port;
  
  // Create the pacer port for scheduling
  char* raw_pacer_period = 
    setupIncomingEventDataPort(myargs[arg++], atoi(myargs[arg++]), 
      &sb_pacer_period_fd);
  sb_pacer_period_queue = (sb_queue_int8_t_1_t *) raw_pacer_period;

  if(   sb_read_port_queue == NULL 
     || sb_write_port_queue_1 == NULL 
     || sb_pacer_period_queue == NULL
    ) {
      printf("ERROR: failed to create the ports\n");
  } else {
    pre_init();
    run();
  }

  tearDownPort(raw_read_port, sb_read_port_fd, atoi(myargs[2]));
  tearDownPort(raw_write_port, sb_write_port_fd, atoi(myargs[4]));
  tearDownPort(raw_pacer_period, sb_pacer_period_fd, atoi(myargs[6])); 
  return 0;
}
