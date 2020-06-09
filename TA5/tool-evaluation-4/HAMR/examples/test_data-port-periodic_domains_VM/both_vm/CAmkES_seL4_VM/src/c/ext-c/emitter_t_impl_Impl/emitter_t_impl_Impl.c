#include <emitter_t_impl_Impl_api.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl_initialise_(
  STACK_FRAME
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {
 // example api usage

 api_logInfo__CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, string("Example logInfo"));
 api_logDebug__CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, string("Example logDebug"));
 api_logError__CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl(this, string("Example logError"));
}

Unit CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl_finalise_(
  STACK_FRAME
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {
  // example finalise method
}

Unit CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl_timeTriggered_(
  STACK_FRAME
  CAmkES_seL4_VM_test_event_data_port_periodic_domains_emitter_t_impl_Impl this) {}
