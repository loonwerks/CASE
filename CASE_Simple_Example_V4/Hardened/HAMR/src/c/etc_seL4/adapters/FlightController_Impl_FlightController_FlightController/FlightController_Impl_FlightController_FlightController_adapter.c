#include <FlightController_Impl_FlightController_FlightController_adapter.h>

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_initialiseArchitecture(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_adapter.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_initialiseArchitecture", 0);

  HAMR_FlightController_Impl_FlightController_FlightController_FlightController_initialiseArchitecture(SF_LAST);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_initialiseEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_adapter.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_initialiseEntryPoint", 0);

  HAMR_FlightController_Impl_FlightController_FlightController_FlightController_initialiseEntryPoint(SF_LAST);
}

Unit HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_computeEntryPoint(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_adapter.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_computeEntryPoint", 0);

  HAMR_FlightController_Impl_FlightController_FlightController_FlightController_computeEntryPoint(SF_LAST);
}

art_Bridge_EntryPoints HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_entryPoints(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "FlightController_Impl_FlightController_FlightController_adapter.c", "", "HAMR_SW_FlightController_Impl_FlightController_FlightController_adapter_entryPoints", 0);

  return HAMR_FlightController_Impl_FlightController_FlightController_FlightController_entryPoints(SF_LAST);
}
