#include "../includes/sb_source_t_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_enq_write:
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
bool sb_enq_write(const int8_t * sb_enq){
  bool sb_result = true;
  sb_result &= sb_enq0_write((int8_t *) sb_enq);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_source_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_source_t_impl_initializer(const int64_t * in_arg) {
  testdpmon_source_component_init((int64_t *) in_arg);
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_source_t_impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
