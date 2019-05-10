#include "../includes/sb_consumer_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     s
 *
 ************************************************************************/
static bool sb_s_index = false;

/************************************************************************
 * sb_s_handler:
 * Invoked by: remote RPC
 *
 * This is the function invoked by a remote RPC to write to an active-thread
 * input event port.  It increments a count of received messages.
 *
 ************************************************************************/
static void sb_s_handler(void *_ UNUSED){
  sb_s_index = true;
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
bool sb_consumer_impl_read_s(){
  bool result;
  result = sb_s_index;
  sb_s_index = false;
  return result;
}

/************************************************************************
 *  sb_entrypointsb_consumer_impl_s
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_consumer_impl_s(void){
  testevent_consumer_s_event_handler();
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
  testevent_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_s_reg_callback(sb_s_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
    if(sb_consumer_impl_read_s()){
      sb_entrypointsb_consumer_impl_s();
    }
  }
  return 0;
}
