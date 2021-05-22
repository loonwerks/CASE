// This file will be regenerated, do not edit

#include <sb_consumer_t_i.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <consumer_t_i_consumer_consumer_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_read_port_recv_queue;

/************************************************************************
 * sb_read_port_dequeue_poll:
 ************************************************************************/
bool sb_read_port_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_read_port_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_read_port_dequeue:
 ************************************************************************/
bool sb_read_port_dequeue(union_art_DataContent *data) {
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
  return sb_queue_union_art_DataContent_1_is_empty(&sb_read_port_recv_queue);
}

/************************************************************************
 * sb_read_port_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_read_port
 *
 ************************************************************************/
static void sb_read_port_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_read_port_notification_reg_callback(sb_read_port_notification_handler, NULL));
}

// is_empty read_port: In EventDataPort
B base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_seL4Nix_read_port_IsEmpty(STACK_FRAME_ONLY) {
  return sb_read_port_is_empty();
}

// receive read_port: In EventDataPort union_art_DataContent
Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_seL4Nix_read_port_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_consumer_t_i.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_seL4Nix_read_port_Receive", 0);

  union_art_DataContent val;
  if(sb_read_port_dequeue((union_art_DataContent *) &val)) {
    // wrap payload in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &val);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
}


void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_consumer_t_i.c", "", "pre_init", 0);

  printf("Entering pre-init of consumer_t_i_consumer_consumer\n");

  // initialise data structure for incoming event data port read_port
  sb_queue_union_art_DataContent_1_Recv_init(&sb_read_port_recv_queue, sb_read_port_queue);

  // initialise slang-embedded components/ports
  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of consumer_t_i_consumer_consumer\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_consumer_t_i.c", "", "post_init", 0);

  // register callback for EventDataPort port read_port
  CALLBACKOP(sb_read_port_notification_reg_callback(sb_read_port_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_consumer_t_i.c", "", "run", 0);

  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
