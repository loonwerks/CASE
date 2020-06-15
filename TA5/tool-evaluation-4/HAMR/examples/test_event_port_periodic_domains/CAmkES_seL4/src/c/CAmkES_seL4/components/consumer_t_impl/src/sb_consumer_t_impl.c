#include <sb_consumer_t_impl.h>
#include <sb_event_counter.h>
#include <consumer_t_impl_adapter.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 *
 * Static variables and queue management functions for event port:
 *     consume
 *
 ************************************************************************/
static sb_event_counter_t sb_consume_received_events = 0;
static sb_event_counter_t sb_consume_last_counter = 0;

/************************************************************************
 * sb_consume_dequeue:
 * Invoked from local active thread.
 *
 * This is the function invoked by the active thread to decrement the
 * input event index.
 *
 ************************************************************************/
bool sb_consume_dequeue() {
  if(sb_consume_received_events > 0) {
    sb_consume_received_events--;
    return true;
  } else {
    return false;
  }
}

/************************************************************************
 * sb_consume_is_empty;
 * 
 * Helper method to determine if infrastructure port has received 
 * new events
 *
 ************************************************************************/
bool sb_consume_is_empty() {
  return *sb_consume_counter == sb_consume_last_counter;
}

void sb_freeze_event_port_consume() {
  sb_event_counter_t current_sb_consume_counter;

  sb_consume_received_events = 0; // drop any events not handled during last dispatch

  // get current shared counter value
  current_sb_consume_counter = *sb_consume_counter;

  // Acquire memory fence - ensure preceding read occurs before any subsequent read or write
  sb_consume_counter_acquire();

  // NOTE: Counters can wrap, so we must use != below instead of >
  while(current_sb_consume_counter != sb_consume_last_counter){
    sb_consume_last_counter++;
    sb_consume_received_events++;
  }

  if(sb_consume_received_events > 0) {

    // consume's queue size is 1
    if(sb_consume_received_events > 1) {
      //printf("consumer_t_impl: dropping %i event(s) from incoming event port consume\n", (sb_consume_received_events - 1));

      // drop events
      sb_consume_received_events = 1;
    }
  }
}

// is_empty consume: In EventPort
B test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_seL4Nix_consume_IsEmpty(STACK_FRAME_ONLY) {
  return sb_consume_is_empty();
}

// receive consume: In EventPort
Unit test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_seL4Nix_consume_Receive(STACK_FRAME
  Option_8E9F45 result) {
  if(sb_consume_dequeue()) {
    // event port - ART requires an Empty payload be sent
    DeclNewart_Empty(payload);

    // wrap it in Some and place in result
    DeclNewSome_D29615(some);
    Some_D29615_apply(STACK_FRAME &some, (art_DataContent) &payload);
    Type_assign(result, &some, sizeof(union Option_8E9F45));
  } else {
    // put None in result
    DeclNewNone_964667(none);
    Type_assign(result, &none, sizeof(union Option_8E9F45));
  }
} 

void pre_init(void) {
  printf("Entering pre-init of consumer_t_impl\n");

  // initialise slang-embedded components/ports
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of consumer_t_impl\n");
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    sb_freeze_event_port_consume();
    // call the component's compute entrypoint
    test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
