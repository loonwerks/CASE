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

#include <sb_consumer_t_impl.h>

#include <sb_types.h>
#include <sp_int8_t.h>
#include <sb_queue_int8_t_1.h>
#include <sb_event_counter.h>

// This file will not be overwritten so is safe to edit

void sb_pacer_notification_wait();

int sb_pacer_period_queue_fd;
sb_queue_int8_t_1_Recv_t sb_pacer_period_queue;

int sp_read_port_fd;
sp_int8_t_t *sp_read_port; 

seqNum_t sp_read_port_seqNum;


void sp_entrypoint_period_consumer_t_impl(int64_t *in_arg) {
  test_data_port_consumer_time_triggered_handler((int64_t *) in_arg);
}

/************************************************************************
 * sp_read_port_read:
 ************************************************************************/
bool sp_read_port_read(int8_t * value) {
  seqNum_t new_seqNum;
  if ( read_sp_int8_t(sp_read_port, value, &new_seqNum) ) {
    sp_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

/************************************************************************
 * sb_read_port_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sp_read_port_is_empty(){
  return is_empty_sp_int8_t(sp_read_port);;
}

/************************************************************************
 *  sb_entrypoint_consumer_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sp_entrypoint_consumer_t_impl_initializer(const int64_t * in_arg) {
  test_data_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for incoming event data port read_port
  sp_read_port_seqNum = 0;
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sp_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    {
      int64_t sb_dummy = 0;
      sp_entrypoint_period_consumer_t_impl(&sb_dummy);
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {

  if (argc != 5) {
    printf("Usage: %s <fd of sp_read_port> <size of sb_read_port> <fd of sb_pacer_period_queue> <size of sb_pacer_period_queue> \n\n",
           argv[0]);
    return 1;
  }

  char *sp_read_port_name = argv[1];

  int sp_read_port_length = atoi(argv[2]);
  assert(sp_read_port_length > 0);

  sp_read_port_fd = open(sp_read_port_name, O_RDWR);
  assert(sp_read_port_fd >= 0);

  char *sp_read_port_char;
  if ((sp_read_port_char = mmap(NULL, 
                                      sp_read_port_length,
                                      PROT_READ | PROT_WRITE, 
                                      MAP_SHARED, 
                                      sp_read_port_fd, 
                                      1 * getpagesize())) == (void *) -1) {
      printf("mmap sp_read_port_char failed\n");
      close(sp_read_port_fd);
      return 1;
  }

  sp_read_port = (sp_int8_t_t *) sp_read_port_char;

  char *sb_pacer_period_queue_name = argv[3];

  int sb_pacer_period_queue_length = atoi(argv[4]);
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

  run();

  munmap(sp_read_port_char, sp_read_port_length);
  close(sp_read_port_fd);

  munmap(sb_pacer_period_queue_char, sb_pacer_period_queue_length);
  close(sb_pacer_period_queue_fd);

  return 0;
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
    static const char name[] = "vmdst_process";
    return name;
}
