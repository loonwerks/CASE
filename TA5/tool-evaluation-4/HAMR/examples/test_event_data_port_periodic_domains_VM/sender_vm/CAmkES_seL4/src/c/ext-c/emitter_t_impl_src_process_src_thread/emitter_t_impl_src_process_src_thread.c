#include <emitter_t_impl_src_process_src_thread_api.h>
#include <emitter_t_impl_src_process_src_thread.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

Unit sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_initialise_", 0);

  // examples of api setter and logging usage

  S8 t0 = sender_vm_Base_Types_Integer_8_example(SF_LAST);
  api_put_write_port__sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF t0);

  api_logInfo__sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logInfo"));

  api_logDebug__sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logDebug"));

  api_logError__sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread(SF string("Example logError"));
}

Unit sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_finalise_", 0);
}

Unit sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "emitter_t_impl_src_process_src_thread.c", "", "sender_vm_test_event_data_port_periodic_domains_emitter_t_impl_src_process_src_thread_timeTriggered_", 0);

}
