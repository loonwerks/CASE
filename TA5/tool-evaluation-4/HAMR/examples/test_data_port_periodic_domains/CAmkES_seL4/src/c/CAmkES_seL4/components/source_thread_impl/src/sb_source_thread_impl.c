// This file will be regenerated, do not edit

#include <sb_source_thread_impl.h>
#include <source_thread_impl_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_write_port, value, &sb_write_port_seqNum);
}

// send write_port: Out DataPort int8_t
Unit test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_seL4Nix_write_port_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_source_thread_impl.c", "", "test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_seL4Nix_write_port_Send", 0);

  sb_write_port_write(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_source_thread_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of source_thread_impl\n");

  // initialise data structure for data port write_port
  init_sp_union_art_DataContent(sb_write_port, &sb_write_port_seqNum);

  // initialise slang-embedded components/ports
  test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of source_thread_impl\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_source_thread_impl.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
