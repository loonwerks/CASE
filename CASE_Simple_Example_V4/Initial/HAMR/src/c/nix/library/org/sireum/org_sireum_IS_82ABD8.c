#include <all.h>

// IS[Z, Z]
Z IS_82ABD8_at(IS_82ABD8 this, Z i);
void IS_82ABD8_up(IS_82ABD8 this, Z i, Z e);
Z IS_82ABD8_size(STACK_FRAME IS_82ABD8 this);
Z IS_82ABD8_zize(STACK_FRAME IS_82ABD8 this);

B IS_82ABD8__eq(IS_82ABD8 this, IS_82ABD8 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Z__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

void IS_82ABD8_create(STACK_FRAME IS_82ABD8 result, Z size, Z dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void IS_82ABD8__append(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_82ABD8));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void IS_82ABD8__prepend(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void IS_82ABD8__appendAll(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, IS_82ABD8 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_82ABD8));
  result->size = (int8_t) (thisSize + otherSize);
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
}

void IS_82ABD8__sub(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, Z value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Z o = this->value[i];
    if (Z__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void IS_82ABD8__removeAll(STACK_FRAME IS_82ABD8 result, IS_82ABD8 this, IS_82ABD8 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Z o = this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Z__eq(o, other->value[j])) found = T;
    if (!found) result->value[k++] = o;
  }
  result->size = k;
}

void IS_82ABD8_cprint(IS_82ABD8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    Z *value = this->value;
    Z_cprint(value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Z_cprint(value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_82ABD8_string_(STACK_FRAME String result, IS_82ABD8 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    Z *value = this->value;
    Z_string_(SF result, value[0]);
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Z_string_(SF result, value[i]);
    }
  }
  String_string_(SF result, string("]"));
}

B IS_82ABD8__ne(IS_82ABD8 this, IS_82ABD8 other);

void IS_82ABD8_toMS(STACK_FRAME MS_30A5B4 result, IS_82ABD8 this);