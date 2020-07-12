#include <sb_emitter_impl.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_e_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_e_enqueue(void) {
  sb_e0_enqueue();
  return true;
}


/************************************************************************
 *  sb_entrypoint_emitter_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_emitter_impl_initializer(const int64_t * in_arg) {
  test_event_port_emitter_component_init((int64_t *) in_arg);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_emitter_impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
  }
  return 0;
}
