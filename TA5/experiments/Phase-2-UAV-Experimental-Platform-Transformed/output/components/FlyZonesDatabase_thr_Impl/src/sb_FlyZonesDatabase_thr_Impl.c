#include "../includes/sb_FlyZonesDatabase_thr_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 *  sb_entrypoint_FlyZonesDatabase_thr_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_FlyZonesDatabase_thr_Impl_initializer(const int64_t * in_arg) {
  initialize_fzdb((int64_t *) in_arg);
}



/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    int64_t sb_dummy;
    sb_entrypoint_FlyZonesDatabase_thr_Impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

  }
  return 0;
}
