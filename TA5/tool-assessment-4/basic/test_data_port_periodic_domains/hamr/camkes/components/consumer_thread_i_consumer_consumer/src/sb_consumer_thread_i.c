// This file will be regenerated, do not edit

#include <sb_consumer_thread_i.h>
#include <consumer_thread_i_consumer_consumer_adapter.h>
#include <string.h>
#include <camkes.h>

seqNum_t sb_read_port_seqNum;

/*****************************************************************
 * sb_read_port_is_empty:
 *
 * Helper method to determine if the data infrastructure port has
 * received data
 *
 ****************************************************************/
bool sb_read_port_is_empty() {
  return is_empty_sp_union_art_DataContent(sb_read_port);
}

bool sb_read_port_read(union_art_DataContent * value) {
  seqNum_t new_seqNum;
  if ( read_sp_union_art_DataContent(sb_read_port, value, &new_seqNum) ) {
    sb_read_port_seqNum = new_seqNum;
    return true;
  } else {
    return false;
  } 
}

// is_empty read_port: In DataPort
B base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_seL4Nix_read_port_IsEmpty(STACK_FRAME_ONLY) {
  return sb_read_port_is_empty();
}

// receive read_port: In DataPort union_art_DataContent
Unit base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_seL4Nix_read_port_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_consumer_thread_i.c", "", "base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_seL4Nix_read_port_Receive", 0);

  union_art_DataContent val;
  if(sb_read_port_read((union_art_DataContent *) &val)) {
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
  DeclNewStackFrame(NULL, "sb_consumer_thread_i.c", "", "pre_init", 0);

  printf("Entering pre-init of consumer_thread_i_consumer_consumer\n");

  // initialise slang-embedded components/ports
  base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of consumer_thread_i_consumer_consumer\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_consumer_thread_i.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    base_test_data_port_periodic_domains_consumer_thread_i_consumer_consumer_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
