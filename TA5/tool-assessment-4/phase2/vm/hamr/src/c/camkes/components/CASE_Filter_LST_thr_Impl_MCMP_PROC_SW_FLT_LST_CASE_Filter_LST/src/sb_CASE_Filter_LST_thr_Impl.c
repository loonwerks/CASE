// This file will be regenerated, do not edit

#include <sb_CASE_Filter_LST_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_filter_in_recv_queue;

/************************************************************************
 * sb_filter_in_dequeue_poll:
 ************************************************************************/
bool sb_filter_in_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_filter_in_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_filter_in_dequeue:
 ************************************************************************/
bool sb_filter_in_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_filter_in_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_filter_in_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_filter_in_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_filter_in_recv_queue);
}

bool sb_filter_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_filter_out_queue_1, (union_art_DataContent*) data);
  sb_filter_out_1_notification_emit();

  return true;
}

// send filter_out: Out EventDataPort CMASI__LineSearchTask_i
Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix_filter_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_Filter_LST_thr_Impl.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix_filter_out_Send", 0);

  sb_filter_out_enqueue(d);
}

// is_empty filter_in: In EventDataPort
B hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix_filter_in_IsEmpty(STACK_FRAME_ONLY) {
  return sb_filter_in_is_empty();
}

// receive filter_in: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix_filter_in_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_Filter_LST_thr_Impl.c", "", "hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_seL4Nix_filter_in_Receive", 0);

  union_art_DataContent val;
  if(sb_filter_in_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_CASE_Filter_LST_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST\n");

  // initialise data structure for incoming event data port filter_in
  sb_queue_union_art_DataContent_1_Recv_init(&sb_filter_in_recv_queue, sb_filter_in_queue);

  // initialise data structure for outgoing event data port filter_out
  sb_queue_union_art_DataContent_1_init(sb_filter_out_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_CASE_Filter_LST_thr_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
#endif
