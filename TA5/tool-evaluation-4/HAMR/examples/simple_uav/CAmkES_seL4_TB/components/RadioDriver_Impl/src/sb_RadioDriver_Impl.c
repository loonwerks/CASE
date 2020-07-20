// This file will be regenerated, do not edit

#include <sb_RadioDriver_Impl.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_recv_map_out_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote event data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_recv_map_out_enqueue(const SW__Command_Impl * sb_recv_map_out){
  bool sb_result = true;
  sb_result &= sb_recv_map_out0_enqueue((SW__Command_Impl *) sb_recv_map_out);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_RadioDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_initializer(const int64_t * in_arg) {
  init((int64_t *) in_arg);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_RadioDriver_Impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
  }
  return 0;
}
