#include <producer_t_producer_producer_adapter.h>

Unit pfc_PFC_producer_t_producer_producer_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_adapter.c", "", "pfc_PFC_producer_t_producer_producer_adapter_initialiseArchitecture", 0);

  pfc_producer_t_producer_producer_producer_initialiseArchitecture(SF_LAST);
}

Unit pfc_PFC_producer_t_producer_producer_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_adapter.c", "", "pfc_PFC_producer_t_producer_producer_adapter_initialiseEntryPoint", 0);

  pfc_producer_t_producer_producer_producer_initialiseEntryPoint(SF_LAST);
}

Unit pfc_PFC_producer_t_producer_producer_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_adapter.c", "", "pfc_PFC_producer_t_producer_producer_adapter_computeEntryPoint", 0);

  pfc_producer_t_producer_producer_producer_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints pfc_PFC_producer_t_producer_producer_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer_adapter.c", "", "pfc_PFC_producer_t_producer_producer_adapter_entryPoints", 0);

  return pfc_producer_t_producer_producer_producer_entryPoints(SF_LAST);
}
