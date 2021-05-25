#include <consumer_t_i_consumer_consumer_api.h>
#include <consumer_t_i_consumer_consumer.h>

// This file was auto-generated.  Do not edit

bool api_get_consume__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer(STACK_FRAME_ONLY){
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_get_consume__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_FB1130 = Option[base.test_event_port_periodic_domains.consumer_t_i_Operational_Api]
  DeclNewbase_test_event_port_periodic_domains_consumer_t_i_Operational_Api(api);
  Option_FB1130_get_(SF (base_test_event_port_periodic_domains_consumer_t_i_Operational_Api) &api, base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_operational_api(SF_LAST));

  // Option_C622DB = Option[art.Empty]
  // Some_4782C6 = Some[art.Empty]
  DeclNewOption_C622DB(t_0);
  base_test_event_port_periodic_domains_consumer_t_i_Operational_Api_get_consume_(
    SF
    (Option_C622DB) &t_0,
    &api);

  if(t_0.type == TSome_4782C6){
    return true;
  } else {
    return false;
  }
}

void api_logInfo__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logInfo__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_6288B6 = Option[base.test_event_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_6288B6_get_(SF (base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logDebug__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_6288B6 = Option[base.test_event_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_6288B6_get_(SF (base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "api_logError__base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer", 0);

  // Option_6288B6 = Option[base.test_event_port_periodic_domains.consumer_t_i_Initialization_Api]
  DeclNewbase_test_event_port_periodic_domains_consumer_t_i_Initialization_Api(api);
  Option_6288B6_get_(SF (base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api) &api, base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_Bridge_c_initialization_api(SF_LAST));

  base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_initialise(
  STACK_FRAME
  base_test_event_port_periodic_domains_consumer_t_i_Initialization_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_initialise", 0);

  base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_initialise_(SF_LAST);
}

Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_finalise(
  STACK_FRAME
  base_test_event_port_periodic_domains_consumer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_finalise", 0);

  base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_finalise_(SF_LAST);
}

Unit base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered(
  STACK_FRAME
  base_test_event_port_periodic_domains_consumer_t_i_Operational_Api api) {
  DeclNewStackFrame(caller, "consumer_t_i_consumer_consumer_api.c", "", "base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered", 0);

  base_test_event_port_periodic_domains_consumer_t_i_consumer_consumer_timeTriggered_(SF_LAST);
}
