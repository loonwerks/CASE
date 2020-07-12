#include <sb_consumer_queue_default_impl.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     s
 *
 ************************************************************************/
static sb_event_counter_t sb_s_received_events = 0;
static sb_event_counter_t sb_s_last_counter = 0;

/************************************************************************
 * sb_s_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_s_dequeue() {
  if(sb_s_received_events > 0) {
    sb_s_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_s_is_empty;
 *
 * Helper method to determine if infrastructure port has received
 * new events
 *
 ************************************************************************/
bool sb_s_is_empty() {
  return *sb_s_counter == sb_s_last_counter;
}

void sb_freeze_event_port_s() {
  sb_event_counter_t current_sb_s_counter;

  sb_s_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_s_counter = *sb_s_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_s_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_s_counter != sb_s_last_counter){
    sb_s_last_counter++;
    sb_s_received_events++;
  }

  if(sb_s_received_events > 0) {

    // s's queue size is 1
    if(sb_s_received_events > 1) {
      //printf("consumer_queue_default_impl: dropping %i event(s) from incoming event port s\n", (sb_s_received_events - 1));

      // drop events
      sb_s_received_events = 1;
    }
  }
}

/************************************************************************
 * sb_s_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * s
 *
 ************************************************************************/
static void sb_s_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_s_reg_callback(sb_s_handler, NULL));
}


/************************************************************************
 *  sb_entrypoint_consumer_queue_default_impl_s
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_default_impl_s(void){
  test_event_port_consumer_s_event_handler();
}

/************************************************************************
 *  sb_entrypoint_consumer_queue_default_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_default_impl_initializer(const int64_t * in_arg) {
  test_event_port_consumer_component_init((int64_t *) in_arg);
}

void post_init(void) {
  // register callback for EventPort port s
  CALLBACKOP(sb_s_reg_callback(sb_s_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_queue_default_impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    sb_freeze_event_port_s();

    {
      if(sb_s_received_events > 0) {
        // dequeue one event and call the event handler
        sb_s_dequeue();
        sb_entrypoint_consumer_queue_default_impl_s();
      }
    }
  }
  return 0;
}
