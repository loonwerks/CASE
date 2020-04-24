#include "../includes/sb_Waterways_i.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_entrypoint_Waterways_i_AutomationRequest:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_Waterways_i_AutomationRequest(const CMASI__AutomationRequest_i * in_arg) {
  automation_request_event_handler((CMASI__AutomationRequest_i *) in_arg);
}

static void sb_AirVehicleState_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_AirVehicleState_notification_reg_callback(sb_AirVehicleState_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_Waterways_i_AirVehicleState:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_Waterways_i_AirVehicleState(const CMASI__AirVehicleState_i * in_arg) {
  air_vehicle_state_event_handler((CMASI__AirVehicleState_i *) in_arg);
}

/************************************************************************
 * sb_entrypoint_Waterways_i_OperatingRegion:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_Waterways_i_OperatingRegion(const CMASI__OperatingRegion_i * in_arg) {
  operation_region_event_handler((CMASI__OperatingRegion_i *) in_arg);
}

/************************************************************************
 * sb_entrypoint_Waterways_i_LineSearchTask:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_Waterways_i_LineSearchTask(const CMASI__LineSearchTask_i * in_arg) {
  line_search_task_event_handler((CMASI__LineSearchTask_i *) in_arg);
}

/************************************************************************
 * sb_MissionCommand_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote event data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_MissionCommand_enqueue(const CMASI__MissionCommand_i * sb_MissionCommand){
  bool sb_result = true;
  sb_result &= sb_MissionCommand0_enqueue((CMASI__MissionCommand_i *) sb_MissionCommand);
  return sb_result;
}

/************************************************************************
 * sb_AutomationResponse_enqueue:
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to write to a remote event data port.
 *
 * XXX: When simulating fan out, the caller of this function will only
 * receive a positive response when all enqueues are successful. When a
 * negative response is received it only indicates that at least one
 * enqueue attempt failed.
 *
 ************************************************************************/
bool sb_AutomationResponse_enqueue(const CMASI__AutomationResponse_i * sb_AutomationResponse){
  bool sb_result = true;
  sb_result &= sb_AutomationResponse0_enqueue((CMASI__AutomationResponse_i *) sb_AutomationResponse);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_Waterways_i_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_Waterways_i_initializer(const int64_t * in_arg) {
  initialize_uxas((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_AirVehicleState_notification_reg_callback(sb_AirVehicleState_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CMASI__AutomationRequest_i sb_AutomationRequest;
  CMASI__AirVehicleState_i sb_AirVehicleState;
  CMASI__OperatingRegion_i sb_OperatingRegion;
  CMASI__LineSearchTask_i sb_LineSearchTask;
  {
    int64_t sb_dummy;
    sb_entrypoint_Waterways_i_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    while (sb_AutomationRequest_dequeue((CMASI__AutomationRequest_i *) &sb_AutomationRequest)) {
      sb_entrypoint_Waterways_i_AutomationRequest(&sb_AutomationRequest);
    }
    while (sb_AirVehicleState_dequeue((CMASI__AirVehicleState_i *) &sb_AirVehicleState)) {
      sb_entrypoint_Waterways_i_AirVehicleState(&sb_AirVehicleState);
    }
    while (sb_OperatingRegion_dequeue((CMASI__OperatingRegion_i *) &sb_OperatingRegion)) {
      sb_entrypoint_Waterways_i_OperatingRegion(&sb_OperatingRegion);
    }
    while (sb_LineSearchTask_dequeue((CMASI__LineSearchTask_i *) &sb_LineSearchTask)) {
      sb_entrypoint_Waterways_i_LineSearchTask(&sb_LineSearchTask);
    }
  }
  return 0;
}
