// This file will be regenerated, do not edit

#include <sb_emitter_t_impl.h>
#include <sb_queue_int8_t_1.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_emitter_t_impl(int64_t *in_arg) {
  test_event_data_port_emitter_time_triggered_handler((int64_t *) in_arg);
}

bool sb_write_port_enqueue(const int8_t *data) {
  sb_queue_int8_t_1_enqueue(sb_write_port_queue_1, (int8_t*) data);
  //sb_write_port_1_notification_emit();
  sb_write_port_queue_1_emit_underlying();
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
