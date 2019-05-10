#include "../includes/sb_publisher_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 *  sb_entrypoint_publisher_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_publisher_impl_initializer(const int64_t * in_arg) {
  testshare_publisher_component_init((int64_t *) in_arg);
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
    sb_entrypoint_publisher_impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
