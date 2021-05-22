#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  size_t *numBits,
  uint8_t *byteArray){
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_get_read_port__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_30119F = Option[IS[Z, B]]
  // Some_8D03B1 = Some[IS[Z, B]]
  DeclNewOption_30119F(t_0);

  // Option_46E989 = Option[base.test_data_port_periodic_domains.consumer_t_i_Operational_Api]
  DeclNewbase_test_data_port_periodic_domains_consumer_t_i_Operational_Api(api);
  Option_46E989_get_(SF (base_test_data_port_periodic_domains_consumer_t_i_Operational_Api) &api, base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_operational_api(SF_LAST));

  base_test_data_port_periodic_domains_consumer_t_i_Operational_Api_get_read_port_(
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

void api_logInfo__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logInfo__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_58FF78 = Option[base.test_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_58FF78_get_(SF (base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logDebug__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_58FF78 = Option[base.test_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_58FF78_get_(SF (base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logError__base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_58FF78 = Option[base.test_data_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_58FF78_get_(SF (base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise(
  STACK_FRAME
  base_test_data_port_periodic_domains_consumer_t_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise", 0);

  base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(SF_LAST);
}

Unit base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise(
  STACK_FRAME
  base_test_data_port_periodic_domains_consumer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise", 0);

  base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(SF_LAST);
}

Unit base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered(
  STACK_FRAME
  base_test_data_port_periodic_domains_consumer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered", 0);

  base_test_data_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_(SF_LAST);
}
