#include <all.h>

// Some[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

B Some_C4344F__eq(Some_C4344F this, Some_C4344F other) {
  if (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api__ne((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &this->value, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_C4344F__ne(Some_C4344F this, Some_C4344F other);

void Some_C4344F_string_(STACK_FRAME String result, Some_C4344F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api_string_(SF result, (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_C4344F_cprint(Some_C4344F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api_cprint((CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_C4344F__is(STACK_FRAME void* this);
Some_C4344F Some_C4344F__as(STACK_FRAME void *this);

void Some_C4344F_apply(STACK_FRAME Some_C4344F this, CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_C4344F", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api));
}