#include <emitter_t_impl_Impl_api.h>

Unit api_send_emit__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this) {

  hamr_test_event_port_periodic_domains_emitter_t_impl_Bridge_Api_sendemit_(
    hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_api_(this));
}

Unit api_logInfo__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_emitter_t_impl_Bridge_Api_logInfo_(
    SF
    hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}

Unit api_logDebug__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_emitter_t_impl_Bridge_Api_logDebug_(
    SF
    hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}

Unit api_logError__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this,
  String str) {
  hamr_test_event_port_periodic_domains_emitter_t_impl_Bridge_Api_logError_(
    SF
    hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_api_(this),
    str);
}
