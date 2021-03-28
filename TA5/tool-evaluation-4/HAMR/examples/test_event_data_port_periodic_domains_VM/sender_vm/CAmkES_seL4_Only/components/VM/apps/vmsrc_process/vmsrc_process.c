#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <stdint.h>
#include <string.h>

#include <sb_emitter_t_impl.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>

void sb_pacer_notification_wait();
void sb_write_port_1_notification_emit();

int sb_pacer_period_queue_fd;
sb_queue_int8_t_1_Recv_t sb_pacer_period_queue;


int sb_write_port_fd;
sb_queue_int8_t_1_t *sb_write_port_queue_1;
int *sb_write_port_emit;


void sb_entrypoint_period_emitter_t_impl(int64_t *in_arg) {
  test_event_data_port_emitter_time_triggered_handler((int64_t *) in_arg);
}

bool sb_write_port_enqueue(const int8_t *data) {
  sb_queue_int8_t_1_enqueue(sb_write_port_queue_1, (int8_t*) data);
  sb_write_port_1_notification_emit();

  return true;
}

/************************************************************************
 *  sb_entrypoint_emitter_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_emitter_t_impl_initializer(const int64_t * in_arg) {
  test_event_data_port_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for outgoing event data port write_port
  sb_queue_int8_t_1_init(sb_write_port_queue_1);
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_emitter_t_impl_initializer(&sb_dummy);
  }
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    {
      int64_t sb_dummy = 0;
      sb_entrypoint_period_emitter_t_impl(&sb_dummy);
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {

  printf("VM App %s started\n", get_instance_name());
  
  char* defaults[] = {get_instance_name(), "/dev/uio0", "4096", 
                                           "/dev/uio1", "4096"};
  
  char** myargs = defaults;
  
  if (argc > 1) { // use cli args instead
    myargs = argv;
    if (argc != (sizeof(defaults) / sizeof(char*))) {
      char* a = "<fd of sb_write_port_queue> <size of sb_write_port_queue>";
      char* b = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n	%s\n	%s\n\n", a, b);
      
      return 1;
    }
  }
  
  char *sb_write_port_name = myargs[1];
    
  int sb_write_port_length = atoi(myargs[2]);
  assert(sb_write_port_length > 0);
 
  sb_write_port_fd = open(sb_write_port_name, O_RDWR);
  assert(sb_write_port_fd >= 0);

  char *raw_sb_write_port_queue_1;
  if ((raw_sb_write_port_queue_1 = mmap(NULL, 
                       sb_write_port_length, 
                       PROT_READ | PROT_WRITE, 
                       MAP_SHARED, 
                       sb_write_port_fd, 
                       1 * getpagesize())) == (void *) -1) {
      printf("mmap raw_sb_write_port_queue_1 failed\n");
      close(sb_write_port_fd);
  }

  char *emit;
  if ((emit = mmap(NULL, 
                   0x1000, 
                   PROT_READ | PROT_WRITE, 
                   MAP_SHARED, 
                   sb_write_port_fd, 
                   0 * getpagesize())) == (void *) -1) {
      printf("mmap emit failed\n");
      close(sb_write_port_fd);
  }
  
  sb_write_port_queue_1 = (sb_queue_int8_t_1_t *)raw_sb_write_port_queue_1; 
  sb_write_port_emit = (int*) emit;

  char *sb_pacer_period_queue_name = myargs[3];

  int sb_pacer_period_queue_length = atoi(myargs[4]);
  assert(sb_pacer_period_queue_length > 0);

  sb_pacer_period_queue_fd = open(sb_pacer_period_queue_name, O_RDWR);
  assert(sb_pacer_period_queue_fd >= 0);


  char *sb_pacer_period_queue_char;
  if ((sb_pacer_period_queue_char = mmap(NULL, 
                                         sb_pacer_period_queue_length, 
                                         PROT_READ | PROT_WRITE, MAP_SHARED, 
                                         sb_pacer_period_queue_fd, 
                                         1 * getpagesize())) == (void *) -1) {
      printf("mmap sb_pacer_period_queue_char failed\n");
      close(sb_pacer_period_queue_fd);
      return 1;
  }

  sb_queue_int8_t_1_Recv_init(&sb_pacer_period_queue, (sb_queue_int8_t_1_t *)sb_pacer_period_queue_char);
    
  pre_init();
  
  // TODO: can't rely on c struct init here
  sb_write_port_queue_1->numSent = 0;
  // TODO: what about the array in the struct?

  run();

  munmap(raw_sb_write_port_queue_1, sb_write_port_length);
  close(sb_write_port_fd);
  
  munmap(sb_pacer_period_queue_char, sb_pacer_period_queue_length);
  close(sb_pacer_period_queue_fd);
    
  return 0;
}

void sb_write_port_1_notification_emit(){
  sb_write_port_emit[0] = 1;
}

void sb_pacer_notification_wait() {
  sb_event_counter_t numDropped = 0;
  int8_t data;
    
  while (!sb_queue_int8_t_1_dequeue(&sb_pacer_period_queue, &numDropped, &data)) {
    int val;
    	
    /* Blocking read */
    int result = read(sb_pacer_period_queue_fd, &val, sizeof(val));
    if (result < 0) {
      printf("Error reading period. %i\n", result);
      //return -1;
    }
  }
}

const char *get_instance_name(void) {
    static const char name[] = "vmsrc_process";
    return name;
}