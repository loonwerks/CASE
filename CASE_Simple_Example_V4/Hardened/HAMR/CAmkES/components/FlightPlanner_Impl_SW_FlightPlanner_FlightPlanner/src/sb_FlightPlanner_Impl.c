// This file will be regenerated, do not edit

#include <sb_FlightPlanner_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_MissionCommand_recv_queue;

/************************************************************************
 * sb_MissionCommand_dequeue_poll:
 ************************************************************************/
bool sb_MissionCommand_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_MissionCommand_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_dequeue:
 ************************************************************************/
bool sb_MissionCommand_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_MissionCommand_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_MissionCommand_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_MissionCommand_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_MissionCommand_recv_queue);
}

bool sb_FlightPlan_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_FlightPlan_queue_1, (union_art_DataContent*) data);
  sb_FlightPlan_1_notification_emit();

  return true;
}

// send FlightPlan: Out EventDataPort SW__Mission
Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_FlightPlan_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_FlightPlanner_Impl.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_FlightPlan_Send", 0);

  sb_FlightPlan_enqueue(d);
}

// is_empty MissionCommand: In EventDataPort
B HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_MissionCommand_IsEmpty(STACK_FRAME_ONLY) {
  return sb_MissionCommand_is_empty();
}

// receive MissionCommand: In EventDataPort union_art_DataContent
Unit HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_MissionCommand_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_FlightPlanner_Impl.c", "", "HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_seL4Nix_MissionCommand_Receive", 0);

  union_art_DataContent val;
  if(sb_MissionCommand_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_FlightPlanner_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner\n");

  // initialise data structure for incoming event data port MissionCommand
  sb_queue_union_art_DataContent_1_Recv_init(&sb_MissionCommand_recv_queue, sb_MissionCommand_queue);

  // initialise data structure for outgoing event data port FlightPlan
  sb_queue_union_art_DataContent_1_init(sb_FlightPlan_queue_1);

  // initialise slang-embedded components/ports
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_FlightPlanner_Impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    HAMR_SW_FlightPlanner_Impl_SW_FlightPlanner_FlightPlanner_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
