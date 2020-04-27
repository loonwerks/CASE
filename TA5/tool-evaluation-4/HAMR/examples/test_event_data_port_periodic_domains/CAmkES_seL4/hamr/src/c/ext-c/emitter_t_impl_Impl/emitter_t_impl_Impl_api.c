#include <emitter_t_impl_Impl_api.h>

Unit api_send_write_port__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this,
  S8 value) {

  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Bridge_Api_sendwrite_port_(
    hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    value);
}

Unit api_logInfo__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Bridge_Api_logInfo_(
    SF
    hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Bridge_Api_logDebug_(
    SF
    hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Bridge_Api_logError_(
    SF
    hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}
