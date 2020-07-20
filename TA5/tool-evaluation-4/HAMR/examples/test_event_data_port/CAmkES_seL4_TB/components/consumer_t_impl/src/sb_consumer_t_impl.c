// This file will be regenerated, do not edit

#include <sb_consumer_t_impl.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_deq_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * deq
 *
 ************************************************************************/
static void sb_deq_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_deq_notification_reg_callback(sb_deq_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_consumer_t_impl_deq:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_t_impl_deq(const int8_t * in_arg) {
  test_event_data_port_consumer_s_event_handler((int8_t *) in_arg);
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

void post_init(void) {
  // register callback for EventDataPort port deq
  CALLBACKOP(sb_deq_notification_reg_callback(sb_deq_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  int8_t sb_deq;
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    while (sb_deq_dequeue((int8_t *) &sb_deq)) {
      sb_entrypoint_consumer_t_impl_deq(&sb_deq);
    }
  }
  return 0;
}
