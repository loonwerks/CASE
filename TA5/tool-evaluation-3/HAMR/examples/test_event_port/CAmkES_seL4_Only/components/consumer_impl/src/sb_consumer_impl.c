#include "../includes/sb_consumer_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     s
 *
 ************************************************************************/
static int32_t sb_s_current_events = 0;
static int32_t sb_s_last_counter = 0;


/************************************************************************
 * sb_s_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by a seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * s
 *
 ************************************************************************/
static void sb_s_handler(void *_ UNUSED){
  MUTEXOP(sb_dispatch_sem_post());
  CALLBACKOP(sb_s_reg_callback(sb_s_handler, NULL));
}

/************************************************************************
 * sb_consumer_impl_read_s:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_consumer_impl_read_s() {
  if(sb_s_current_events > 0) {
    sb_s_current_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 *  sb_entrypoint_consumer_impl_s
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_impl_s(void){
  test_event_port_consumer_s_event_handler();
}


/************************************************************************
 *  sb_entrypoint_consumer_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_impl_initializer(const int64_t * in_arg) {
  test_event_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_s_reg_callback(sb_s_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  int32_t sb_s_current_counter;
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    sb_s_current_counter = *sb_s_counter;
    if(sb_s_last_counter < sb_s_current_counter) {
      sb_s_current_events = sb_s_current_counter - sb_s_last_counter;
      if(sb_s_current_events > 1) {
        // drop events
        sb_s_current_events = 1;
      }
      sb_s_last_counter = sb_s_current_counter;
      sb_entrypoint_consumer_impl_s();
    }
  }
  return 0;
}
