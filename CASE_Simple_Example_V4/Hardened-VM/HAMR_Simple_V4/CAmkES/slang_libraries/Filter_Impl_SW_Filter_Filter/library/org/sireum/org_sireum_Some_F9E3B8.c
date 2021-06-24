#include <all.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

B Some_F9E3B8__eq(Some_F9E3B8 this, Some_F9E3B8 other) {
  if (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_F9E3B8__ne(Some_F9E3B8 this, Some_F9E3B8 other);

void Some_F9E3B8_string_(STACK_FRAME String result, Some_F9E3B8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_F9E3B8_cprint(Some_F9E3B8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_F9E3B8__is(STACK_FRAME void* this);
Some_F9E3B8 Some_F9E3B8__as(STACK_FRAME void *this);

void Some_F9E3B8_apply(STACK_FRAME Some_F9E3B8 this, HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_F9E3B8", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api));
}