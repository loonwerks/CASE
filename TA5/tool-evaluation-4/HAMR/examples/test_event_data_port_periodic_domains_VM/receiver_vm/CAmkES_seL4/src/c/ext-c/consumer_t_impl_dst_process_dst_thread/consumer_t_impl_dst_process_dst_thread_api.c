#include <consumer_t_impl_dst_process_dst_thread_api.h>
#include <consumer_t_impl_dst_process_dst_thread.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  S8 *value){
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_get_read_port__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  // Option_4028BD = Option[receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_Operational_Api]
  DeclNewreceiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api(api);
  Option_4028BD_get_(SF (receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api) &api, receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_operational_api(SF_LAST));

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api_get_read_port_(
    SF
    (Option_FC3847) &t_0,
    &api);

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logInfo__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  // Option_65A10B = Option[receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_Initialization_Api]
  DeclNewreceiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api(api);
  Option_65A10B_get_(SF (receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api) &api, receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_initialization_api(SF_LAST));

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logDebug__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  // Option_65A10B = Option[receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_Initialization_Api]
  DeclNewreceiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api(api);
  Option_65A10B_get_(SF (receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api) &api, receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_initialization_api(SF_LAST));

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "api_logError__receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread", 0);

  // Option_65A10B = Option[receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_Initialization_Api]
  DeclNewreceiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api(api);
  Option_65A10B_get_(SF (receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api) &api, receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_Bridge_c_initialization_api(SF_LAST));

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise", 0);

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_initialise_(SF_LAST);
}

Unit receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise", 0);

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_finalise_(SF_LAST);
}

Unit receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_impl_dst_process_dst_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered", 0);

  receiver_vm_test_event_data_port_periodic_domains_consumer_t_impl_dst_process_dst_thread_timeTriggered_(SF_LAST);
}
