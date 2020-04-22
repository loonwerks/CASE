#include "../includes/sb_source_thread_impl.h"
#include <string.h>
#include <camkes.h>

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const int8_t * value) {
  return write_sp_int8_t(sb_write_port, value, &sb_write_port_seqNum);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  sb_periodic_dispatch_notification_wait(); // wait for trigger, even to init
  {
    int64_t sb_dummy=0;
    test_data_port_periodic_domains_source_component_init(&sb_dummy);
  }

  int64_t arg_dummy=0;
  for(;;) {
    sb_periodic_dispatch_notification_wait();
    test_data_port_periodic_domains_source_component_time_triggered(&arg_dummy);
  }
  return 0;
}
