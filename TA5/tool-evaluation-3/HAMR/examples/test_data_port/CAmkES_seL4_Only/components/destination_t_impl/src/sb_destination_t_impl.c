#include "../includes/sb_destination_t_impl.h"
#include <string.h>
#include <camkes.h>

seqNum_t sb_read_port_seqNum;

bool sb_read_port_read(int8_t * value) {
  seqNum_t new_seqNum;
  if ( read_sp_int8_t(read_port, value, &new_seqNum) ) {
    sb_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

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
