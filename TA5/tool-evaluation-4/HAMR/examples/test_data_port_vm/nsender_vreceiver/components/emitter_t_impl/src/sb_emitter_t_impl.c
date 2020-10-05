// This file will be regenerated, do not edit

#include <camkes.h>
#include <string.h>
#include <sp_int8_t.h>
#include <sb_emitter_t_impl.h>

seqNum_t sb_write_port_seqNum;

void sb_entrypoint_period_emitter_t_impl(int64_t *in_arg) {
  test_data_port_emitter_time_triggered_handler((int64_t *) in_arg);
}

bool sb_write_port_write(const int8_t *data) {
  return write_sp_int8_t(sb_write_port_1, data, &sb_write_port_seqNum);
  sb_write_port_queue_1_emit_underlying();
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
  test_data_port_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for data port write_port
  init_sp_int8_t(sb_write_port_1, &sb_write_port_seqNum);
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
