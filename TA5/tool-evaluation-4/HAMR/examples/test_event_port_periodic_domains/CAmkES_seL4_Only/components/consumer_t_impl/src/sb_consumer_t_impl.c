// This file will be regenerated, do not edit

#include <sb_consumer_t_impl.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_consumer_t_impl(int64_t *in_arg) {
  test_event_port_consumer_time_triggered_handler((int64_t *) in_arg);
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     consume
 *
 ************************************************************************/
static sb_event_counter_t sb_consume_received_events = 0;
static sb_event_counter_t sb_consume_last_counter = 0;

/************************************************************************
 * sb_consume_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_consume_dequeue() {
  if(sb_consume_received_events > 0) {
    sb_consume_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_consume_is_empty;
 *
 * Helper method to determine if infrastructure port has received
 * new events
 *
 ************************************************************************/
bool sb_consume_is_empty() {
  return *sb_consume_counter == sb_consume_last_counter;
}

void sb_freeze_event_port_consume() {
  sb_event_counter_t current_sb_consume_counter;

  sb_consume_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_consume_counter = *sb_consume_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_consume_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_consume_counter != sb_consume_last_counter){
    sb_consume_last_counter++;
    sb_consume_received_events++;
  }

  if(sb_consume_received_events > 0) {

    // consume's queue size is 1
    if(sb_consume_received_events > 1) {
      //printf("consumer_t_impl: dropping %i event(s) from incoming event port consume\n", (sb_consume_received_events - 1));

      // drop events
      sb_consume_received_events = 1;
    }
  }
}

/************************************************************************
 *  sb_entrypoint_consumer_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_t_impl_initializer(const int64_t * in_arg) {
  test_event_port_consumer_component_init((int64_t *) in_arg);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    sb_freeze_event_port_consume();
    {
      int64_t sb_dummy = 0;
      sb_entrypoint_period_consumer_t_impl(&sb_dummy);
    }
    sb_self_pacer_tick_emit();
  }
  return 0;
}
