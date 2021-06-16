#include <all.h>

void None_D43E83_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Initialization_Api result, None_D43E83 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  {
    DeclNewString(t_0);
    String t_1 = (String) &t_0;
    String_string_(SF t_1, string("Invalid 'None' operation 'get'."));
    sfAbort(t_1->value);
    abort();
  }
}

void None_F62B67_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api result, None_F62B67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  {
    DeclNewString(t_0);
    String t_1 = (String) &t_0;
    String_string_(SF t_1, string("Invalid 'None' operation 'get'."));
    sfAbort(t_1->value);
    abort();
  }
}