// This file will be regenerated, do not edit

#include <sb_emitter_t_impl.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <emitter_t_impl_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_write_port_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_write_port_queue_1, (union_art_DataContent*) data);
  sb_write_port_1_notification_emit();

  return true;
}

// send write_port: Out EventDataPort int8_t
Unit test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_emitter_t_impl_seL4Nix_write_port_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_emitter_t_impl.c", "", "test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_emitter_t_impl_seL4Nix_write_port_Send", 0);

  sb_write_port_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_emitter_t_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of emitter_t_impl\n");

  // initialise data structure for outgoing event data port write_port
  sb_queue_union_art_DataContent_1_init(sb_write_port_queue_1);

  // initialise slang-embedded components/ports
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_emitter_t_impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_emitter_t_impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of emitter_t_impl\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_emitter_t_impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_emitter_t_impl_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
