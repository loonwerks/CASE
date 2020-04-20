#include "../includes/sb_consumer_queue_5_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_s_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback that  
 * dispatches the active-thread due to the arrival of an event on 
 * its s event port
 *
 ************************************************************************/
static void sb_s_handler(void *_ UNUSED){
  MUTEXOP(sb_dispatch_sem_post());
  CALLBACKOP(sb_s_notification_reg_callback(sb_s_handler, NULL));
}

/************************************************************************
 *  sb_entrypoint_consumer_queue_5_impl_s
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_5_impl_s(void){
  test_event_port_consumer_s_event_handler();
}

/************************************************************************
 *  sb_entrypoint_consumer_queue_5_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_5_impl_initializer(const int64_t * in_arg) {
  test_event_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_s_notification_reg_callback(sb_s_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_queue_5_impl_initializer(&sb_dummy);
  }
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    while(sb_s_dequeue()){
      sb_entrypoint_consumer_queue_5_impl_s();
    }
  }
  return 0;
}
