#include <all.h>

// Some[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

B Some_CF7B75__eq(Some_CF7B75 this, Some_CF7B75 other) {
  if (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_CF7B75__ne(Some_CF7B75 this, Some_CF7B75 other);

void Some_CF7B75_string_(STACK_FRAME String result, Some_CF7B75 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_CF7B75_cprint(Some_CF7B75 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_CF7B75__is(STACK_FRAME void* this);
Some_CF7B75 Some_CF7B75__as(STACK_FRAME void *this);

void Some_CF7B75_apply(STACK_FRAME Some_CF7B75 this, HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_CF7B75", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api));
}