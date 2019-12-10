#include "../includes/sb_emitter_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_emitter_impl_write_e
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 ************************************************************************/
bool sb_emitter_impl_write_e(void) {
  bool sb_result = true;
  sb_e_emit();
  return sb_result;
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

void pre_init(void) {
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

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

  }
  return 0;
}
