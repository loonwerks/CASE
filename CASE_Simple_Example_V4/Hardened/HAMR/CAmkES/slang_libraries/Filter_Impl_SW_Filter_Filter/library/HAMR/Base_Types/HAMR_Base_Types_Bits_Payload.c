#include <all.h>

// HAMR.Base_Types.Bits_Payload

B HAMR_Base_Types_Bits_Payload__eq(HAMR_Base_Types_Bits_Payload this, HAMR_Base_Types_Bits_Payload other) {
  if (IS_C4F575__ne((IS_C4F575) &this->value, (IS_C4F575) &other->value)) return F;
  return T;
}

B HAMR_Base_Types_Bits_Payload__ne(HAMR_Base_Types_Bits_Payload this, HAMR_Base_Types_Bits_Payload other);

void HAMR_Base_Types_Bits_Payload_string_(STACK_FRAME String result, HAMR_Base_Types_Bits_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "HAMR.Base_Types.Bits_Payload", "string", 0);
  String_string_(SF result, string("Bits_Payload("));
  IS_C4F575_string_(SF result, (IS_C4F575) &this->value);
  String_string_(SF result, string(")"));
}

void HAMR_Base_Types_Bits_Payload_cprint(HAMR_Base_Types_Bits_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Bits_Payload("), isOut);
  IS_C4F575_cprint((IS_C4F575) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B HAMR_Base_Types_Bits_Payload__is(STACK_FRAME void* this);
HAMR_Base_Types_Bits_Payload HAMR_Base_Types_Bits_Payload__as(STACK_FRAME void *this);

void HAMR_Base_Types_Bits_Payload_apply(STACK_FRAME HAMR_Base_Types_Bits_Payload this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "HAMR.Base_Types.Bits_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_C4F575));
}