// This file will be regenerated, do not edit

#include <sb_CASE_AttestationGate_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_trusted_ids_recv_queue;

/************************************************************************
 * sb_trusted_ids_dequeue_poll:
 ************************************************************************/
bool sb_trusted_ids_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_trusted_ids_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_trusted_ids_dequeue:
 ************************************************************************/
bool sb_trusted_ids_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_trusted_ids_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_trusted_ids_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_trusted_ids_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_trusted_ids_recv_queue);
}

sb_queue_union_art_DataContent_1_Recv_t sb_AutomationRequest_in_recv_queue;

/************************************************************************
 * sb_AutomationRequest_in_dequeue_poll:
 ************************************************************************/
bool sb_AutomationRequest_in_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AutomationRequest_in_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AutomationRequest_in_dequeue:
 ************************************************************************/
bool sb_AutomationRequest_in_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AutomationRequest_in_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AutomationRequest_in_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AutomationRequest_in_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AutomationRequest_in_recv_queue);
}

bool sb_AutomationRequest_out_UXAS_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AutomationRequest_out_UXAS_queue_1, (union_art_DataContent*) data);
  sb_AutomationRequest_out_UXAS_1_notification_emit();

  return true;
}

bool sb_AutomationRequest_out_MON_REQ_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AutomationRequest_out_MON_REQ_queue_1, (union_art_DataContent*) data);
  sb_AutomationRequest_out_MON_REQ_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_OperatingRegion_in_recv_queue;

/************************************************************************
 * sb_OperatingRegion_in_dequeue_poll:
 ************************************************************************/
bool sb_OperatingRegion_in_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_OperatingRegion_in_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_OperatingRegion_in_dequeue:
 ************************************************************************/
bool sb_OperatingRegion_in_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_OperatingRegion_in_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_OperatingRegion_in_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_OperatingRegion_in_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_OperatingRegion_in_recv_queue);
}

bool sb_OperatingRegion_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_OperatingRegion_out_queue_1, (union_art_DataContent*) data);
  sb_OperatingRegion_out_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_LineSearchTask_in_recv_queue;

/************************************************************************
 * sb_LineSearchTask_in_dequeue_poll:
 ************************************************************************/
bool sb_LineSearchTask_in_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_LineSearchTask_in_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_LineSearchTask_in_dequeue:
 ************************************************************************/
bool sb_LineSearchTask_in_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_LineSearchTask_in_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_LineSearchTask_in_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_LineSearchTask_in_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_LineSearchTask_in_recv_queue);
}

bool sb_LineSearchTask_out_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_LineSearchTask_out_queue_1, (union_art_DataContent*) data);
  sb_LineSearchTask_out_1_notification_emit();

  return true;
}

// send AutomationRequest_out_UXAS: Out EventDataPort CMASI__AutomationRequest_i
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_out_UXAS_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_out_UXAS_Send", 0);

  sb_AutomationRequest_out_UXAS_enqueue(d);
}

// send AutomationRequest_out_MON_REQ: Out EventDataPort CMASI__AutomationRequest_i
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_out_MON_REQ_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_out_MON_REQ_Send", 0);

  sb_AutomationRequest_out_MON_REQ_enqueue(d);
}

// send OperatingRegion_out: Out EventDataPort CMASI__OperatingRegion_i
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_OperatingRegion_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_OperatingRegion_out_Send", 0);

  sb_OperatingRegion_out_enqueue(d);
}

// send LineSearchTask_out: Out EventDataPort CMASI__LineSearchTask_i
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_LineSearchTask_out_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_LineSearchTask_out_Send", 0);

  sb_LineSearchTask_out_enqueue(d);
}

// is_empty trusted_ids: In EventDataPort
B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_trusted_ids_IsEmpty(STACK_FRAME_ONLY) {
  return sb_trusted_ids_is_empty();
}

// receive trusted_ids: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_trusted_ids_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_trusted_ids_Receive", 0);

  union_art_DataContent val;
  if(sb_trusted_ids_dequeue((union_art_DataContent *) &val)) {
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


// is_empty AutomationRequest_in: In EventDataPort
B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_in_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AutomationRequest_in_is_empty();
}

// receive AutomationRequest_in: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_in_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_AutomationRequest_in_Receive", 0);

  union_art_DataContent val;
  if(sb_AutomationRequest_in_dequeue((union_art_DataContent *) &val)) {
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


// is_empty OperatingRegion_in: In EventDataPort
B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_OperatingRegion_in_IsEmpty(STACK_FRAME_ONLY) {
  return sb_OperatingRegion_in_is_empty();
}

// receive OperatingRegion_in: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_OperatingRegion_in_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_OperatingRegion_in_Receive", 0);

  union_art_DataContent val;
  if(sb_OperatingRegion_in_dequeue((union_art_DataContent *) &val)) {
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


// is_empty LineSearchTask_in: In EventDataPort
B hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_LineSearchTask_in_IsEmpty(STACK_FRAME_ONLY) {
  return sb_LineSearchTask_in_is_empty();
}

// receive LineSearchTask_in: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_LineSearchTask_in_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_AttestationGate_thr_Impl.c", "", "hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_seL4Nix_LineSearchTask_in_Receive", 0);

  union_art_DataContent val;
  if(sb_LineSearchTask_in_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate\n");

  // initialise data structure for incoming event data port trusted_ids
  sb_queue_union_art_DataContent_1_Recv_init(&sb_trusted_ids_recv_queue, sb_trusted_ids_queue);

  // initialise data structure for incoming event data port AutomationRequest_in
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AutomationRequest_in_recv_queue, sb_AutomationRequest_in_queue);

  // initialise data structure for outgoing event data port AutomationRequest_out_UXAS
  sb_queue_union_art_DataContent_1_init(sb_AutomationRequest_out_UXAS_queue_1);

  // initialise data structure for outgoing event data port AutomationRequest_out_MON_REQ
  sb_queue_union_art_DataContent_1_init(sb_AutomationRequest_out_MON_REQ_queue_1);

  // initialise data structure for incoming event data port OperatingRegion_in
  sb_queue_union_art_DataContent_1_Recv_init(&sb_OperatingRegion_in_recv_queue, sb_OperatingRegion_in_queue);

  // initialise data structure for outgoing event data port OperatingRegion_out
  sb_queue_union_art_DataContent_1_init(sb_OperatingRegion_out_queue_1);

  // initialise data structure for incoming event data port LineSearchTask_in
  sb_queue_union_art_DataContent_1_Recv_init(&sb_LineSearchTask_in_recv_queue, sb_LineSearchTask_in_queue);

  // initialise data structure for outgoing event data port LineSearchTask_out
  sb_queue_union_art_DataContent_1_init(sb_LineSearchTask_out_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_CASE_AttestationGate_thr_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
#endif
