#include "../includes/sb_RadioDriver_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_entrypoint_RadioDriver_Impl_recv_data:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_recv_data(const CASE_Model_Transformations__CASE_RF_Msg_Impl * in_arg) {
  recv_data_event_handler((CASE_Model_Transformations__CASE_RF_Msg_Impl *) in_arg);
}

static void sb_AutomationResponse_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_AutomationResponse_notification_reg_callback(sb_AutomationResponse_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_RadioDriver_Impl_AutomationResponse:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_AutomationResponse(const CMASI__AutomationResponse_i * in_arg) {
  automation_response_handler((CMASI__AutomationResponse_i *) in_arg);
}

/************************************************************************
 * sb_entrypoint_RadioDriver_Impl_AirVehicleState:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_AirVehicleState(const CMASI__AirVehicleState_i * in_arg) {
  air_vehicle_state_handler((CMASI__AirVehicleState_i *) in_arg);
}

/************************************************************************
 *  sb_entrypoint_RadioDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_RadioDriver_Impl_initializer(const int64_t * in_arg) {
  initialize_radio((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_AutomationResponse_notification_reg_callback(sb_AutomationResponse_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CASE_Model_Transformations__CASE_RF_Msg_Impl sb_recv_data;
  CMASI__AutomationResponse_i sb_AutomationResponse;
  CMASI__AirVehicleState_i sb_AirVehicleState;
  {
    int64_t sb_dummy;
    sb_entrypoint_RadioDriver_Impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    while (sb_recv_data_dequeue((CASE_Model_Transformations__CASE_RF_Msg_Impl *) &sb_recv_data)) {
      sb_entrypoint_RadioDriver_Impl_recv_data(&sb_recv_data);
    }
    while (sb_AutomationResponse_dequeue((CMASI__AutomationResponse_i *) &sb_AutomationResponse)) {
      sb_entrypoint_RadioDriver_Impl_AutomationResponse(&sb_AutomationResponse);
    }
    while (sb_AirVehicleState_dequeue((CMASI__AirVehicleState_i *) &sb_AirVehicleState)) {
      sb_entrypoint_RadioDriver_Impl_AirVehicleState(&sb_AirVehicleState);
    }
  }
  return 0;
}
