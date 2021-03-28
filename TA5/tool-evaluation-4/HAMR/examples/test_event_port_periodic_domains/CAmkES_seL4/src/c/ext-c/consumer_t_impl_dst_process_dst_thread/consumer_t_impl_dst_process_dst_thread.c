#include <consumer_t_impl_dst_process_dst_thread_api.h>
#include <consumer_t_impl_dst_process_dst_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logInfo"));

  api_logDebug__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logDebug"));

  api_logError__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF string("Example logError"));
}

Unit test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_", 0);
}

Unit test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread.c", "", "test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_", 0);

  // examples of api getter usage

  if(api_get_consume__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF_LAST )){
    String consume_str = string("Received event on consume");
    api_logInfo__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(SF consume_str);
  }
}
