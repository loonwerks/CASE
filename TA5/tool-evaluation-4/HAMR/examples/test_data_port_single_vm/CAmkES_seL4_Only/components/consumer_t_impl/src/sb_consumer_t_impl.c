#include "../includes/sb_consumer_t_impl.h"
#include <string.h>
#include <camkes.h>

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

void sb_entrypoint_period_consumer_t_impl(int64_t *in_arg) {
  int8_t value;
  if(sb_read_port_read(&value)){
    printf("[%s] value {%d}\n", get_instance_name(), value);
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
  receiver_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for data port read_port
  init_sp_int8_t(sb_read_port, &sb_read_port_seqNum);
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_pacer_notification_wait();
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  for(;;) {
    sb_pacer_notification_wait();
    { 
      int64_t sb_dummy = 0;
      sb_entrypoint_period_consumer_t_impl(&sb_dummy);
    }
  }
  return 0;
}
