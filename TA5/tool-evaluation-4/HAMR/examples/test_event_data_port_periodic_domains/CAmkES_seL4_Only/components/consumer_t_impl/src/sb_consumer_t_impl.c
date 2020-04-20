#include "../includes/sb_consumer_t_impl.h"
#include <sb_queue_int8_t_1.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

void sb_entrypoint_period_consumer_t_impl(int64_t *in_arg) {
  test_event_data_port_consumer_time_triggered_handler((int64_t *) in_arg); 
}

sb_queue_int8_t_1_Recv_t sb_read_port_recv_queue;

/************************************************************************
 * sb_read_port_dequeue_poll:
 ************************************************************************/
bool sb_read_port_dequeue_poll(sb_event_counter_t *numDropped, int8_t *data) {
  return sb_queue_int8_t_1_dequeue(&sb_read_port_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_read_port_dequeue:
 ************************************************************************/
bool sb_read_port_dequeue(int8_t *data) {
  sb_event_counter_t numDropped;
  return sb_read_port_dequeue_poll(&numDropped, data);
}

/************************************************************************
 *  sb_entrypoint_consumer_t_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_t_impl_initializer(const int64_t * in_arg) {
  test_event_data_port_consumer_component_init((int64_t *) in_arg);
}

void post_init(void){
  sb_queue_int8_t_1_Recv_init(&sb_read_port_recv_queue, sb_read_port_queue);
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  sb_pacer_notification_wait();
  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_t_impl_initializer(&sb_dummy);
  }
  for(;;) {
    sb_pacer_notification_wait();
    { 
      int64_t sb_dummy = 0;
      sb_entrypoint_period_consumer_t_impl(&sb_dummy);
    }
  }
  return 0;
}
