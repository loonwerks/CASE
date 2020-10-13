// This file will be regenerated, do not edit

#include <sb_source_thread_impl.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_source_thread_impl(int64_t *in_arg) {
  test_data_port_periodic_domains_source_component_time_triggered((int64_t *) in_arg);
}

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const int8_t * value) {
  return write_sp_int8_t(sb_write_port, value, &sb_write_port_seqNum);
}

/************************************************************************
 *  sb_entrypoint_source_thread_impl_source_process_component_source_thread_component_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_source_thread_impl_source_process_component_source_thread_component_initializer(const int64_t * in_arg) {
  test_data_port_periodic_domains_source_component_init((int64_t *) in_arg);
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
    sb_entrypoint_source_thread_impl_source_process_component_source_thread_component_initializer(&sb_dummy);
  }
  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    {
      int64_t sb_dummy = 0;
      sb_entrypoint_period_source_thread_impl(&sb_dummy);
    }
    sb_self_pacer_tick_emit();
  }
  return 0;
}
