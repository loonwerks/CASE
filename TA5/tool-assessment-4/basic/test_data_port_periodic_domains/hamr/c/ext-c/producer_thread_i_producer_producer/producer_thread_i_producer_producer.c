#include <producer_thread_i_producer_producer_api.h>
#include <producer_thread_i_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static uint8_t value = 0; 

Unit base_test_data_port_periodic_domains_producer_thread_i_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_thread_i_producer_producer.c", "", "base_test_data_port_periodic_domains_producer_thread_i_producer_producer_initialise_", 0);
}

Unit base_test_data_port_periodic_domains_producer_thread_i_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_thread_i_producer_producer.c", "", "base_test_data_port_periodic_domains_producer_thread_i_producer_producer_finalise_", 0);
}

Unit base_test_data_port_periodic_domains_producer_thread_i_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_thread_i_producer_producer.c", "", "base_test_data_port_periodic_domains_producer_thread_i_producer_producer_timeTriggered_", 0);
  
  uint8_t t0[numBytes_S8];
  t0[0] = value++;
  api_put_write_port__base_test_data_port_periodic_domains_producer_thread_i_producer_producer(SF numBits_S8, t0);
}
