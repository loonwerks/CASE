#include <all.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

B Some_481DA5__eq(Some_481DA5 this, Some_481DA5 other) {
  if (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api__ne((hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &this->value, (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_481DA5__ne(Some_481DA5 this, Some_481DA5 other);

void Some_481DA5_string_(STACK_FRAME String result, Some_481DA5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_481DA5_cprint(Some_481DA5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api_cprint((hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_481DA5__is(STACK_FRAME void* this);
Some_481DA5 Some_481DA5__as(STACK_FRAME void *this);

void Some_481DA5_apply(STACK_FRAME Some_481DA5 this, hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_481DA5", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api));
}