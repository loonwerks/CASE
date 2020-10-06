// This file will be regenerated, do not edit

#include <sb_emitter_impl.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

static bool sb_occurred_periodic_dispatcher;
static int64_t sb_time_periodic_dispatcher;

/************************************************************************
 * periodic_dispatcher_write_int64_t
 * Invoked from remote periodic dispatch thread.
 *
 * This function records the current time and triggers the active thread
 * dispatch from a periodic event.  Note that the periodic dispatch
 * thread is the *only* thread that triggers a dispatch, so we do not
 * mutex lock the function.
 *
 ************************************************************************/

bool periodic_dispatcher_write_int64_t(const int64_t * arg) {
    sb_occurred_periodic_dispatcher = true;
    sb_time_periodic_dispatcher = *arg;
    MUTEXOP(sb_dispatch_sem_post());
    return true;
}

void sb_periodic_dispatch_notification_callback(void *_ UNUSED) {
   // we want time in microseconds, not nanoseconds, so we divide by 1000.
   int64_t sb_time_periodic_dispatcher = 0; // sb_timer_time() / 1000LL -- timer connection disabled;
   (void)periodic_dispatcher_write_int64_t(&sb_time_periodic_dispatcher);
   CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
}


void sb_entrypoint_emitter_impl_periodic_dispatcher(const int64_t * in_arg) {
  run_emitter((int64_t *) in_arg);
}

/************************************************************************
 * sb_e_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_e_enqueue(void) {
  // sb_e_counter is a dataport (shared memory) that is written by the sender
  // and read by the receiver(s). This counter is monotonicly increasing,
  // but can wrap.
  (*sb_e_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_e_counter_release();

  sb_e_emit();

  return true;
}


/************************************************************************
 *  sb_entrypoint_emitter_impl_test_event_port_src_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_emitter_impl_test_event_port_src_initializer(const int64_t * in_arg) {
  test_event_port_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise shared counter for event port e
  *sb_e_counter = 0;
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
  {
    int64_t sb_dummy;
    sb_entrypoint_emitter_impl_test_event_port_src_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_emitter_impl_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}
