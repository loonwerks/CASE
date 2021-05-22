#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_", 0);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_", 0);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_raw(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_raw", 0);

  size_t numBytes = numBits == 0 ? 0 : (numBits - 1) / 8 + 1;
  DeclNewString(read_portString);
  String__append(SF (String) &read_portString, string("Received on read_port: "));
  byte_array_string(SF (String) &read_portString, byteArray, numBytes);
  api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer (SF (String) &read_portString);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_(
  STACK_FRAME
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_", 0);

  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_raw(SF value->size, value->value);
}
