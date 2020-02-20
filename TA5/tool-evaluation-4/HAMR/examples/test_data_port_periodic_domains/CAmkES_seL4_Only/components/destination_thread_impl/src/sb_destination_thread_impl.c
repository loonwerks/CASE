#include "../includes/sb_destination_thread_impl.h"
#include <string.h>
#include <camkes.h>

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
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  sb_periodic_dispatch_notification_wait(); // wait for trigger, even to init
  {
    int64_t sb_dummy;
    test_data_port_periodic_domains_destination_component_init(&sb_dummy);
  }

  int64_t arg_dummy=0;
  for(;;) {
    sb_periodic_dispatch_notification_wait();
    test_data_port_periodic_domains_destination_component_time_triggered(&arg_dummy);
  }
  return 0;
}
