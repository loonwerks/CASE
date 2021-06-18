// This file will be regenerated, do not edit

#include <sb_CASE_Monitor_Geo_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_keep_out_zones_seqNum;

seqNum_t sb_keep_in_zones_seqNum;

/*****************************************************************
 * sb_keep_in_zones_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_keep_in_zones_is_empty() {
  return is_empty_sp_union_art_DataContent(sb_keep_in_zones);
}

bool sb_keep_in_zones_read(union_art_DataContent * value) {
  seqNum_t new_seqNum;
  if ( read_sp_union_art_DataContent(sb_keep_in_zones, value, &new_seqNum) ) {
    sb_keep_in_zones_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

/*****************************************************************
 * sb_keep_out_zones_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_keep_out_zones_is_empty() {
  return is_empty_sp_union_art_DataContent(sb_keep_out_zones);
}

bool sb_keep_out_zones_read(union_art_DataContent * value) {
  seqNum_t new_seqNum;
  if ( read_sp_union_art_DataContent(sb_keep_out_zones, value, &new_seqNum) ) {
    sb_keep_out_zones_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

sb_queue_union_art_DataContent_1_Recv_t sb_observed_recv_queue;

/************************************************************************
 * sb_observed_dequeue_poll:
 ************************************************************************/
bool sb_observed_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_observed_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_observed_dequeue:
 ************************************************************************/
bool sb_observed_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_observed_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_observed_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_observed_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_observed_recv_queue);
}

bool sb_output_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_output_queue_1, (union_art_DataContent*) data);
  sb_output_1_notification_emit();

  return true;
}

/************************************************************************
 * sb_alert_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_alert_enqueue(void) {
  // sb_alert_counter is a dataport (shared memory) that is written by the sender
  // and read by the receiver(s). This counter is monotonicly increasing,
  // but can wrap.
  (*sb_alert_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_alert_counter_release();

  sb_alert_emit();

  return true;
}


// send output: Out EventDataPort CMASI__AutomationResponse_i
Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_output_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_output_Send", 0);

  sb_output_enqueue(d);
}

// send alert: Out EventPort
Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_alert_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_alert_Send", 0);

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_alert_enqueue();
}

// is_empty keep_in_zones: In DataPort
B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_in_zones_IsEmpty(STACK_FRAME_ONLY) {
  return sb_keep_in_zones_is_empty();
}

// receive keep_in_zones: In DataPort union_art_DataContent
Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_in_zones_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_in_zones_Receive", 0);

  union_art_DataContent val;
  if(sb_keep_in_zones_read((union_art_DataContent *) &val)) {
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


// is_empty keep_out_zones: In DataPort
B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_out_zones_IsEmpty(STACK_FRAME_ONLY) {
  return sb_keep_out_zones_is_empty();
}

// receive keep_out_zones: In DataPort union_art_DataContent
Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_out_zones_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_keep_out_zones_Receive", 0);

  union_art_DataContent val;
  if(sb_keep_out_zones_read((union_art_DataContent *) &val)) {
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


// is_empty observed: In EventDataPort
B hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_observed_IsEmpty(STACK_FRAME_ONLY) {
  return sb_observed_is_empty();
}

// receive observed: In EventDataPort union_art_DataContent
Unit hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_observed_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_seL4Nix_observed_Receive", 0);

  union_art_DataContent val;
  if(sb_observed_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo\n");

  // initialise data structure for incoming event data port observed
  sb_queue_union_art_DataContent_1_Recv_init(&sb_observed_recv_queue, sb_observed_queue);

  // initialise data structure for outgoing event data port output
  sb_queue_union_art_DataContent_1_init(sb_output_queue_1);

  // initialise shared counter for event port alert
  *sb_alert_counter = 0;

  // initialise slang-embedded components/ports
  hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo\n");
}

#ifndef CAKEML_ASSEMBLIES_PRESENT
/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_CASE_Monitor_Geo_thr_Impl.c", "", "run", 0);


  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
#endif
