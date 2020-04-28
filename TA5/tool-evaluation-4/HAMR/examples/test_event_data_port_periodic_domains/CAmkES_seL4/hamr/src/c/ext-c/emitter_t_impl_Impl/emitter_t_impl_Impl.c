#include <emitter_t_impl_Impl_api.h>
#include <ext.h>

S8 _emitter_value = 0;

Unit hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_initialise_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {

  api_logInfo__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, 
    string("Emitter's initialise method called"));
}

Unit hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_finalise_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {
  // example finalise method
}

Unit hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {

  api_send_write_port__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, _emitter_value);

  DeclNewString(msg);
  String__append((String)&msg, string("Emitter: Sent "));
  S8_string_(STACK_FRAME (String)&msg, _emitter_value);
  
  api_logInfo__hamr_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, (String)&msg);
  
  _emitter_value = (_emitter_value + 1) % S8_Max;
}
