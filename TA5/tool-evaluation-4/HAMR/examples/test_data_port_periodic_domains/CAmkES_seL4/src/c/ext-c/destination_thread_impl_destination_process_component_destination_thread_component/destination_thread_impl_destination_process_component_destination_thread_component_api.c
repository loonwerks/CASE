#include <destination_thread_impl_destination_process_component_destination_thread_component_api.h>
#include <destination_thread_impl_destination_process_component_destination_thread_component.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component(
  STACK_FRAME
  S8 *value){
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "api_get_read_port__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component", 0);

  // Option_CF3079 = Option[test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_Operational_Api]
  DeclNewtest_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Operational_Api(api);
  Option_CF3079_get_(SF (test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Operational_Api) &api, test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_Bridge_c_operational_api(SF_LAST));

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Operational_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    &api);

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "api_logInfo__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component", 0);

  // Option_1D6816 = Option[test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_Initialization_Api]
  DeclNewtest_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api(api);
  Option_1D6816_get_(SF (test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api) &api, test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_Bridge_c_initialization_api(SF_LAST));

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api_logInfo_(
    SF
    &api,
    str);
}

void api_logDebug__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "api_logDebug__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component", 0);

  // Option_1D6816 = Option[test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_Initialization_Api]
  DeclNewtest_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api(api);
  Option_1D6816_get_(SF (test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api) &api, test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_Bridge_c_initialization_api(SF_LAST));

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api_logDebug_(
    SF
    &api,
    str);
}

void api_logError__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "api_logError__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component", 0);

  // Option_1D6816 = Option[test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_Initialization_Api]
  DeclNewtest_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api(api);
  Option_1D6816_get_(SF (test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api) &api, test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_Bridge_c_initialization_api(SF_LAST));

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api_logError_(
    SF
    &api,
    str);
}

Unit test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_initialise(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_initialise", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_initialise_(SF_LAST);
}

Unit test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_finalise(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_finalise", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_finalise_(SF_LAST);
}

Unit test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_timeTriggered(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "destination_thread_impl_destination_process_component_destination_thread_component_api.c", "", "test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_timeTriggered", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_destination_process_component_destination_thread_component_timeTriggered_(SF_LAST);
}
