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

#include <sb_emitter_t_impl.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sp_int8_t.h>
#include <sb_queue_int8_t_1.h>


void sb_pacer_notification_wait();

int sb_pacer_period_queue_fd;
sb_queue_int8_t_1_Recv_t sb_pacer_period_queue;

int sb_write_port_fd;
sp_int8_t_t *sb_write_port;


void sb_entrypoint_period_emitter_t_impl(int64_t *in_arg) {
  test_event_data_port_emitter_time_triggered_handler((int64_t *) in_arg);
}

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const int8_t * value) {
  return write_sp_int8_t(sb_write_port, value, &sb_write_port_seqNum);
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
  // initialise data structure for data port write_port
  init_sp_int8_t(sb_write_port, &sb_write_port_seqNum);
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
  if (argc != 5) {
    printf("Usage: %s <fd of sb_write_port_queue> <size of sb_write_port_queue> <fd of sb_pacer_period_queue> <size of sb_pacer_period_queue> \n\n",
           argv[0]);
    return 1;
  }
  
  char *sb_write_port_name = argv[1];
    
  int sb_write_port_length = atoi(argv[2]);
  assert(sb_write_port_length > 0);
 
  sb_write_port_fd = open(sb_write_port_name, O_RDWR);
  assert(sb_write_port_fd >= 0);

  char *raw_sb_write_port;
  if ((raw_sb_write_port = mmap(NULL, 
                       sb_write_port_length, 
                       PROT_READ | PROT_WRITE, 
                       MAP_SHARED, 
                       sb_write_port_fd, 
                       1 * getpagesize())) == (void *) -1) {
      printf("mmap raw_sb_write_port failed\n");
      close(sb_write_port_fd);
  }

  sb_write_port = (sp_int8_t_t *)raw_sb_write_port; 
    
  
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

  munmap(raw_sb_write_port, sb_write_port_length);
  close(sb_write_port_fd);
  
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
    static const char name[] = "vmsrc_process";
    return name;
}