#include <all.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

B Some_DDE9FD__eq(Some_DDE9FD this, Some_DDE9FD other) {
  if (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_DDE9FD__ne(Some_DDE9FD this, Some_DDE9FD other);

void Some_DDE9FD_string_(STACK_FRAME String result, Some_DDE9FD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_DDE9FD_cprint(Some_DDE9FD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_DDE9FD__is(STACK_FRAME void* this);
Some_DDE9FD Some_DDE9FD__as(STACK_FRAME void *this);

void Some_DDE9FD_apply(STACK_FRAME Some_DDE9FD this, HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_DDE9FD", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api));
}