#include "../includes/sb_WaypointPlanManagerService_i.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_entrypoint_WaypointPlanManagerService_i_AutomationResponse:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointPlanManagerService_i_AutomationResponse(const CMASI__AutomationResponse_i * in_arg) {
  automation_response_event_handler((CMASI__AutomationResponse_i *) in_arg);
}

static void sb_AirVehicleState_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_AirVehicleState_notification_reg_callback(sb_AirVehicleState_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_WaypointPlanManagerService_i_AirVehicleState:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointPlanManagerService_i_AirVehicleState(const CMASI__AirVehicleState_i * in_arg) {
  air_vehicle_state_event_handler((CMASI__AirVehicleState_i *) in_arg);
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
 * sb_ReturnHome_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback that  
 * dispatches the active-thread due to the arrival of an event on 
 * its ReturnHome event port
 *
 ************************************************************************/
static void sb_ReturnHome_handler(void *_ UNUSED){
  MUTEXOP(sb_dispatch_sem_post());
  CALLBACKOP(sb_ReturnHome_notification_reg_callback(sb_ReturnHome_handler, NULL));
}
/************************************************************************
 *  sb_entrypointsb_WaypointPlanManagerService_i_ReturnHome
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypointsb_WaypointPlanManagerService_i_ReturnHome(void){
  return_home_event_handler();
}

/************************************************************************
 *  sb_entrypoint_WaypointPlanManagerService_i_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_WaypointPlanManagerService_i_initializer(const int64_t * in_arg) {
  initialize_wpm((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_AirVehicleState_notification_reg_callback(sb_AirVehicleState_notification_handler, NULL));
  CALLBACKOP(sb_ReturnHome_notification_reg_callback(sb_ReturnHome_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CMASI__AutomationResponse_i sb_AutomationResponse;
  CMASI__AirVehicleState_i sb_AirVehicleState;

  {
    int64_t sb_dummy;
    sb_entrypoint_WaypointPlanManagerService_i_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    while (sb_AutomationResponse_dequeue((CMASI__AutomationResponse_i *) &sb_AutomationResponse)) {
      sb_entrypoint_WaypointPlanManagerService_i_AutomationResponse(&sb_AutomationResponse);
    }
    while (sb_AirVehicleState_dequeue((CMASI__AirVehicleState_i *) &sb_AirVehicleState)) {
      sb_entrypoint_WaypointPlanManagerService_i_AirVehicleState(&sb_AirVehicleState);
    }
    while(sb_ReturnHome_dequeue()){
      sb_entrypointsb_WaypointPlanManagerService_i_ReturnHome();
    }
  }
  return 0;
}
