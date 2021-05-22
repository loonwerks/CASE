#include "vm_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <unistd.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>
#include <sb_queue_union_art_DataContent_1.h>

// This file will not be overwritten so is safe to edit

/************************************************************
 * FORWARD DECLS
 ***********************************************************/
 
const char *get_instance_name(void); // would be provided via CAmkES if native

void sb_pacer_notification_wait(); // would be provided via CAmkES if native 

// the following api_get_X and api_send_X methods would be provided if the slang library was linked in
bool api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(size_t *numBits, uint8_t *byteArray);


/************************************************************
 * VARIABLES  
 *   The *sb_xx* versions would be provided via camkes.h for
 *   native components
 ***********************************************************/

int sb_read_port_fd;
sb_queue_union_art_DataContent_1_t *sb_read_port_queue;
sb_queue_union_art_DataContent_1_Recv_t sb_read_port_recv_queue;

int sb_pacer_period_fd;
sb_queue_int8_t_1_t *sb_pacer_period_queue;
sb_queue_int8_t_1_Recv_t sb_pacer_period_recv_queue;

 
void pre_init(void) {
  //initialise data structure for incoming event data port read_port
  sb_queue_union_art_DataContent_1_Recv_init(&sb_read_port_recv_queue, sb_read_port_queue);
  
  // sb_queue_int8_t_1_init(sb_pacer_period_queue); receiver so shouldn't init queue
  sb_queue_int8_t_1_Recv_init(&sb_pacer_period_recv_queue, sb_pacer_period_queue); // but should init its recv queue  
}

void run(void){
  printf("Hello from %s's run method\n", get_instance_name());
  
  for(;;) {
    //printf("Hello from %s's run loop\n", get_instance_name());
    
    sb_pacer_notification_wait();
    
    uint8_t t0[1]; // producer will send 1-byte/8-bits
    size_t t0_numBits;
    if(api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(&t0_numBits, t0)) {
      
      assert(t0_numBits == 8);
      
      printf("%s: Received %i bits on read_port: ", get_instance_name(), t0_numBits);
      hex_dump(t0, 1);
      printf("\n");
    }    
  }
}


int main(int argc, char *argv[]) {
  printf("VM App %s started\n", get_instance_name());
  
  char* defaults[] = {get_instance_name(), "/dev/uio0", "4096", // read_port 
                                           "/dev/uio1", "4096"  // pacer 
                     };
  
  char**myargs = defaults;
  
  if(argc > 1){
    myargs = argv;
    if(argc != (sizeof(defaults) / sizeof(char*))) {
      char* a = "<fc of sb_read_port_queue> <size of sb_read_port_queue>";
      char* b = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n	%s\n	%s\n\n", a, b);
      
      return 1;
    }
  }
  
  int arg = 1;
  char* raw_read_port = setupIncomingDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_read_port_fd);
  sb_read_port_queue = (sb_queue_union_art_DataContent_1_t *) raw_read_port;
    
  char* raw_pacer_period = setupIncomingEventDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_pacer_period_fd);
  sb_pacer_period_queue = (sb_queue_int8_t_1_t *) raw_pacer_period;
  
  if(sb_read_port_queue == NULL ||
     sb_pacer_period_queue == NULL) {
  
    printf("Something went wrong while setting up the ports, bailing out\n");
    
  } else {

    pre_init();
  
    run();
  }
  
  tearDownPort(raw_read_port, sb_read_port_fd, atoi(myargs[2]));
  tearDownPort(raw_pacer_period, sb_pacer_period_fd, atoi(myargs[4]));
  
  return 0;
}


/********************************************************************************
 * seL4 dequeue methods
 * the following are direct copies of the seL4 enqueue methods HAMR would generate
 * for a native component's incoming event data ports 
 ********************************************************************************/
/************************************************************************
 * sb_read_port_dequeue_poll:
 ************************************************************************/
bool sb_read_port_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_read_port_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_read_port_dequeue:
 ************************************************************************/
bool sb_read_port_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_read_port_dequeue_poll(&numDropped, data);
}



// this is the guts of one of the hamr generated api_get... methods.  Separating out so it can be reused
bool populateByteArray(base_Base_Types_Bits_Payload payload, size_t *numBits, uint8_t *byteArray) {
  
  *numBits = payload->value.size;
  if(*numBits > 0) {
  	size_t numBytes = (*numBits - 1) / 8 + 1;
  	memcpy(byteArray, payload->value.value, numBytes);
  }
  return true;
}

/**********************************************************************
 * the following api_send_X method are adapted from the non-vm versions
 * of slang-embedded c-api's
 **********************************************************************/
 bool api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  size_t *numBits, uint8_t *byteArray){
  
  DeclNewart_DataContent(payload);
  if(sb_read_port_dequeue(&payload)) {
  	return populateByteArray(&payload.base_Base_Types_Bits_Payload, numBits, byteArray);
  } else {
    return false;
  }    
}


// replicate the behavior of a native seL4 version of pacer wait
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

// camkes.h would have provided this method
const char *get_instance_name(void) {
    static const char name[] = "vmconsumer";
    return name;
}