#include <all.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

B Some_CA0A4D__eq(Some_CA0A4D this, Some_CA0A4D other) {
  if (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api__ne((hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &this->value, (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_CA0A4D__ne(Some_CA0A4D this, Some_CA0A4D other);

void Some_CA0A4D_string_(STACK_FRAME String result, Some_CA0A4D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_CA0A4D_cprint(Some_CA0A4D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api_cprint((hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_CA0A4D__is(STACK_FRAME void* this);
Some_CA0A4D Some_CA0A4D__as(STACK_FRAME void *this);

void Some_CA0A4D_apply(STACK_FRAME Some_CA0A4D this, hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_CA0A4D", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api));
}