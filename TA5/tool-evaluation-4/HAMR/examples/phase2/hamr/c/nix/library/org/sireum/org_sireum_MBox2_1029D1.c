#include <all.h>

// MBox2[Z, Option[art.DataContent]]

B MBox2_1029D1__eq(MBox2_1029D1 this, MBox2_1029D1 other) {
  if (Z__ne(this->value1, other->value1)) return F;
  if (Option_8E9F45__ne((Option_8E9F45) &this->value2, (Option_8E9F45) &other->value2)) return F;
  return T;
}

B MBox2_1029D1__ne(MBox2_1029D1 this, MBox2_1029D1 other);

void MBox2_1029D1_string_(STACK_FRAME String result, MBox2_1029D1 this) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2", "string", 0);
  String_string_(SF result, string("MBox2("));
  String sep = string(", ");
  Z_string_(SF result, this->value1);
  String_string_(SF result, sep);
  Option_8E9F45_string_(SF result, (Option_8E9F45) &this->value2);
  String_string_(SF result, string(")"));
}

void MBox2_1029D1_cprint(MBox2_1029D1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MBox2("), isOut);
  String sep = string(", ");
  Z_cprint(this->value1, isOut);
  String_cprint(sep, isOut);
  Option_8E9F45_cprint((Option_8E9F45) &this->value2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MBox2_1029D1__is(STACK_FRAME void* this);
MBox2_1029D1 MBox2_1029D1__as(STACK_FRAME void *this);

void MBox2_1029D1_apply(STACK_FRAME MBox2_1029D1 this, Z value1, Option_8E9F45 value2) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2_1029D1", "apply", 0);
  this->value1 = value1;
  Type_assign(&this->value2, value2, sizeof(union Option_8E9F45));
}