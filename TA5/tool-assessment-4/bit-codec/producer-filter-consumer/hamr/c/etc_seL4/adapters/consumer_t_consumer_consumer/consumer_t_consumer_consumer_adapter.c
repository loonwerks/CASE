#include <consumer_t_consumer_consumer_adapter.h>

Unit pfc_PFC_consumer_t_consumer_consumer_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_adapter.c", "", "pfc_PFC_consumer_t_consumer_consumer_adapter_initialiseArchitecture", 0);

  pfc_consumer_t_consumer_consumer_consumer_initialiseArchitecture(SF_LAST);
}

Unit pfc_PFC_consumer_t_consumer_consumer_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_adapter.c", "", "pfc_PFC_consumer_t_consumer_consumer_adapter_initialiseEntryPoint", 0);

  pfc_consumer_t_consumer_consumer_consumer_initialiseEntryPoint(SF_LAST);
}

Unit pfc_PFC_consumer_t_consumer_consumer_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_adapter.c", "", "pfc_PFC_consumer_t_consumer_consumer_adapter_computeEntryPoint", 0);

  pfc_consumer_t_consumer_consumer_consumer_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints pfc_PFC_consumer_t_consumer_consumer_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "consumer_t_consumer_consumer_adapter.c", "", "pfc_PFC_consumer_t_consumer_consumer_adapter_entryPoints", 0);

  return pfc_consumer_t_consumer_consumer_consumer_entryPoints(SF_LAST);
}
