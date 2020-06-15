#include <consumer_t_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  S8 *value){
  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logDebug__test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logError__test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    test_event_data_port_periodic_domains_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
