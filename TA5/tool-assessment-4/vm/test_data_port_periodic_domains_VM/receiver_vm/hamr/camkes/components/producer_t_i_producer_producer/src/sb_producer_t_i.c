// This file will be regenerated, do not edit

#include <sb_producer_t_i.h>
#include <producer_t_i_producer_producer_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_write_port_seqNum;

bool sb_write_port_write(const union_art_DataContent * value) {
  return write_sp_union_art_DataContent(sb_write_port, value, &sb_write_port_seqNum);
}

// send write_port: Out DataPort int8_t
Unit base_test_data_port_periodic_domains_producer_t_i_producer_producer_seL4Nix_write_port_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_producer_t_i.c", "", "base_test_data_port_periodic_domains_producer_t_i_producer_producer_seL4Nix_write_port_Send", 0);

  sb_write_port_write(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_producer_t_i.c", "", "pre_init", 0);

  printf("Entering pre-init of producer_t_i_producer_producer\n");

  // initialise data structure for data port write_port
  init_sp_union_art_DataContent(sb_write_port, &sb_write_port_seqNum);

  // initialise slang-embedded components/ports
  base_test_data_port_periodic_domains_producer_t_i_producer_producer_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  base_test_data_port_periodic_domains_producer_t_i_producer_producer_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of producer_t_i_producer_producer\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_producer_t_i.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    base_test_data_port_periodic_domains_producer_t_i_producer_producer_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
