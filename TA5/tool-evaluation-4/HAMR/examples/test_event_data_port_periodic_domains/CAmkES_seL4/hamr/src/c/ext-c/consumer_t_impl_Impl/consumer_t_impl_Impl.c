#include <consumer_t_impl_Impl_api.h>
#include <ext.h>

Unit hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_initialise_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this) {

  api_logInfo__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(this, 
    string("Consumer's initialise method called"));
}

Unit hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_finalise_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this) {
  // example finalise method
}

Unit hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl_timeTriggered_(
  STACK_FRAME
  hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl this) {
  
  S8 _value;
  if(api_get_read_port__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(this, &_value)){
    
    DeclNewString(msg);
    String__append((String) &msg, string("Consumer: Received "));
    S8_string_(STACK_FRAME (String)&msg, _value);
    
    api_logInfo__hamr_test_event_data_port_periodic_domains_consumer_t_impl_Impl(this, (String) &msg);   
  }
}
