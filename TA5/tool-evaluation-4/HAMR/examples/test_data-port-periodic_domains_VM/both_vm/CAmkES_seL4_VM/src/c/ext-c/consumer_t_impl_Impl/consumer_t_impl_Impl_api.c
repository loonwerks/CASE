#include <consumer_t_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

B api_get_read_port__CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  S8 *value){
  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return T;
  } else {
    return F;
  }
}

Unit api_logInfo__CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logDebug__CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logError__CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    CAmkES_seL4_VM_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
