#include "../includes/sb_RadioDriver_Impl.h"
#include <sb_queue_SW__Command_Impl_1.h>
#include <string.h>
#include <camkes.h>

bool sb_recv_map_out_enqueue(const SW__Command_Impl *data) {
  sb_queue_SW__Command_Impl_1_enqueue(sb_recv_map_out_queue_1, (SW__Command_Impl*) data);
  sb_recv_map_out_1_notification_emit();

  return true;
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


void post_init(void){
  sb_queue_SW__Command_Impl_1_init(sb_recv_map_out_queue_1);
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

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

  }
  return 0;
}
