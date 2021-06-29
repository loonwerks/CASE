#include <all.h>

// Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

B Some_993707__eq(Some_993707 this, Some_993707 other) {
  if (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api__ne((hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &this->value, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_993707__ne(Some_993707 this, Some_993707 other);

void Some_993707_string_(STACK_FRAME String result, Some_993707 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_993707_cprint(Some_993707 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api_cprint((hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_993707__is(STACK_FRAME void* this);
Some_993707 Some_993707__as(STACK_FRAME void *this);

void Some_993707_apply(STACK_FRAME Some_993707 this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_993707", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api));
}