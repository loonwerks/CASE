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
#include <sb_event_counter.h>
#include <sp_int8_t.h>
#include <sb_queue_int8_t_1.h>

void sb_pacer_notification_wait();

int sb_pacer_period_queue_fd;
sb_queue_int8_t_1_Recv_t sb_pacer_period_queue;

int sb_read_port_fd;
sp_int8_t_t *sb_read_port;



void sb_entrypoint_period_consumer_t_impl(int64_t *in_arg) {
  test_event_data_port_consumer_time_triggered_handler((int64_t *) in_arg);
}

seqNum_t sb_read_port_seqNum;

/*****************************************************************
 * sb_read_port_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_read_port_is_empty() {
  return is_empty_sp_int8_t(sb_read_port);
}

bool sb_read_port_read(int8_t * value) {
  seqNum_t new_seqNum;
  if ( read_sp_int8_t(sb_read_port, value, &new_seqNum) ) {
    sb_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

/************************************************************************
 *  sb_entrypoint_consumer_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_t_impl_initializer(const int64_t * in_arg) {
  test_event_data_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // receiver so DO NOT initialise data structure for data port read_port
  // init_sp_int8_t(sb_read_port, &sb_read_port_seqNum);
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    {
      int64_t sb_dummy = 0;
      sb_entrypoint_period_consumer_t_impl(&sb_dummy);
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
      char* a = "<fd of sb_read_port_queue> <size of sb_read_port_queue>";
      char* b = "<fd of sb_pacer_period_queue> <size of sb_pacer_period_queue>";
      
      printf("Usage:\n	%s\n	%s\n\n", a, b);
      
      return 1;
    }
  }
  
  char *sb_read_port_name = myargs[1];
    
  int sb_read_port_length = atoi(myargs[2]);
  assert(sb_read_port_length > 0);
 
  sb_read_port_fd = open(sb_read_port_name, O_RDWR);
  assert(sb_read_port_fd >= 0);

  char *raw_sb_read_port;
  if ((raw_sb_read_port = mmap(NULL, 
                       sb_read_port_length, 
                       PROT_READ | PROT_WRITE, 
                       MAP_SHARED, 
                       sb_read_port_fd, 
                       1 * getpagesize())) == (void *) -1) {
      printf("mmap raw_sb_read_port failed\n");
      close(sb_read_port_fd);
  }

  sb_read_port = (sp_int8_t_t *)raw_sb_read_port; 
    
  
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

  run();

  munmap(raw_sb_read_port, sb_read_port_length);
  close(sb_read_port_fd);
  
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