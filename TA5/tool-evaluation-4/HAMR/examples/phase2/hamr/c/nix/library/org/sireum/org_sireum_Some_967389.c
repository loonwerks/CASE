#include <all.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

B Some_967389__eq(Some_967389 this, Some_967389 other) {
  if (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api__ne((hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->value, (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_967389__ne(Some_967389 this, Some_967389 other);

void Some_967389_string_(STACK_FRAME String result, Some_967389 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_967389_cprint(Some_967389 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api_cprint((hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_967389__is(STACK_FRAME void* this);
Some_967389 Some_967389__as(STACK_FRAME void *this);

void Some_967389_apply(STACK_FRAME Some_967389 this, hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_967389", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api));
}