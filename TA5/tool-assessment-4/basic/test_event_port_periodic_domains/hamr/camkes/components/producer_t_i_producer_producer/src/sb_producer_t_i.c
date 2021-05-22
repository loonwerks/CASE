// This file will be regenerated, do not edit

#include <sb_producer_t_i.h>
#include <sb_event_counter.h>
#include <producer_t_i_producer_producer_adapter.h>
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
Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_seL4Nix_emit_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_producer_t_i.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_seL4Nix_emit_Send", 0);

  // event port - can ignore the Slang Empty payload
  art_Empty payload = (art_Empty) d;

  // send event via CAmkES
  sb_emit_enqueue();
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_producer_t_i.c", "", "pre_init", 0);

  printf("Entering pre-init of producer_t_i_producer_producer\n");

  // initialise shared counter for event port emit
  *sb_emit_counter = 0;

  // initialise slang-embedded components/ports
  base_test_event_port_periodic_domains_producer_t_i_producer_producer_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  base_test_event_port_periodic_domains_producer_t_i_producer_producer_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of producer_t_i_producer_producer\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_producer_t_i.c", "", "run", 0);


  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    base_test_event_port_periodic_domains_producer_t_i_producer_producer_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
