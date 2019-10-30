#include <all.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Impl

B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl__eq(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__ne((ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) &this->api, (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) &other->api)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl this) {
  DeclNewStackFrame(caller, "Radio_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Impl", "string", 0);
  String_string(SF result, string("Radio_Impl_Impl("));
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_string(SF result, (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) &this->api);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_cprint(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Radio_Impl_Impl("), isOut);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_cprint((ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api) &this->api, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api api) {
  DeclNewStackFrame(caller, "Radio_Impl_Impl.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Impl", "apply", 0);
  Type_assign(&this->api, api, sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api));
}