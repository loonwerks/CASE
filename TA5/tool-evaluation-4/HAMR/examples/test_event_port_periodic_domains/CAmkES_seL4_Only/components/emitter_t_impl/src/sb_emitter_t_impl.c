#include <sb_emitter_t_impl.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_emitter_t_impl(int64_t *in_arg) {
  run_emitter((int64_t *) in_arg); 
}

/************************************************************************
 * sb_emit_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_emit_enqueue(void) {
  // sb_emit_counter is a dataport (shared memory) that is written by the sender 
  // and read by the receiver(s). This counter is monotonicly increasing, 
  // but can wrap.
  (*sb_emit_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_emit_counter_release();

  sb_emit_emit();

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
  test_event_port_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise shared counter for event port emit
  *sb_emit_counter = 0;
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  sb_pacer_notification_wait();
  {
    int64_t sb_dummy;
    sb_entrypoint_emitter_t_impl_initializer(&sb_dummy);
  }
  for(;;) {
    sb_pacer_notification_wait();

    { 
      int64_t sb_dummy = 0;
      sb_entrypoint_period_emitter_t_impl(&sb_dummy);
    }
  }
  return 0;
}
