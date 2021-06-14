#include <all.h>

// CASE_MONITOR2_TEST.Base_Types.Bits_Payload

B CASE_MONITOR2_TEST_Base_Types_Bits_Payload__eq(CASE_MONITOR2_TEST_Base_Types_Bits_Payload this, CASE_MONITOR2_TEST_Base_Types_Bits_Payload other) {
  if (IS_C4F575__ne((IS_C4F575) &this->value, (IS_C4F575) &other->value)) return F;
  return T;
}

B CASE_MONITOR2_TEST_Base_Types_Bits_Payload__ne(CASE_MONITOR2_TEST_Base_Types_Bits_Payload this, CASE_MONITOR2_TEST_Base_Types_Bits_Payload other);

void CASE_MONITOR2_TEST_Base_Types_Bits_Payload_string_(STACK_FRAME String result, CASE_MONITOR2_TEST_Base_Types_Bits_Payload this) {
  DeclNewStackFrame(caller, "Base_Types.scala", "CASE_MONITOR2_TEST.Base_Types.Bits_Payload", "string", 0);
  String_string_(SF result, string("Bits_Payload("));
  IS_C4F575_string_(SF result, (IS_C4F575) &this->value);
  String_string_(SF result, string(")"));
}

void CASE_MONITOR2_TEST_Base_Types_Bits_Payload_cprint(CASE_MONITOR2_TEST_Base_Types_Bits_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Bits_Payload("), isOut);
  IS_C4F575_cprint((IS_C4F575) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B CASE_MONITOR2_TEST_Base_Types_Bits_Payload__is(STACK_FRAME void* this);
CASE_MONITOR2_TEST_Base_Types_Bits_Payload CASE_MONITOR2_TEST_Base_Types_Bits_Payload__as(STACK_FRAME void *this);

void CASE_MONITOR2_TEST_Base_Types_Bits_Payload_apply(STACK_FRAME CASE_MONITOR2_TEST_Base_Types_Bits_Payload this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Base_Types.scala", "CASE_MONITOR2_TEST.Base_Types.Bits_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_C4F575));
}