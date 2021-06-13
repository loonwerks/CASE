#include <Filter_Impl_SW_Filter_Filter_adapter.h>

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_adapter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseArchitecture", 0);

  HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseArchitecture(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_adapter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_initialiseEntryPoint", 0);

  HAMR_Filter_Impl_SW_Filter_Filter_Filter_initialiseEntryPoint(SF_LAST);
}

Unit HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_adapter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_computeEntryPoint", 0);

  HAMR_Filter_Impl_SW_Filter_Filter_Filter_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Filter_Impl_SW_Filter_Filter_adapter.c", "", "HAMR_SW_Filter_Impl_SW_Filter_Filter_adapter_entryPoints", 0);

  return HAMR_Filter_Impl_SW_Filter_Filter_Filter_entryPoints(SF_LAST);
}
