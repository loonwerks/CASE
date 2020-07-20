// This file will be regenerated, do not edit

#include <sb_emitter_t_impl.h>
#include <sb_queue_int8_t_1.h>
#include <string.h>
#include <camkes.h>

bool sb_enq_enqueue(const int8_t *data) {
  sb_queue_int8_t_1_enqueue(sb_enq_queue_1, (int8_t*) data);
  sb_enq_1_notification_emit();

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
  // initialise data structure for outgoing event data port enq
  sb_queue_int8_t_1_init(sb_enq_queue_1);
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
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
  }
  return 0;
}
