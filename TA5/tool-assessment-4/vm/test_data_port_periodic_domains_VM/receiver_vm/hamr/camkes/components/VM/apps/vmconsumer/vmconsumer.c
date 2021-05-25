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
#include <sp_union_art_DataContent.h>

// This file will not be overwritten so is safe to edit

/************************************************************
 * FORWARD DECLS
 ***********************************************************/
 
char* setupOutgoingEventDataPort(char* portName, int portSize, int* port_fd, int** portEmit); // convenience method

char* setupIncomingEventDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

char* setupOutgoingDataPort(char* portName, int portSize, int* port_fd); // convenience method

char* setupIncomingDataPort(char* portName, int portSize, int* portQueue_fd);	// convenience method

void tearDownPort(char* raw_fd, int fd, int size); // convenience method

void hex_dump(U8 *byteArray, size_t numBits);

void sb_pacer_notification_wait(); // would be provided via CAmkES if native 

const char *get_instance_name(void); // would be provided via CAmkES if native


// the following api_get_X method would be provided if the slang library was linked in
bool api_get_read_port__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(size_t *numBits, uint8_t *byteArray);


/************************************************************
 * VARIABLES  
 *   The *sb_xx* versions would be provided via camkes.h for
 *   native components
 ***********************************************************/

seqNum_t sb_read_port_seqNum;

int sb_read_port_fd;
sp_union_art_DataContent_t *sb_read_port;

int sb_pacer_period_fd;
sb_queue_int8_t_1_t *sb_pacer_period_queue;
sb_queue_int8_t_1_Recv_t sb_pacer_period_recv_queue;


void pre_init(void) {

  // receiver so nothing to init 
  
  // sb_queue_int8_t_1_init(sb_pacer_period_queue); receiver so shouldn't init queue
  sb_queue_int8_t_1_Recv_init(&sb_pacer_period_recv_queue, sb_pacer_period_queue); // but should init its recv queue
}

int run(void) {
  //printf("Hello from %s's run method\n", get_instance_name());
  
  for(;;) {
    //printf("Hello from %s's run loop\n", get_instance_name());
    
    sb_pacer_notification_wait();
    
    { 
      size_t numBits;
      uint8_t byteArray[1]; // producer is sending a single unsigned 8 bit integer
      if(api_get_read_port__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(&numBits, byteArray)){
        printf("%s: Read %i bits on read_port: ", get_instance_name(), numBits);
        hex_dump(byteArray, (numBits - 1) / 8 + 1);
        printf("\n");
      }
    }
  }
  
  return 0;
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
      char* a = "<fc of sb_read_port> <size of sb_read_port>";
      char* b = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n	%s\n	%s\n\n", a, b);
      
      return 1;
    }
  }
  
  int arg = 1;
  char* raw_read_port = setupIncomingDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_read_port_fd);
  sb_read_port = (sp_union_art_DataContent_t *) raw_read_port;
  
  
  char* raw_pacer_period = setupIncomingEventDataPort(myargs[arg++], atoi(myargs[arg++]),
    &sb_pacer_period_fd);
  sb_pacer_period_queue = (sb_queue_int8_t_1_t *) raw_pacer_period;
  
  if(sb_read_port == NULL ||
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


// this is the guts of one of the hamr generated api_get... methods.  Separating out so it can be reused
bool populateByteArray(base_Base_Types_Bits_Payload payload, size_t *numBits, uint8_t *byteArray) {
  
  *numBits = payload->value.size;
  if(*numBits > 0) {
  	size_t numBytes = (*numBits - 1) / 8 + 1;
  	memcpy(byteArray, payload->value.value, numBytes);
  }
  return true;
}


/********************************************************************************
 * seL4 read methods
 * the following are direct copies of the seL4 read methods HAMR would generate
 * for a native component's incoming data ports 
 ********************************************************************************/
bool sb_read_port_read(union_art_DataContent * value) {
  seqNum_t new_seqNum;
  if ( read_sp_union_art_DataContent(sb_read_port, value, &new_seqNum) ) {
    sb_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

bool api_get_read_port__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(size_t *numBits, uint8_t *byteArray){
  DeclNewart_DataContent(payload);
  if(sb_read_port_read(&payload)) {
    return populateByteArray(&payload.base_Base_Types_Bits_Payload, numBits, byteArray);
  } else {
    return false;
  }
}


void hex_dump(uint8_t* byte_array, size_t numBytes) {
  printf("[ ");
  for(size_t byte = 0; byte < numBytes; byte++) {
    if(byte != 0 && byte % 16 == 0) { printf("\n  "); }
    printf("%02X ", byte_array[byte]);
  }
  printf("]\n");
}
