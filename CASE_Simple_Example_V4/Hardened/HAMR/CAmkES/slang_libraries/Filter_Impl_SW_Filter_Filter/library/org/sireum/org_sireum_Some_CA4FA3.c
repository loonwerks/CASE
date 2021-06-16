#include <all.h>

// Some[HAMR.SW.Filter_Impl_Initialization_Api]

B Some_CA4FA3__eq(Some_CA4FA3 this, Some_CA4FA3 other) {
  if (HAMR_SW_Filter_Impl_Initialization_Api__ne((HAMR_SW_Filter_Impl_Initialization_Api) &this->value, (HAMR_SW_Filter_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_CA4FA3__ne(Some_CA4FA3 this, Some_CA4FA3 other);

void Some_CA4FA3_string_(STACK_FRAME String result, Some_CA4FA3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_Filter_Impl_Initialization_Api_string_(SF result, (HAMR_SW_Filter_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_CA4FA3_cprint(Some_CA4FA3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_Filter_Impl_Initialization_Api_cprint((HAMR_SW_Filter_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_CA4FA3__is(STACK_FRAME void* this);
Some_CA4FA3 Some_CA4FA3__as(STACK_FRAME void *this);

void Some_CA4FA3_apply(STACK_FRAME Some_CA4FA3 this, HAMR_SW_Filter_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_CA4FA3", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_Filter_Impl_Initialization_Api));
}