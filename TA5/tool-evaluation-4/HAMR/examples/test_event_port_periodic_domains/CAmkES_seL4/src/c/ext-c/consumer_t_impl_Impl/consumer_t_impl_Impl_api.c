#include <consumer_t_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_consume__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl(
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl this){
  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_getconsume_(
    SF
    (Option_C622DB) &t_0,
    test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl(
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logDebug__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl(
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

void api_logError__test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl(
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    test_event_port_periodic_domains_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
