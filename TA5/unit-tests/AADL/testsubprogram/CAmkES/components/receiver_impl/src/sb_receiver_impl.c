#include "../includes/sb_receiver_impl.h"
#include <string.h>
#include <camkes.h>


void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // Drain the queues
  }
  return 0;
}
