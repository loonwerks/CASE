#include <sb_consumer_queue_5_impl.h>
#include <sb_queue_int8_t_5.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

sb_queue_int8_t_5_Recv_t sb_deq_recv_queue;

/************************************************************************
 * sb_deq_dequeue_poll:
 ************************************************************************/
bool sb_deq_dequeue_poll(sb_event_counter_t *numDropped, int8_t *data) {
  return sb_queue_int8_t_5_dequeue(&sb_deq_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_deq_dequeue:
 ************************************************************************/
bool sb_deq_dequeue(int8_t *data) {
  sb_event_counter_t numDropped;
  return sb_deq_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_deq_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_deq_is_empty(){
  return sb_queue_int8_t_5_is_empty(&sb_deq_recv_queue);
}

/************************************************************************
 * sb_deq_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_deq
 *
 ************************************************************************/
static void sb_deq_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_deq_notification_reg_callback(sb_deq_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_consumer_queue_5_impl_deq:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_5_impl_deq(const int8_t * in_arg) {
  test_event_data_port_consumer_s_event_handler((int8_t *) in_arg);
}


/************************************************************************
 *  sb_entrypoint_consumer_queue_5_impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_queue_5_impl_initializer(const int64_t * in_arg) {
  test_event_data_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for incoming event data port deq
  sb_queue_int8_t_5_Recv_init(&sb_deq_recv_queue, sb_deq_queue);
}

void post_init(void) {
  // register callback for EventDataPort port deq
  CALLBACKOP(sb_deq_notification_reg_callback(sb_deq_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_queue_5_impl_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      int8_t sb_deq;
      while (sb_deq_dequeue((int8_t *) &sb_deq)) {
        sb_entrypoint_consumer_queue_5_impl_deq(&sb_deq);
      }
    }
  }
  return 0;
}
