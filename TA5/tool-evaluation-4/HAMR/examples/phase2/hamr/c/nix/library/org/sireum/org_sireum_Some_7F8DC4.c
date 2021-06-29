#include <all.h>

// Some[hamr.SW.UxAS_thr_Impl_Operational_Api]

B Some_7F8DC4__eq(Some_7F8DC4 this, Some_7F8DC4 other) {
  if (hamr_SW_UxAS_thr_Impl_Operational_Api__ne((hamr_SW_UxAS_thr_Impl_Operational_Api) &this->value, (hamr_SW_UxAS_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_7F8DC4__ne(Some_7F8DC4 this, Some_7F8DC4 other);

void Some_7F8DC4_string_(STACK_FRAME String result, Some_7F8DC4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_UxAS_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_UxAS_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_7F8DC4_cprint(Some_7F8DC4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_UxAS_thr_Impl_Operational_Api_cprint((hamr_SW_UxAS_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_7F8DC4__is(STACK_FRAME void* this);
Some_7F8DC4 Some_7F8DC4__as(STACK_FRAME void *this);

void Some_7F8DC4_apply(STACK_FRAME Some_7F8DC4 this, hamr_SW_UxAS_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_7F8DC4", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_UxAS_thr_Impl_Operational_Api));
}