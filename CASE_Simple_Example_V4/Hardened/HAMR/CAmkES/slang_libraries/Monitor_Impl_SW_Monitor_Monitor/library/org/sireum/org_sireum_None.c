#include <all.h>

void None_2A8B4A_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api result, None_2A8B4A this) {
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

void None_BE5310_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api result, None_BE5310 this) {
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

B None_964667_nonEmpty_(STACK_FRAME None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "nonEmpty", 0);
  return F;
}

void None_964667_get_(STACK_FRAME art_DataContent result, None_964667 this) {
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