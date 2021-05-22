#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_get_read_port__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_F1A21C = Option[base.test_event_data_port_periodic_domains.consumer_t_i_Operational_Api]
  DeclNewbase_test_event_data_port_periodic_domains_consumer_t_i_Operational_Api(api);
  Option_F1A21C_get_(SF (base_test_event_data_port_periodic_domains_consumer_t_i_Operational_Api) &api, base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_operational_api(SF_LAST));

  base_test_event_data_port_periodic_domains_consumer_t_i_Operational_Api_get_read_port_(
    SF
    (Option_30119F) &t_0,
    &api);

  if(t_0.type == TSome_8D03B1){
    *numBits = t_0.Some_8D03B1.value.size;
    if(*numBits > 0) {
      size_t numBytes = (*numBits - 1) / 8 + 1;
      memcpy(byteArray, &t_0.Some_8D03B1.value.value, numBytes);
    }
    return true;
  } else {
    return false;
  }
}

void api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logInfo__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_0CB775 = Option[base.test_event_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_0CB775_get_(SF (base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logDebug__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_0CB775 = Option[base.test_event_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_0CB775_get_(SF (base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logError__base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_0CB775 = Option[base.test_event_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_0CB775_get_(SF (base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise(
  STACK_FRAME
  base_test_event_data_port_periodic_domains_consumer_t_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise", 0);

  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(SF_LAST);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise(
  STACK_FRAME
  base_test_event_data_port_periodic_domains_consumer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise", 0);

  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(SF_LAST);
}

Unit base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port(
  STACK_FRAME
  base_test_event_data_port_periodic_domains_consumer_t_i_Operational_Api api,
  IS_C4F575 value) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port", 0);

  base_test_event_data_port_periodic_domains_consumer_t_i_consumer_consumer_handle_read_port_(SF value);
}
