#include "../includes/tb_emitter_t_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_enq_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool tb_enq_enqueue(const int8_t * tb_enq){
  bool tb_result = true;
  tb_result &= tb_enq0_enqueue((int8_t *) tb_enq);
  return tb_result;
}

/************************************************************************
 *  tb_entrypoint_emitter_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_emitter_t_impl_initializer(const int64_t * in_arg) {
  testepmon_emitter_component_init((int64_t *) in_arg);
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t tb_dummy;
    tb_entrypoint_emitter_t_impl_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
