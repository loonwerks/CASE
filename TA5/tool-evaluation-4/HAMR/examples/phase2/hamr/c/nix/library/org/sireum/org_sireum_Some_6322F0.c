#include <all.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

B Some_6322F0__eq(Some_6322F0 this, Some_6322F0 other) {
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api__ne((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->value, (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_6322F0__ne(Some_6322F0 this, Some_6322F0 other);

void Some_6322F0_string_(STACK_FRAME String result, Some_6322F0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6322F0_cprint(Some_6322F0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api_cprint((hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6322F0__is(STACK_FRAME void* this);
Some_6322F0 Some_6322F0__as(STACK_FRAME void *this);

void Some_6322F0_apply(STACK_FRAME Some_6322F0 this, hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6322F0", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api));
}