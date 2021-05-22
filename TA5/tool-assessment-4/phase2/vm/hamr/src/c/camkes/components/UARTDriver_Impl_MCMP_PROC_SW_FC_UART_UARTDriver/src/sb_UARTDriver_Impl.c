// This file will be regenerated, do not edit

#include <sb_UARTDriver_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter.h>
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

bool sb_AirVehicleState_WPM_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AirVehicleState_WPM_queue_1, (union_art_DataContent*) data);
  sb_AirVehicleState_WPM_1_notification_emit();

  return true;
}

bool sb_AirVehicleState_UXAS_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_AirVehicleState_UXAS_queue_1, (union_art_DataContent*) data);
  sb_AirVehicleState_UXAS_1_notification_emit();

  return true;
}

// send AirVehicleState_WPM: Out EventDataPort CMASI__AirVehicleState_i
Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_AirVehicleState_WPM_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_AirVehicleState_WPM_Send", 0);

  sb_AirVehicleState_WPM_enqueue(d);
}

// send AirVehicleState_UXAS: Out EventDataPort CMASI__AirVehicleState_i
Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_AirVehicleState_UXAS_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_AirVehicleState_UXAS_Send", 0);

  sb_AirVehicleState_UXAS_enqueue(d);
}

// FIXME: dummy implementation for unconnected outgoing port
Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_send_data_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_send_data_Send", 0);
  // FIXME: dummy implementation
}

// is_empty MissionCommand: In EventDataPort
B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_MissionCommand_IsEmpty(STACK_FRAME_ONLY) {
  return sb_MissionCommand_is_empty();
}

// receive MissionCommand: In EventDataPort union_art_DataContent
Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_MissionCommand_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_MissionCommand_Receive", 0);

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


// FIXME: dummy implementation for unconnected incoming port
B hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_recv_data_IsEmpty(STACK_FRAME_ONLY) {
  return T;
}

// FIXME: dummy implementation for unconnected incoming port
Unit hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_recv_data_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_seL4Nix_recv_data_Receive", 0);

  // FIXME: dummy implementation

  // put None in result
  DeclNewNone_964667(none);
  Type_assign(result, &none, sizeof(union Option_8E9F45));
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_UARTDriver_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver\n");

  // initialise data structure for incoming event data port MissionCommand
  sb_queue_union_art_DataContent_1_Recv_init(&sb_MissionCommand_recv_queue, sb_MissionCommand_queue);

  // initialise data structure for outgoing event data port AirVehicleState_WPM
  sb_queue_union_art_DataContent_1_init(sb_AirVehicleState_WPM_queue_1);

  // initialise data structure for outgoing event data port AirVehicleState_UXAS
  sb_queue_union_art_DataContent_1_init(sb_AirVehicleState_UXAS_queue_1);

  // initialise slang-embedded components/ports
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_UARTDriver_Impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
