// This file will be regenerated, do not edit

#include <sb_filter_t.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <filter_t_filter_filter_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_from_producer_recv_queue;

/************************************************************************
 * sb_from_producer_dequeue_poll:
 ************************************************************************/
bool sb_from_producer_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_from_producer_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_from_producer_dequeue:
 ************************************************************************/
bool sb_from_producer_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_from_producer_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_from_producer_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_from_producer_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_from_producer_recv_queue);
}

bool sb_to_consumer_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_to_consumer_queue_1, (union_art_DataContent*) data);
  sb_to_consumer_1_notification_emit();

  return true;
}

// send to_consumer: Out EventDataPort PFC__Mission
Unit pfc_PFC_filter_t_filter_filter_seL4Nix_to_consumer_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_filter_t.c", "", "pfc_PFC_filter_t_filter_filter_seL4Nix_to_consumer_Send", 0);

  sb_to_consumer_enqueue(d);
}

// is_empty from_producer: In EventDataPort
B pfc_PFC_filter_t_filter_filter_seL4Nix_from_producer_IsEmpty(STACK_FRAME_ONLY) {
  return sb_from_producer_is_empty();
}

// receive from_producer: In EventDataPort union_art_DataContent
Unit pfc_PFC_filter_t_filter_filter_seL4Nix_from_producer_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_filter_t.c", "", "pfc_PFC_filter_t_filter_filter_seL4Nix_from_producer_Receive", 0);

  union_art_DataContent val;
  if(sb_from_producer_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_filter_t.c", "", "pre_init", 0);

  printf("Entering pre-init of filter_t_filter_filter\n");

  // initialise data structure for incoming event data port from_producer
  sb_queue_union_art_DataContent_1_Recv_init(&sb_from_producer_recv_queue, sb_from_producer_queue);

  // initialise data structure for outgoing event data port to_consumer
  sb_queue_union_art_DataContent_1_init(sb_to_consumer_queue_1);

  // initialise slang-embedded components/ports
  pfc_PFC_filter_t_filter_filter_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  pfc_PFC_filter_t_filter_filter_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of filter_t_filter_filter\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_filter_t.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    pfc_PFC_filter_t_filter_filter_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
