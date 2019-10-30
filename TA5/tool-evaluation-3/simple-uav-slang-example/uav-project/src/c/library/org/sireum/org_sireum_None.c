#include <all.h>

Z None_76463B_get_(STACK_FRAME None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  DeclNewString(t_0);
  String t_1 = (String) &t_0;
  String_string(SF t_1, string("Invalid \'None\' operation \'get\'."));
  sfAbort(t_1->value);
  abort();
}

B None_93AA2B_isEmpty_(STACK_FRAME None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "isEmpty", 0);
  return T;
}

void None_0CCA05_get_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission result, None_0CCA05 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "get", 0);

  sfUpdateLoc(110);
  DeclNewString(t_0);
  String t_1 = (String) &t_0;
  String_string(SF t_1, string("Invalid \'None\' operation \'get\'."));
  sfAbort(t_1->value);
  abort();
}

B None_964667_nonEmpty_(STACK_FRAME None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "nonEmpty", 0);
  return F;
}