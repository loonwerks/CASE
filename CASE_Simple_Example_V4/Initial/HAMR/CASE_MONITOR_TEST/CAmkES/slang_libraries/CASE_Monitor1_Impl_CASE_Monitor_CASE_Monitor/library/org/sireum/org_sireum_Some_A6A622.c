#include <all.h>

// Some[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B Some_A6A622__eq(Some_A6A622 this, Some_A6A622 other) {
  if (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api__ne((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value, (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_A6A622__ne(Some_A6A622 this, Some_A6A622 other);

void Some_A6A622_string_(STACK_FRAME String result, Some_A6A622 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_string_(SF result, (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_A6A622_cprint(Some_A6A622 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api_cprint((CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_A6A622__is(STACK_FRAME void* this);
Some_A6A622 Some_A6A622__as(STACK_FRAME void *this);

void Some_A6A622_apply(STACK_FRAME Some_A6A622 this, CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_A6A622", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api));
}