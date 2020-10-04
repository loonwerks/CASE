// This file will be regenerated, do not edit

#include <sb_consumer_native_t_impl.h>
#include <sb_queue_int8_t_1.h>
#include <sb_event_counter.h>
#include <string.h>
#include <camkes.h>

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
 * sb_read_port_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_read_port_is_empty(){
  return sb_queue_int8_t_1_is_empty(&sb_read_port_recv_queue);
}

extern int sb_read_port_queue_reg_callback(void (*cb)(void*), void *arg);

/************************************************************************
 * sb_read_port_queue_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_read_port
 *
 ************************************************************************/
static void sb_read_port_queue_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_read_port_queue_reg_callback(sb_read_port_queue_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_consumer_native_t_impl_read_port:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_native_t_impl_read_port(const int8_t * in_arg) {
  test_event_data_port_consumer_event_handler((int8_t *) in_arg);
}


/************************************************************************
 *  sb_entrypoint_consumer_native_t_impl_dst_native_process_dst_thread_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_consumer_native_t_impl_dst_native_process_dst_thread_initializer(const int64_t * in_arg) {
  test_event_data_port_consumer_component_init((int64_t *) in_arg);
}

void pre_init(void) {
  // initialise data structure for incoming event data port read_port
  sb_queue_int8_t_1_Recv_init(&sb_read_port_recv_queue, sb_read_port_queue);
}

void post_init(void) {
  // register callback for EventDataPort port read_port
  CALLBACKOP(sb_read_port_queue_reg_callback(sb_read_port_queue_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  {
    int64_t sb_dummy;
    sb_entrypoint_consumer_native_t_impl_dst_native_process_dst_thread_initializer(&sb_dummy);
  }
  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    {
      int8_t sb_read_port;
      while (sb_read_port_dequeue((int8_t *) &sb_read_port)) {
        sb_entrypoint_consumer_native_t_impl_read_port(&sb_read_port);
      }
    }
  }
  return 0;
}
