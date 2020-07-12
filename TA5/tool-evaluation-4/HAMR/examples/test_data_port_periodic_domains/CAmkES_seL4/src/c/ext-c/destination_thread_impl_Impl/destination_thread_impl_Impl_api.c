#include <destination_thread_impl_Impl_api.h>

// This file was auto-generated.  Do not edit

bool api_get_read_port__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl this,
  S8 *value){
  DeclNewStackFrame(caller, "destination_thread_impl_Impl_api.c", "", "api_get_read_port__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl", 0);

  // Option_FC3847 = Option[S8]
  // Some_240B2F = Some[S8]
  DeclNewOption_FC3847(t_0);
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Bridge_Api_getread_port_(
    SF
    (Option_FC3847) &t_0,
    test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl_api_(this));

  if(t_0.type == TSome_240B2F){
    *value = t_0.Some_240B2F.value;
    return true;
  } else {
    return false;
  }
}

void api_logInfo__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_Impl_api.c", "", "api_logInfo__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Bridge_Api_logInfo_(
    SF
    test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl_api_(this),
    str);
}

void api_logDebug__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_Impl_api.c", "", "api_logDebug__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Bridge_Api_logDebug_(
    SF
    test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl_api_(this),
    str);
}

void api_logError__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl(
  STACK_FRAME
  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl this,
  String str) {
  DeclNewStackFrame(caller, "destination_thread_impl_Impl_api.c", "", "api_logError__test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl", 0);

  test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Bridge_Api_logError_(
    SF
    test_data_port_periodic_domains_test_data_port_periodic_domains_destination_thread_impl_Impl_api_(this),
    str);
}
