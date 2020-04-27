#include <consumer_t_impl_Impl_api.h>

B api_get_read_port__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  S8 *value){
  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return T;
  } else {
    return F;
  }
}

Unit api_logInfo__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logInfo_(
    SF
    hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logDebug_(
    SF
    hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Bridge_Api_logError_(
    SF
    hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_api_(this),
    str);
}
