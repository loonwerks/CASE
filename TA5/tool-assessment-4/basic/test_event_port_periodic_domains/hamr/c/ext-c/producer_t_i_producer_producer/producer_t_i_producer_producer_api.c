#include <producer_t_i_producer_producer_api.h>
#include <producer_t_i_producer_producer.h>

// This file was auto-generated.  Do not edit

void api_put_emit__base_test_event_port_periodic_domains_producer_t_i_producer_producer(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_put_emit__base_test_event_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_CFF091 = Option[base.test_event_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_CFF091_get_(SF (base_test_event_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_producer_t_i_Initialization_Api_put_emit_(
    SF
    &api);
}

void api_logInfo__base_test_event_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logInfo__base_test_event_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_CFF091 = Option[base.test_event_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_CFF091_get_(SF (base_test_event_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_producer_t_i_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__base_test_event_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logDebug__base_test_event_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_CFF091 = Option[base.test_event_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_CFF091_get_(SF (base_test_event_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_producer_t_i_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__base_test_event_port_periodic_domains_producer_t_i_producer_producer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "api_logError__base_test_event_port_periodic_domains_producer_t_i_producer_producer", 0);

  // Option_CFF091 = Option[base.test_event_port_periodic_domains.producer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_producer_t_i_Initialization_Api(api);
  Option_CFF091_get_(SF (base_test_event_port_periodic_domains_producer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_producer_t_i_producer_producer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_producer_t_i_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_initialise(
  STACK_FRAME
  base_test_event_port_periodic_domains_producer_t_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_initialise", 0);

  base_test_event_port_periodic_domains_producer_t_i_producer_producer_initialise_(SF_LAST);
}

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_finalise(
  STACK_FRAME
  base_test_event_port_periodic_domains_producer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_finalise", 0);

  base_test_event_port_periodic_domains_producer_t_i_producer_producer_finalise_(SF_LAST);
}

Unit base_test_event_port_periodic_domains_producer_t_i_producer_producer_timeTriggered(
  STACK_FRAME
  base_test_event_port_periodic_domains_producer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "producer_t_i_producer_producer_api.c", "", "base_test_event_port_periodic_domains_producer_t_i_producer_producer_timeTriggered", 0);

  base_test_event_port_periodic_domains_producer_t_i_producer_producer_timeTriggered_(SF_LAST);
}
