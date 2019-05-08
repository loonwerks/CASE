#include "../includes/tb_consumer_t_impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * tb_entrypoint_tb_consumer_t_impl_deq:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_tb_consumer_t_impl_deq(const int8_t * in_arg) {

}

/************************************************************************
 *  tb_entrypoint_consumer_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void tb_entrypoint_consumer_t_impl_initializer(const int64_t * in_arg) {
  testepmon_consumer_component_init((int64_t *) in_arg);
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
    tb_entrypoint_consumer_t_impl_initializer(&tb_dummy);
  }
  // Initial lock to await dispatch input.
  MUTEXOP(tb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(tb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
