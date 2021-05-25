#include <Monitor_Impl_SW_Monitor_Monitor_adapter.h>

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_adapter.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseArchitecture", 0);

  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseArchitecture(SF_LAST);
}

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_adapter.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_initialiseEntryPoint", 0);

  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_initialiseEntryPoint(SF_LAST);
}

Unit HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_adapter.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_computeEntryPoint", 0);

  HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Monitor_Impl_SW_Monitor_Monitor_adapter.c", "", "HAMR_SW_Monitor_Impl_SW_Monitor_Monitor_adapter_entryPoints", 0);

  return HAMR_Monitor_Impl_SW_Monitor_Monitor_Monitor_entryPoints(SF_LAST);
}
