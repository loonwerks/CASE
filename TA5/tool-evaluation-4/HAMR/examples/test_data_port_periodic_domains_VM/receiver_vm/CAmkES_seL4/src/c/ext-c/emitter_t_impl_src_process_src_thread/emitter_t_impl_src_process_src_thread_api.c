#include <emitter_t_impl_src_process_src_thread_api.h>
#include <emitter_t_impl_src_process_src_thread.h>

static bool apis_initialized = false;
static struct receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api initialization_api;
static struct receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Operational_Api operational_api;

static void initialize_apis(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "initialize_apis", 0);

  // Option_5E9E54 = Option[receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_Initialization_Api]
  Option_5E9E54_get_(SF (receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api) &initialization_api, receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_Bridge_c_initialization_api(SF_LAST));
  // Option_DD8228 = Option[receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_Operational_Api]
  Option_DD8228_get_(SF (receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Operational_Api) &operational_api, receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_Bridge_c_operational_api(SF_LAST));
  apis_initialized = true;
}

// This file was auto-generated.  Do not edit

void api_put_write_port__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(
  STACK_FRAME
  S8 value) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "api_put_write_port__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api_put_write_port_(
    SF
    &initialization_api,
    value);
}

void api_logInfo__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "api_logInfo__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api_logInfo_(
    SF
    &initialization_api,
    str);
}

void api_logDebug__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "api_logDebug__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api_logDebug_(
    SF
    &initialization_api,
    str);
}

void api_logError__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(
  STACK_FRAME
  String str) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "api_logError__receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread", 0);

  if(!apis_initialized) { initialize_apis(SF_LAST); }

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api_logError_(
    SF
    &initialization_api,
    str);
}

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Initialization_Api api) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise", 0);

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_(SF_LAST);
}

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise", 0);

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise_(SF_LAST);
}

Unit receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered(
  STACK_FRAME
  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_Operational_Api api) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread_api.c", "", "receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered", 0);

  receiver_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered_(SF_LAST);
}
