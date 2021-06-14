#include <all.h>

// Some[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B Some_2E1D55__eq(Some_2E1D55 this, Some_2E1D55 other) {
  if (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__ne((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_2E1D55__ne(Some_2E1D55 this, Some_2E1D55 other);

void Some_2E1D55_string_(STACK_FRAME String result, Some_2E1D55 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_string_(SF result, (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_2E1D55_cprint(Some_2E1D55 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_cprint((CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_2E1D55__is(STACK_FRAME void* this);
Some_2E1D55 Some_2E1D55__as(STACK_FRAME void *this);

void Some_2E1D55_apply(STACK_FRAME Some_2E1D55 this, CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_2E1D55", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api));
}