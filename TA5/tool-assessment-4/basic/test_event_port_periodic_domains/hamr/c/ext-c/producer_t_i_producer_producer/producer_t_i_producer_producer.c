#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_initialise_", 0);
}

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_finalise_", 0);
}

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_", 0);

  api_put_emit__base_test_event_port_periodic_domains_producer_t_i_producer_producer(SF_LAST);
}
