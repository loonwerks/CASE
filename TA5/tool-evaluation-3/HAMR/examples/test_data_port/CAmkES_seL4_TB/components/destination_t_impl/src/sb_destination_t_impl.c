#include "../includes/sb_destination_t_impl.h"
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

  }
  return 0;
}
