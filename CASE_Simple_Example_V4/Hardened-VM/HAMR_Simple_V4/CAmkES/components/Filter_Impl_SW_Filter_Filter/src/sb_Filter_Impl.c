// This file will be regenerated, do not edit

#include <sb_Filter_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <Filter_Impl_SW_Filter_Filter_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_Input_recv_queue;

/************************************************************************
 * sb_Input_dequeue_poll:
 ************************************************************************/
bool sb_Input_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_Input_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_Input_dequeue:
 ************************************************************************/
bool sb_Input_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_Input_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_Input_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_Input_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_Input_recv_queue);
}

bool sb_Output_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_Output_queue_1, (union_art_DataContent*) data);
  sb_Output_1_notification_emit();

  return true;
}

// send Output: Out EventDataPort Data_Types__RF_Msg_Impl
Unit HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Output_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_Filter_Impl.c", "", "HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Output_Send", 0);

  sb_Output_enqueue(d);
}

// is_empty Input: In EventDataPort
B HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Input_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Input_is_empty();
}

// receive Input: In EventDataPort union_art_DataContent
Unit HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Input_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_Filter_Impl.c", "", "HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_seL4Nix_Input_Receive", 0);

  union_art_DataContent val;
  if(sb_Input_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_Filter_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of Filter_Impl_SW_Filter_Filter\n");

  // initialise data structure for incoming event data port Input
  sb_queue_union_art_DataContent_1_Recv_init(&sb_Input_recv_queue, sb_Input_queue);

  // initialise data structure for outgoing event data port Output
  sb_queue_union_art_DataContent_1_init(sb_Output_queue_1);

  // initialise slang-embedded components/ports
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of Filter_Impl_SW_Filter_Filter\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_Filter_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    HAMR_Simple_V4_SW_Filter_Impl_SW_Filter_Filter_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
#endif
