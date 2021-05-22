#include "vm_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

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

void sb_write_port_notification_emit(); // would be provided via CAmkES if native

// the following api_put_X methods would be provided if the slang library was linked in
void api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(size_t numBits, uint8_t *byteArray);  


/************************************************************
 * VARIABLES  
 *   The *sb_xx* versions would be provided via camkes.h for
 *   native components
 ***********************************************************/

int sb_write_port_fd;
sb_queue_union_art_DataContent_1_t *sb_write_port_queue_1;
int *sb_write_port_emit;

int sb_pacer_period_fd;
sb_queue_int8_t_1_t *sb_pacer_period_queue;
sb_queue_int8_t_1_Recv_t sb_pacer_period_recv_queue;

 
void pre_init(void){
  // initialize data structures for incoming event data ports
  // sb_queue_int8_t_1_init(sb_pacer_period_queue); receiver so shouldn't init queue
  sb_queue_int8_t_1_Recv_init(&sb_pacer_period_recv_queue, sb_pacer_period_queue); // but should init its recv queue
    
  // initialize data structures for outgoing data ports
  sb_queue_union_art_DataContent_1_init(sb_write_port_queue_1);
}

uint8_t value = 0;
int run(void) {

  printf("Hello from %s's run method\n", get_instance_name());
    
  for(;;) {
    //printf("Hello from %s's run loop\n", get_instance_name());
    
    sb_pacer_notification_wait();
    
    uint8_t t0[1]; // producer sends 1-byte/8-bits
    t0[0] = value++;
    api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(8, t0); 
  }
  
  return 0;
}
    
      
int main(int argc, char *argv[]) {
  printf("VM App %s started\n", get_instance_name());
  
  char* defaults[] = {get_instance_name(), "/dev/uio0", "4096", // write_port 
                                           "/dev/uio1", "4096"  // pacer 
                     };
  
  char**myargs = defaults;
  
  if(argc > 1){
    myargs = argv;
    if(argc != (sizeof(defaults) / sizeof(char*))) {
      char* a = "<fc of sb_write_port_queue_1> <size of sb_write_port_queue_1>";
      char* b = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n	%s\n	%s\n\n", a, b);
      
      return 1;
    }
  }
  
  int arg = 1;
  char* raw_write_port = setupOutgoingEventDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_write_port_fd, &sb_write_port_emit);
  sb_write_port_queue_1 = (sb_queue_union_art_DataContent_1_t *) raw_write_port;
    
  char* raw_pacer_period = setupIncomingEventDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_pacer_period_fd);
  sb_pacer_period_queue = (sb_queue_int8_t_1_t *) raw_pacer_period;
  
  if(sb_write_port_queue_1 == NULL ||
     sb_pacer_period_queue == NULL) {
  
    printf("Something went wrong while setting up the ports, bailing out\n");
    
  } else {
  
    // TODO: can't rely on c struct init here
    sb_write_port_queue_1->numSent = 0;
    
    pre_init();
  
    run();
  }
  
  tearDownPort(raw_write_port, sb_write_port_fd, atoi(myargs[2]));
  tearDownPort(raw_pacer_period, sb_pacer_period_fd, atoi(myargs[4]));
  
  return 0;
}



/** this is the guts of one of the hamr generated RADIO api_send... methods which wraps 
 *  a byte array into a payload struct.  Separating it out so that it can be reused for the
 *  other outgoing send methods */
void populatePayload(
  size_t numBits,
  uint8_t *byteArray,
  base_Base_Types_Bits_Payload payload // note base_Base_Types_Bits_Payload is typedef'ed as a pointer to a 'struct hamr_Base_Types_Payload' 
  ){ 
  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  // NOTE:
  // when using the wire-protocol (i.e. byte-arrays) HAMR passes around the Slang type
  //  
  //    @datatype class Bits_Payload(value: ISZ[B]) extends art.DataContent
  // 
  // The fingerprint for ISZ[B] is IS_C4575 (e.g. ISZ[String] yields a different fingerprint).
  
  // declare a new IS_C4F575 on the stack
  DeclNewIS_C4F575(t_0);

  // IS (immutable sequences) have two fields; size and value -- value is an U8 array
  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // FIXME: using the apply method causes a linking error related to missing
  //        fmod, fmodl methods (muslc related?) coming from Slang F32/F64 methods.
  //        So instead just do what the apply method does directly.
  //        i.e. uses Type_assign to copy the IS into the bits payload value field
  // base_Base_Types_Bits_Payload_apply(SF payload, (IS_C4F575) &t_0);
  
  Type_assign(&payload->value, &t_0, sizeof(struct IS_C4F575));
}


/********************************************************************************
 * replicate the behavior of a native seL4 versions of outgoing event data 
 * notification emit methods
 ********************************************************************************/
void sb_write_port_1_notification_emit() { sb_write_port_emit[0] = 1; }


/********************************************************************************
 * seL4 enqueue methods
 * the following are direct copies of the seL4 enqueue methods HAMR would generate
 * for a native component's outgoing event data ports 
 ********************************************************************************/
bool sb_write_port_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_write_port_queue_1, (union_art_DataContent*) data);
  sb_write_port_1_notification_emit();

  return true;
}

void api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(
  size_t numBits, uint8_t *byteArray){
  DeclNewbase_Base_Types_Bits_Payload(payload);
  populatePayload(SF numBits, byteArray, &payload);
  sb_write_port_enqueue((const union art_DataContent *) &payload);
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
    static const char name[] = "vmproducer";
    return name;
}
