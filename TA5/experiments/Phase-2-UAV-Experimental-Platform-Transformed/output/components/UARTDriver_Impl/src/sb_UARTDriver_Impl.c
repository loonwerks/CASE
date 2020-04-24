#include "../includes/sb_UARTDriver_Impl.h"
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_entrypoint_UARTDriver_Impl_recv_data:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_recv_data(const CASE_Model_Transformations__CASE_UART_Msg_Impl * in_arg) {
  recv_data_event_handler((CASE_Model_Transformations__CASE_UART_Msg_Impl *) in_arg);
}

static void sb_MissionCommand_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_MissionCommand_notification_reg_callback(sb_MissionCommand_notification_handler, NULL));
}

/************************************************************************
 * sb_entrypoint_UARTDriver_Impl_MissionCommand:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_MissionCommand(const CMASI__MissionCommand_i * in_arg) {
  mission_command_event_handler((CMASI__MissionCommand_i *) in_arg);
}

/************************************************************************
 * sb_AirVehicleState_enqueue:
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
bool sb_AirVehicleState_enqueue(const CMASI__AirVehicleState_i * sb_AirVehicleState){
  bool sb_result = true;
  sb_result &= sb_AirVehicleState0_enqueue((CMASI__AirVehicleState_i *) sb_AirVehicleState);
  sb_result &= sb_AirVehicleState1_enqueue((CMASI__AirVehicleState_i *) sb_AirVehicleState);
  return sb_result;
}

/************************************************************************
 *  sb_entrypoint_UARTDriver_Impl_initializer:
 *
 * This is the function invoked by an active thread dispatcher to
 * call to a user-defined entrypoint function.  It sets up the dispatch
 * context for the user-defined entrypoint, then calls it.
 *
 ************************************************************************/
void sb_entrypoint_UARTDriver_Impl_initializer(const int64_t * in_arg) {
  initialize_uart((int64_t *) in_arg);
}

void pre_init(void) {
  CALLBACKOP(sb_MissionCommand_notification_reg_callback(sb_MissionCommand_notification_handler, NULL));
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  CASE_Model_Transformations__CASE_UART_Msg_Impl sb_recv_data;
  CMASI__MissionCommand_i sb_MissionCommand;
  {
    int64_t sb_dummy;
    sb_entrypoint_UARTDriver_Impl_initializer(&sb_dummy);
  }

  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())

    while (sb_recv_data_dequeue((CASE_Model_Transformations__CASE_UART_Msg_Impl *) &sb_recv_data)) {
      sb_entrypoint_UARTDriver_Impl_recv_data(&sb_recv_data);
    }
    while (sb_MissionCommand_dequeue((CMASI__MissionCommand_i *) &sb_MissionCommand)) {
      sb_entrypoint_UARTDriver_Impl_MissionCommand(&sb_MissionCommand);
    }
  }
  return 0;
}
