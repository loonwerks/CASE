#include "../includes/sb_source_t_impl.h"
#include <string.h>
#include <camkes.h>

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const int8_t * value) {
  return write_sp_int8_t(write_port, value, &sb_write_port_seqNum);
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
  test_data_port_source_component_init((int64_t *) in_arg);
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

  }
  return 0;
}
