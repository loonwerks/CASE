// This file will be regenerated, do not edit

#include <sb_consumer_t_impl.h>
#include <consumer_t_impl_dst_process_dst_thread_adapter.h>
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
B sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_seL4Nix_read_port_IsEmpty(STACK_FRAME_ONLY) {
  return sb_read_port_is_empty();
}

// receive read_port: In DataPort union_art_DataContent
Unit sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_seL4Nix_read_port_Receive(
  STACK_FRAME
  Option_8E9F45 result) {
  DeclNewStackFrame(caller, "sb_consumer_t_impl.c", "", "sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_seL4Nix_read_port_Receive", 0);

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
  DeclNewStackFrame(NULL, "sb_consumer_t_impl.c", "", "pre_init", 0);

  printf("Entering pre-init of consumer_t_impl_dst_process_dst_thread\n");

  // initialise data structure for data port read_port
  init_sp_union_art_DataContent(sb_read_port, &sb_read_port_seqNum);

  // initialise slang-embedded components/ports
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of consumer_t_impl_dst_process_dst_thread\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_consumer_t_impl.c", "", "run", 0);

  sb_pacer_notification_wait();
  for(;;) {
    sb_pacer_notification_wait();
    // call the component's compute entrypoint
    sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_adapter_computeEntryPoint(SF_LAST);
  }
  return 0;
}
