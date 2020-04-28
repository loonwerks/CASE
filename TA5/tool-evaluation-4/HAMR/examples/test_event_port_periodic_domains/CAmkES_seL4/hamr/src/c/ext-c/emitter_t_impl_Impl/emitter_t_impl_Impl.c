#include <emitter_t_impl_Impl_api.h>
#include <ext.h>

Unit hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_initialise_(
  STACK_FRAME
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this) {
 
  api_logInfo__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(this, 
    string("Emitter's initialise method called"));
}

Unit hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_finalise_(
  STACK_FRAME
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this) {
  // example finalise method
}

Unit hamr_test_event_port_periodic_domains_emitter_t_impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_test_event_port_periodic_domains_emitter_t_impl_Impl this) {

  api_send_emit__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(this);

  DeclNewString(msg);
  String__append((String)&msg, string("Emitter: Sent event"));
  
  api_logInfo__hamr_test_event_port_periodic_domains_emitter_t_impl_Impl(this, (String)&msg);
}
