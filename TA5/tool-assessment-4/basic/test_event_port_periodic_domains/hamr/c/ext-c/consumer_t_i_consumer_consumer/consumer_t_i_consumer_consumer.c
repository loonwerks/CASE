#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static Z receivedEvents = 0; 
Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_", 0);
}

Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_", 0);
}

Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_handle_consume_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_handle_consume_", 0);

  receivedEvents++;
  DeclNewString(str);
  String consume_str = (String) &str;
  String__append(SF consume_str, string("Received "));
  Z_string_(SF consume_str, receivedEvents);    
  String__append(SF consume_str, string(" events on consume"));
  api_logInfo__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer(SF consume_str);
}
