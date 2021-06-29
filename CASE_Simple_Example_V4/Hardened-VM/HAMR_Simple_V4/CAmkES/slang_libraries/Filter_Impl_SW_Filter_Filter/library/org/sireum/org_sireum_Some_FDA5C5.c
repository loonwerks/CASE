#include <all.h>

// Some[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

B Some_FDA5C5__eq(Some_FDA5C5 this, Some_FDA5C5 other) {
  if (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_FDA5C5__ne(Some_FDA5C5 this, Some_FDA5C5 other);

void Some_FDA5C5_string_(STACK_FRAME String result, Some_FDA5C5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_FDA5C5_cprint(Some_FDA5C5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_Filter_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_FDA5C5__is(STACK_FRAME void* this);
Some_FDA5C5 Some_FDA5C5__as(STACK_FRAME void *this);

void Some_FDA5C5_apply(STACK_FRAME Some_FDA5C5 this, HAMR_Simple_V4_SW_Filter_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_FDA5C5", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_Filter_Impl_Operational_Api));
}