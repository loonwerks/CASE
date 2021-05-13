// This file will be regenerated, do not edit

#include <sb_UARTDriver_Impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <sb_event_counter.h>
#include <UARTDriver_Impl_SW_UART_UARTDriver_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_Status_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_Status_queue_1, (union_art_DataContent*) data);
  sb_Status_1_notification_emit();

  return true;
}

sb_queue_union_art_DataContent_1_Recv_t sb_MissionWindow_recv_queue;

/************************************************************************
 * sb_MissionWindow_dequeue_poll:
 ************************************************************************/
bool sb_MissionWindow_dequeue_poll(sb_event_counter_t *numDropped, union_art_DataContent *data) {
  return sb_queue_union_art_DataContent_1_dequeue(&sb_MissionWindow_recv_queue, numDropped, data);
}

/************************************************************************
 * sb_MissionWindow_dequeue:
 ************************************************************************/
bool sb_MissionWindow_dequeue(union_art_DataContent *data) {
  sb_event_counter_t numDropped;
  return sb_MissionWindow_dequeue_poll(&numDropped, data);
}

/************************************************************************
 * sb_MissionWindow_is_empty:
 *
 * Helper method to determine if infrastructure port has received new
 * events
 ************************************************************************/
bool sb_MissionWindow_is_empty(){
  return sb_queue_union_art_DataContent_1_is_empty(&sb_MissionWindow_recv_queue);
}

/************************************************************************
 * sb_MissionWindow_notification_handler:
 * Invoked by: seL4 notification callback
 *
 * This is the function invoked by an seL4 notification callback to 
 * dispatch the component due to the arrival of an event on port
 * sb_MissionWindow
 *
 ************************************************************************/
static void sb_MissionWindow_notification_handler(void * unused) {
  MUTEXOP(sb_dispatch_sem_post())
  CALLBACKOP(sb_MissionWindow_notification_reg_callback(sb_MissionWindow_notification_handler, NULL));
}

// send Status: Out EventDataPort SW__Coordinate_Impl
Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_Status_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_Status_Send", 0);

  sb_Status_enqueue(d);
}

// is_empty MissionWindow: In EventDataPort
B HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_MissionWindow_IsEmpty(STACK_FRAME_ONLY) {
  return sb_MissionWindow_is_empty();
}

// receive MissionWindow: In EventDataPort union_art_DataContent
Unit HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_MissionWindow_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_UARTDriver_Impl.c", "", "HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_seL4Nix_MissionWindow_Receive", 0);

  union_art_DataContent val;
  if(sb_MissionWindow_dequeue((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_UARTDriver_Impl.c", "", "pre_init", 0);

  printf("Entering pre-init of UARTDriver_Impl_SW_UART_UARTDriver\n");

  // initialise data structure for outgoing event data port Status
  sb_queue_union_art_DataContent_1_init(sb_Status_queue_1);

  // initialise data structure for incoming event data port MissionWindow
  sb_queue_union_art_DataContent_1_Recv_init(&sb_MissionWindow_recv_queue, sb_MissionWindow_queue);

  // initialise slang-embedded components/ports
  HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of UARTDriver_Impl_SW_UART_UARTDriver\n");
}

void post_init(void) {
  DeclNewStackFrame(NULL, "sb_UARTDriver_Impl.c", "", "post_init", 0);

  // register callback for EventDataPort port MissionWindow
  CALLBACKOP(sb_MissionWindow_notification_reg_callback(sb_MissionWindow_notification_handler, NULL));
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_UARTDriver_Impl.c", "", "run", 0);

  MUTEXOP(sb_dispatch_sem_wait())
  for(;;) {
    MUTEXOP(sb_dispatch_sem_wait())
    // call the component's compute entrypoint
    HAMR_SW_UARTDriver_Impl_SW_UART_UARTDriver_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
