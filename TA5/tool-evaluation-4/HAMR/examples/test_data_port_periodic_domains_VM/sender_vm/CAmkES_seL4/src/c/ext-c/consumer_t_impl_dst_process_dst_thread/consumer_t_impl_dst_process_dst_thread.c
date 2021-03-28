#include <consumer_t_impl_dst_process_dst_thread_api.h>
#include <consumer_t_impl_dst_process_dst_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logInfo"));

  api_logDebug__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logDebug"));

  api_logError__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logError"));
}

Unit sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_", 0);
}

Unit sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_", 0);

  // examples of api getter usage

  S8 t0;
  if(api_get_read_port__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF &t0)) {
    DeclNewString(read_port_str);
    String__append(SF (String) &read_port_str, string("Received on read_port: "));
    S8_string_(SF (String) &read_port_str, t0);
    api_logInfo__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF (String) &read_port_str);
  }
}
