#include <all.h>

// MBox2[Z, art.DataContent]

B MBox2_1CBFC4__eq(MBox2_1CBFC4 this, MBox2_1CBFC4 other) {
  if (Z__ne(this->value1, other->value1)) return F;
  if (art_DataContent__ne((art_DataContent) &this->value2, (art_DataContent) &other->value2)) return F;
  return T;
}

B MBox2_1CBFC4__ne(MBox2_1CBFC4 this, MBox2_1CBFC4 other);

void MBox2_1CBFC4_string_(STACK_FRAME String result, MBox2_1CBFC4 this) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2", "string", 0);
  String_string_(SF result, string("MBox2("));
  String sep = string(", ");
  Z_string_(SF result, this->value1);
  String_string_(SF result, sep);
  art_DataContent_string_(SF result, (art_DataContent) &this->value2);
  String_string_(SF result, string(")"));
}

void MBox2_1CBFC4_cprint(MBox2_1CBFC4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MBox2("), isOut);
  String sep = string(", ");
  Z_cprint(this->value1, isOut);
  String_cprint(sep, isOut);
  art_DataContent_cprint((art_DataContent) &this->value2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MBox2_1CBFC4__is(STACK_FRAME void* this);
MBox2_1CBFC4 MBox2_1CBFC4__as(STACK_FRAME void *this);

void MBox2_1CBFC4_apply(STACK_FRAME MBox2_1CBFC4 this, Z value1, art_DataContent value2) {
  DeclNewStackFrame(caller, "MBox.scala", "org.sireum.MBox2_1CBFC4", "apply", 0);
  this->value1 = value1;
  Type_assign(&this->value2, value2, sizeof(union art_DataContent));
}