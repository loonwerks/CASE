#include "../includes/sb_destination_t_impl.h"
#include <string.h>
#include <camkes.h>

static bool sb_occurred_periodic_dispatcher;
static int64_t sb_time_periodic_dispatcher;

/************************************************************************
 * periodic_dispatcher_write_int64_t
 * Invoked from remote periodic dispatch thread.
 *
 * This function records the current time and triggers the active thread
 * dispatch from a periodic event.  Note that the periodic dispatch
 * thread is the *only* thread that triggers a dispatch, so we do not
 * mutex lock the function.
 *
 ************************************************************************/

bool periodic_dispatcher_write_int64_t(const int64_t * arg) {
    sb_occurred_periodic_dispatcher = true;
    sb_time_periodic_dispatcher = *arg;
    MUTEXOP(sb_dispatch_sem_post());
    return true;
}

void sb_timer_complete_callback(void *_ UNUSED) {
   // we want time in microseconds, not nanoseconds, so we divide by 1000.
   int64_t sb_time_periodic_dispatcher = sb_timer_time() / 1000LL;
   (void)periodic_dispatcher_write_int64_t(&sb_time_periodic_dispatcher);
   CALLBACKOP(sb_timer_complete_reg_callback(sb_timer_complete_callback, NULL));
}


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

void sb_entrypoint_destination_t_impl_periodic_dispatcher(const int64_t * in_arg) {
  test_data_port_periodic_destination_component_time_triggered((int64_t *) in_arg);
}

void pre_init(void) {
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CALLBACKOP(sb_timer_complete_reg_callback(sb_timer_complete_callback, NULL));
  // Initial lock to await dispatch input.
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    if(sb_occurred_periodic_dispatcher){
      sb_occurred_periodic_dispatcher = false;
      sb_entrypoint_destination_t_impl_periodic_dispatcher(&sb_time_periodic_dispatcher);
    }
  }
  return 0;
}
