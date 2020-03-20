#include "../includes/sb_consumer_t_impl.h"
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


/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     consume
 *
 ************************************************************************/
static int32_t sb_consume_index = 0;

/************************************************************************
 * sb_consume_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback that  
 * dispatches the active-thread due to the arrival of an event on 
 * its consume event port
 *
 ************************************************************************/
static void sb_consume_handler(void *_ UNUSED){
  MUTEXOP(sb_dispatch_sem_post());
  CALLBACKOP(sb_consume_notification_reg_callback(sb_consume_handler, NULL));
}

/************************************************************************
 * sb_consume_read:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_consume_read(){
  if(sb_consume_index > 0) {
    sb_consume_index--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 *  sb_entrypointsb_consumer_t_impl_consume
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_consumer_t_impl_consume(void){
  test_event_port_consumer_s_event_handler();
}

void sb_entrypoint_consumer_t_impl_periodic_dispatcher(const int64_t * in_arg) {
  test_data_port_periodic_domains_destination_component_time_triggered((int64_t *) in_arg);
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

void pre_init(void) {
  CALLBACKOP(sb_consume_notification_reg_callback(sb_consume_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    sb_consume_index = sb_consume_get_events();
    if(sb_consume_index > 0){
      sb_entrypointsb_consumer_t_impl_consume();
    }
    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_consumer_t_impl_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}
