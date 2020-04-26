#include "../includes/sb_destination_thread_impl.h"
#include <string.h>
#include <camkes.h>
/* #include <sel4/sel4.h> */

void sb_entrypoint_period_destination_thread_impl(int64_t *in_arg) {
  test_data_port_periodic_domains_destination_component_time_triggered((int64_t *) in_arg); 
}

seqNum_t sb_read_port_seqNum;

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
 *  sb_entrypoint_destination_thread_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_destination_thread_impl_initializer(const int64_t * in_arg) {
  test_data_port_periodic_domains_destination_component_init((int64_t *) in_arg);
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_destination_thread_impl_initializer(&sb_dummy);
  }
  tick_emit();
  for(;;) {
    tock_wait();
    { 
      int64_t sb_dummy = 0;
      sb_entrypoint_period_destination_thread_impl(&sb_dummy);
    }
    tick_emit();
  }
  return 0;
}
