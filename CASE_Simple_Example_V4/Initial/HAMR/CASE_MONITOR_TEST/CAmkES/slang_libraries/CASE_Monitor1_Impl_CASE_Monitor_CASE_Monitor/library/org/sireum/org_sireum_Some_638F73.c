#include <all.h>

// Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B Some_638F73__eq(Some_638F73 this, Some_638F73 other) {
  if (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api__ne((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value, (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_638F73__ne(Some_638F73 this, Some_638F73 other);

void Some_638F73_string_(STACK_FRAME String result, Some_638F73 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_638F73_cprint(Some_638F73 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api_cprint((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_638F73__is(STACK_FRAME void* this);
Some_638F73 Some_638F73__as(STACK_FRAME void *this);

void Some_638F73_apply(STACK_FRAME Some_638F73 this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_638F73", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api));
}