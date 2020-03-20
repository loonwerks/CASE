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


static void sb_read_port_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_read_port_notification_reg_callback(sb_read_port_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_consumer_t_impl_read_port:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_t_impl_read_port(const int8_t * in_arg) {
  test_event_data_port_consumer_s_event_handler((int8_t *) in_arg);
}

void sb_entrypoint_consumer_t_impl_periodic_dispatcher(const int64_t * in_arg) {
  test_event_data_port_consumer_s_event_handler((int64_t *) in_arg);
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
  test_event_data_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_read_port_notification_reg_callback(sb_read_port_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  int8_t sb_read_port;
  CALLBACKOP(sb_periodic_dispatch_notification_reg_callback(sb_periodic_dispatch_notification_callback, NULL));
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    while (sb_read_port_dequeue((int8_t *) &sb_read_port)) {
      sb_entrypoint_consumer_t_impl_read_port(&sb_read_port);
    }
    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_consumer_t_impl_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}
