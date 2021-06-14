// This file will be regenerated, do not edit

#include <sb_CASE_Monitor2_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_Observed_recv_queue;

/************************************************************************
 * sb_Observed_dequeue_poll:
 ************************************************************************/
bool sb_Observed_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_Observed_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_Observed_dequeue:
 ************************************************************************/
bool sb_Observed_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_Observed_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_Observed_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_Observed_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_Observed_recv_queue);
}

bool sb_Suspect_Traffic_Out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_Suspect_Traffic_Out_queue_1, (union_art_DataContent*) data);
  sb_Suspect_Traffic_Out_1_notification_emit();

  return true;
}

// send Suspect_Traffic_Out: Out EventDataPort ADSB_Types__MonitorReport_impl
Unit CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix_Suspect_Traffic_Out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor2_Impl.c", "", "CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix_Suspect_Traffic_Out_Send", 0);

  sb_Suspect_Traffic_Out_enqueue(d);
}

// is_empty Observed: In EventDataPort
B CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix_Observed_IsEmpty(STACK_FRAME_ONLY) {
  return sb_Observed_is_empty();
}

// receive Observed: In EventDataPort union_art_DataContent
Unit CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix_Observed_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor2_Impl.c", "", "CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_seL4Nix_Observed_Receive", 0);

  union_art_DataContent val;
  if(sb_Observed_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_CASE_Monitor2_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2\n");

  // initialise data structure for incoming event data port Observed
  sb_queue_union_art_DataContent_1_Recv_init(&sb_Observed_recv_queue, sb_Observed_queue);

  // initialise data structure for outgoing event data port Suspect_Traffic_Out
  sb_queue_union_art_DataContent_1_init(sb_Suspect_Traffic_Out_queue_1);

  // initialise slang-embedded components/ports
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_CASE_Monitor2_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
#endif
