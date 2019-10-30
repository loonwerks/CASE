#include <all.h>

// (Z, art.DataContent)

void Tuple2_D0E3BB_apply(STACK_FRAME Tuple2_D0E3BB this, Z _1, art_DataContent _2) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "apply", 0);
  this->_1 = _1;
  Type_assign(&(this->_2), _2, sizeof(union art_DataContent));
}

B Tuple2_D0E3BB__eq(Tuple2_D0E3BB this, Tuple2_D0E3BB other) {
  if (Z__ne(this->_1, other->_1)) return F;
  if (art_DataContent__ne((art_DataContent) &this->_2, (art_DataContent) &other->_2)) return F;
  return T;
}

void Tuple2_D0E3BB_cprint(Tuple2_D0E3BB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String sep = string(", ");
  String_cprint(string("("), isOut);
  Z_cprint(this->_1, isOut);
  String_cprint(sep, isOut);
  art_DataContent_cprint(&this->_2, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Tuple2_D0E3BB_string(STACK_FRAME String result, Tuple2_D0E3BB this) {
  DeclNewStackFrame(caller, "Tuple2.scala", "org.sireum.Tuple2", "string", 0);
  String sep = string(", ");
  String_string(SF result, string("("));
  Z_string(SF result, this->_1);
  String_string(SF result, sep);
  art_DataContent_string(SF result, (art_DataContent) &this->_2);
  String_string(SF result, string(")"));
}