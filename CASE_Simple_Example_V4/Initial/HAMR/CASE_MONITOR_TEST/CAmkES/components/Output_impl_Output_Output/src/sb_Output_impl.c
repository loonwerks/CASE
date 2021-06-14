// This file will be regenerated, do not edit

#include <sb_Output_impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <Output_impl_Output_Output_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_Suspect_Traffic_Out_recv_queue;

/************************************************************************
 * sb_Suspect_Traffic_Out_dequeue_poll:
 ************************************************************************/
bool sb_Suspect_Traffic_Out_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_Suspect_Traffic_Out_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_Suspect_Traffic_Out_dequeue:
 ************************************************************************/
bool sb_Suspect_Traffic_Out_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_Suspect_Traffic_Out_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_Suspect_Traffic_Out_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_Suspect_Traffic_Out_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_Suspect_Traffic_Out_recv_queue);
}

// is_empty Suspect_Traffic_Out: In EventDataPort
B CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_seL4Nix_Suspect_Traffic_Out_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Suspect_Traffic_Out_is_empty();
}

// receive Suspect_Traffic_Out: In EventDataPort union_art_DataContent
Unit CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_seL4Nix_Suspect_Traffic_Out_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_Output_impl.c", "", "CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_seL4Nix_Suspect_Traffic_Out_Receive", 0);

  union_art_DataContent val;
  if(sb_Suspect_Traffic_Out_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_Output_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of Output_impl_Output_Output\n");

  // initialise data structure for incoming event data port Suspect_Traffic_Out
  sb_queue_union_art_DataContent_1_Recv_init(&sb_Suspect_Traffic_Out_recv_queue, sb_Suspect_Traffic_Out_queue);

  // initialise slang-embedded components/ports
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of Output_impl_Output_Output\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_Output_impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    CASE_MONITOR_TEST_VPM_TEST_Output_impl_Output_Output_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
