#include "../includes/sb_RadioDriver_Impl.h"
#include <string.h>
#include <camkes.h>

// [2019/09/20:JCC]
// Sequence numbers for our sampling ports. Only functions in the sampling
// port interface should modify this.
seqNum_t recv_map_out_seqNum = 0;

/************************************************************************
 * sb_recv_map_out_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_recv_map_out_enqueue(const SW__Command_Impl * sb_recv_map_out){
  bool sb_result = true;
  // [2019/09/20:JCC] Use a samping port instead
  //sb_result &= sb_recv_map_out0_enqueue((SW__Command_Impl *) sb_recv_map_out);
  write_sp_Command(recv_map_out, sb_recv_map_out, &recv_map_out_seqNum);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_RadioDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_initializer(const uintmax_t * in_arg) {
  init((uintmax_t *) in_arg);
}

void pre_init(void) {
  // [2019/09/20:JCC] Initialize sampling ports
  init_sp_Command(recv_map_out, &recv_map_out_seqNum);
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  {
    uintmax_t sb_dummy;
    sb_entrypoint_RadioDriver_Impl_initializer(&sb_dummy);
  }

  // [2019/09/20:JCC] Just used for output
  int tickCount = 0;

  for(;;) {

    // [2019/09/20:JCC] Changed to be periodic instead of sporadic
    //MUTEXOP(sb_dispatch_sem_wait())
    period_wait();
    printf("%s: Period tick %d\n", get_instance_name(), ++tickCount);
      
    // Drain the queues
  }
  return 0;
}
