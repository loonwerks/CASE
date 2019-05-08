#include "../includes/tb_consumer_impl.h"
#include <string.h>
#include <camkes.h>

static void tb_s_notification_handler(void * unused) {
  MUTEXOP(tb_dispatch_sem_post())
  CALLBACKOP(tb_s_notification_reg_callback(tb_s_notification_handler, NULL));
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     s
 *
 ************************************************************************/
static bool s_index = false;

/************************************************************************
 * s_callback:
 * Invoked by: remote RPC
 *
 * This is the function invoked by a remote RPC to write to an active-thread
 * input event port.  It increments a count of received messages.
 *
 ************************************************************************/
bool s_callback(void *_ UNUSED){
  s_index = true;
  //CALLBACK(s_reg_callback(s_callback, NULL));
  return true;
}

/************************************************************************
 * tb_consumer_impl_read_s:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool tb_consumer_impl_read_s(){
  bool result;
  result = s_index;
  s_index = false;
  return result;
}


/************************************************************************
 *  tb_entrypoint_consumer_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_consumer_impl_initializer(const int64_t * in_arg) {
  testevent_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(tb_s_notification_reg_callback(tb_s_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t tb_dummy;
    tb_entrypoint_consumer_impl_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
