#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_", 0);

  // examples of api setter and logging usage

  api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF string("Example logInfo"));

  api_logDebug__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF string("Example logDebug"));

  api_logError__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF string("Example logError"));
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_", 0);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_", 0);

  // examples of api getter usage

  uint8_t t0[numBytes_S32];
  size_t t0_numBits;
  if(api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF &t0_numBits, t0)) {
    // sanity check
    sfAssert(SF (Z) t0_numBits == numBits_S32, "numBits received does not match expected");

    DeclNewString(read_port_str);
    String__append(SF (String) &read_port_str, string("Received on read_port: "));
    byte_array_string(SF (String) &read_port_str, t0, numBytes_S32);
    api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(SF (String) &read_port_str);
  }
}
