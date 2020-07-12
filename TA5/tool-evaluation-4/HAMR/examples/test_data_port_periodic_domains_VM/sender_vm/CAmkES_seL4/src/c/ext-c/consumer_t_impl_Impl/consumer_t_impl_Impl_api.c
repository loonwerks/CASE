#include <consumer_t_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  STACK_FRAME
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  S8 *value){
  DeclNewStackFrame(caller, "consumer_t_impl_Impl_api.c", "", "api_get_read_port__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl", 0);

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  STACK_FRAME
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_Impl_api.c", "", "api_logInfo__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl", 0);

  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logDebug__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  STACK_FRAME
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_Impl_api.c", "", "api_logDebug__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl", 0);

  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logError__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  STACK_FRAME
  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "consumer_t_impl_Impl_api.c", "", "api_logError__sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl", 0);

  sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    sender_vm_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
