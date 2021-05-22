#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>

// This file was auto-generated.  Do not edit

void api_put_write_port__base_test_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  size_t numBits,
  uint8_t *byteArray) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_put_write_port__base_test_data_port_periodic_domains_producer_t_i_producer_producer", 0);

  sfAssert(SF (Z) numBits >= 0, "numBits must be non-negative for IS[Z, B].");
  sfAssert(SF (Z) numBits <= MaxIS_C4F575, "numBits too large for IS[Z, B].");

  DeclNewIS_C4F575(t_0);

  t_0.size = numBits;
  if(numBits > 0) {
    size_t numBytes = (numBits - 1) / 8 + 1;
    memcpy(&t_0.value, byteArray, numBytes);
  }

  // Option_31D3EA = Option[base.test_data_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_31D3EA_get_(SF (base_test_data_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_producer_t_i_Initialization_Api_put_write_port_(
    SF
    &api,
    &t_0);
}

void api_logInfo__base_test_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logInfo__base_test_data_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_31D3EA = Option[base.test_data_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_31D3EA_get_(SF (base_test_data_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_producer_t_i_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__base_test_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logDebug__base_test_data_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_31D3EA = Option[base.test_data_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_31D3EA_get_(SF (base_test_data_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_producer_t_i_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__base_test_data_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logError__base_test_data_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_31D3EA = Option[base.test_data_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_data_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_31D3EA_get_(SF (base_test_data_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_data_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_data_port_periodic_domains_producer_t_i_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit base_test_data_port_periodic_domains_producer_t_i_producer_producer_initialise(
  STACK_FRAME
  base_test_data_port_periodic_domains_producer_t_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_data_port_periodic_domains_producer_t_i_producer_producer_initialise", 0);

  base_test_data_port_periodic_domains_producer_t_i_producer_producer_initialise_(SF_LAST);
}

Unit base_test_data_port_periodic_domains_producer_t_i_producer_producer_finalise(
  STACK_FRAME
  base_test_data_port_periodic_domains_producer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_data_port_periodic_domains_producer_t_i_producer_producer_finalise", 0);

  base_test_data_port_periodic_domains_producer_t_i_producer_producer_finalise_(SF_LAST);
}

Unit base_test_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered(
  STACK_FRAME
  base_test_data_port_periodic_domains_producer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered", 0);

  base_test_data_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(SF_LAST);
}
