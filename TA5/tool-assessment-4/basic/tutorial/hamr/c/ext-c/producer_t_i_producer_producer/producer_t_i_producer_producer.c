#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

int32_t sent;
Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_initialise_", 0);
  sent = 0;
}

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_finalise_", 0);
}

Unit base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer.c", "", "base_test_event_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_", 0);
  
  uint8_t t0[numBytes_S32];
  t0[0] = (sent >> 24) & 0xFF;
  t0[1] = (sent >> 16) & 0xFF;
  t0[2] = (sent >> 8) & 0xFF;
  t0[3] = sent & 0xFF;
  
  printf("Sent %i\n", sent);
  hex_dump(t0, 4);
  printf("\n");
  
  sent++;
    
  api_put_write_port__base_test_event_data_port_periodic_domains_producer_t_i_producer_producer(SF numBits_S32, t0);
  
}
