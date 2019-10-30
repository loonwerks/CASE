#include <all.h>

// ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl

B ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl__eq(ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl this, ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl other) {
  return T;
}

void ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl this) {
  DeclNewStackFrame(caller, "MISSING_TYPE_Impl.scala", "ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl", "string", 0);
  String_string(SF result, string("MISSING_TYPE_Impl("));
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl_cprint(ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MISSING_TYPE_Impl("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl this) {
  DeclNewStackFrame(caller, "MISSING_TYPE_Impl.scala", "ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl", "apply", 0);
}