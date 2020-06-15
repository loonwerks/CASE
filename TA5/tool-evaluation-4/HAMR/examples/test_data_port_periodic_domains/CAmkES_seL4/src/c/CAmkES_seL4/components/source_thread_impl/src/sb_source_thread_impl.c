#include <sb_source_thread_impl.h>
#include <source_thread_impl_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_write_port, value, &sb_write_port_seqNum);
}

// send write_port: Out DataPort int8_t
Unit test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_seL4Nix_write_port_Send(STACK_FRAME 
  art_DataContent d) {
  sb_write_port_write(d);
}

void pre_init(void) {
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
  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    test_data_port_periodic_domains_test_data_port_periodic_domains_source_thread_impl_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
