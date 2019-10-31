#include "../includes/sb_destination_t_impl.h"
#include <string.h>
#include <camkes.h>

seqNum_t sb_deq_seqNum;

bool sb_deq_read(int8_t * value) {
  bool isFresh;
  return sb_deq_read_isFresh(value, &isFresh);
}

bool sb_deq_read_isFresh(int8_t * value, bool * isFresh) {

  seqNum_t new_seqNum;

  if ( read_sp_int8_t(deq, value, &new_seqNum) ) {
    *isFresh = sb_deq_seqNum < new_seqNum;
    sb_deq_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

/************************************************************************
 *  sb_entrypoint_destination_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_destination_t_impl_initializer(const int64_t * in_arg) {
  testdpmon_destination_component_init((int64_t *) in_arg);
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
    sb_entrypoint_destination_t_impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

  }
  return 0;
}
