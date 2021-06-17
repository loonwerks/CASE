// This file will be regenerated, do not edit

#include <sb_WaypointPlanManagerService_thr_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter.h>
#include <string.h>
#include <camkes.h>

sb_queue_union_art_DataContent_1_Recv_t sb_AutomationResponse_recv_queue;

/************************************************************************
 * sb_AutomationResponse_dequeue_poll:
 ************************************************************************/
bool sb_AutomationResponse_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AutomationResponse_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AutomationResponse_dequeue:
 ************************************************************************/
bool sb_AutomationResponse_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AutomationResponse_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AutomationResponse_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AutomationResponse_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AutomationResponse_recv_queue);
}

sb_queue_union_art_DataContent_1_Recv_t sb_AirVehicleState_recv_queue;

/************************************************************************
 * sb_AirVehicleState_dequeue_poll:
 ************************************************************************/
bool sb_AirVehicleState_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_AirVehicleState_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_AirVehicleState_dequeue:
 ************************************************************************/
bool sb_AirVehicleState_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_AirVehicleState_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_AirVehicleState_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_AirVehicleState_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_AirVehicleState_recv_queue);
}

bool sb_MissionCommand_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_MissionCommand_queue_1, (union_art_DataContent*) data);
  sb_MissionCommand_1_notification_emit();

  return true;
}

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     ReturnHome
 *
 ************************************************************************/
static sb_event_counter_t sb_ReturnHome_received_events = 0;
static sb_event_counter_t sb_ReturnHome_last_counter = 0;

/************************************************************************
 * sb_ReturnHome_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_ReturnHome_dequeue() {
  if(sb_ReturnHome_received_events > 0) {
    sb_ReturnHome_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_ReturnHome_is_empty;
 *
 * Helper method to determine if infrastructure port has not received
 * any new events since the last dispatch
 *
 ************************************************************************/
bool sb_ReturnHome_is_empty() {
  return sb_ReturnHome_received_events == 0;
}

void sb_freeze_event_port_ReturnHome() {
  sb_event_counter_t current_sb_ReturnHome_counter;

  sb_ReturnHome_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_ReturnHome_counter = *sb_ReturnHome_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_ReturnHome_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_ReturnHome_counter != sb_ReturnHome_last_counter){
    sb_ReturnHome_last_counter++;
    sb_ReturnHome_received_events++;
  }

  if(sb_ReturnHome_received_events > 0) {

    // ReturnHome's queue size is 1
    if(sb_ReturnHome_received_events > 1) {
      //printf("WaypointPlanManagerService_thr_Impl: dropping %i event(s) from incoming event port ReturnHome\n", (sb_ReturnHome_received_events - 1));

      // drop events
      sb_ReturnHome_received_events = 1;
    }
  }
}

// send MissionCommand: Out EventDataPort CMASI__MissionCommand_i
Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_MissionCommand_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_WaypointPlanManagerService_thr_Impl.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_MissionCommand_Send", 0);

  sb_MissionCommand_enqueue(d);
}

// is_empty AutomationResponse: In EventDataPort
B hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AutomationResponse_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AutomationResponse_is_empty();
}

// receive AutomationResponse: In EventDataPort union_art_DataContent
Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AutomationResponse_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointPlanManagerService_thr_Impl.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AutomationResponse_Receive", 0);

  union_art_DataContent val;
  if(sb_AutomationResponse_dequeue((union_art_DataContent *) &val)) {
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


// is_empty AirVehicleState: In EventDataPort
B hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AirVehicleState_IsEmpty(STACK_FRAME_ONLY) {
  return sb_AirVehicleState_is_empty();
}

// receive AirVehicleState: In EventDataPort union_art_DataContent
Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AirVehicleState_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointPlanManagerService_thr_Impl.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_AirVehicleState_Receive", 0);

  union_art_DataContent val;
  if(sb_AirVehicleState_dequeue((union_art_DataContent *) &val)) {
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


// is_empty ReturnHome: In EventPort
B hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_ReturnHome_IsEmpty(STACK_FRAME_ONLY) {
  return sb_ReturnHome_is_empty();
}

// receive ReturnHome: In EventPort
Unit hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_ReturnHome_Receive(STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_WaypointPlanManagerService_thr_Impl.c", "", "hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_seL4Nix_ReturnHome_Receive", 0);

  if(sb_ReturnHome_dequeue()) {
    // event port - ART requires an Empty payload be sent
    DeclNewart_Empty(payload);

    // wrap it in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(SF &some, (art_DataContent) &payload);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
} 

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_WaypointPlanManagerService_thr_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService\n");

  // initialise data structure for incoming event data port AutomationResponse
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AutomationResponse_recv_queue, sb_AutomationResponse_queue);

  // initialise data structure for incoming event data port AirVehicleState
  sb_queue_union_art_DataContent_1_Recv_init(&sb_AirVehicleState_recv_queue, sb_AirVehicleState_queue);

  // initialise data structure for outgoing event data port MissionCommand
  sb_queue_union_art_DataContent_1_init(sb_MissionCommand_queue_1);

  // initialise slang-embedded components/ports
  hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_WaypointPlanManagerService_thr_Impl.c", "", "run", 0);


  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    sb_freeze_event_port_ReturnHome();
    // call the component's compute entrypoint
    hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
