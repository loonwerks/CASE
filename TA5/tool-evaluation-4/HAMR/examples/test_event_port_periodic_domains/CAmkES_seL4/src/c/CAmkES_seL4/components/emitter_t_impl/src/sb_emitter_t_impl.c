#include <sb_emitter_t_impl.h>
#include <sb_event_counter.h>
#include <emitter_t_impl_adapter.h>
#include <string.h>
#include <camkes.h>

/************************************************************************
 * sb_emit_enqueue
 * Invoked from user code in the local thread.
 *
 * This is the function invoked by the local thread to make a
 * call to send to a remote event port.
 *
 ************************************************************************/
bool sb_emit_enqueue(void) {
  // sb_emit_counter is a dataport (shared memory) that is written by the sender 
  // and read by the receiver(s). This counter is monotonicly increasing, 
  // but can wrap.
  (*sb_emit_counter)++;

  // Release memory fence - ensure subsequent write occurs after any preceeding read or write
  sb_emit_counter_release();

  sb_emit_emit();

  return true;
}


// send emit: Out EventPort
Unit test_event_port_periodic_domains_test_event_port_periodic_domains_emitter_t_impl_seL4Nix_emit_Send(STACK_FRAME 
  art_DataContent d) {

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_emit_enqueue();
}

void pre_init(void) {
  printf("Entering pre-init of emitter_t_impl\n");

  // initialise shared counter for event port emit
  *sb_emit_counter = 0;

  // initialise slang-embedded components/ports
  test_event_port_periodic_domains_test_event_port_periodic_domains_emitter_t_impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  test_event_port_periodic_domains_test_event_port_periodic_domains_emitter_t_impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of emitter_t_impl\n");
}


/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    test_event_port_periodic_domains_test_event_port_periodic_domains_emitter_t_impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
