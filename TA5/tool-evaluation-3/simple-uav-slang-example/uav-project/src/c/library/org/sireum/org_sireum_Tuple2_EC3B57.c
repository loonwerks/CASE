#include <all.h>

// (Z, Z)

void Tuple2_EC3B57_apply(STACK_FRAME Tuple2_EC3B57 this, Z _1, Z _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  this->_1 = _1;
  this->_2 = _2;
}

B Tuple2_EC3B57__eq(Tuple2_EC3B57 this, Tuple2_EC3B57 other) {
  if (Z__ne(this->_1, other->_1)) return F;
  if (Z__ne(this->_2, other->_2)) return F;
  return T;
}

void Tuple2_EC3B57_cprint(Tuple2_EC3B57 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  Z_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_EC3B57_string(STACK_FRAME String result, Tuple2_EC3B57 this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string(SF result, string("("));
  Z_string(SF result, this->_1);
  String_string(SF result, sep);
  Z_string(SF result, this->_2);
  String_string(SF result, string(")"));
}