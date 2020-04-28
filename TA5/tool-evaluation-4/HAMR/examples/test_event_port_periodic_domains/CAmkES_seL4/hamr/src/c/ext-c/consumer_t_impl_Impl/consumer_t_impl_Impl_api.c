#include <consumer_t_impl_Impl_api.h>

B api_get_consume__hamr_test_event_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_port_periodic_domains_consumer_t_impl_Impl this){
  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  hamr_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_getconsume_(
    SF
    (Option_C622DB) &t_0,
    hamr_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_4782C6){
    return T;
  } else {
    return F;
  }
}

Unit api_logInfo__hamr_test_event_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    hamr_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_test_event_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    hamr_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_test_event_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    hamr_test_event_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
