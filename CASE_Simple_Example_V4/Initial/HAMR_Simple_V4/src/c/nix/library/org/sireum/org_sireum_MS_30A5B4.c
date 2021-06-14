#include <all.h>

// MS[Z, Z]
Z MS_30A5B4_at(MS_30A5B4 this, Z i);
void MS_30A5B4_up(MS_30A5B4 this, Z i, Z e);
Z MS_30A5B4_size(STACK_FRAME MS_30A5B4 this);
Z MS_30A5B4_zize(STACK_FRAME MS_30A5B4 this);

B MS_30A5B4__eq(MS_30A5B4 this, MS_30A5B4 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Z__ne(this->value[i], other->value[i])) return F;
  }
  return T;
}

void MS_30A5B4_create(STACK_FRAME MS_30A5B4 result, Z size, Z dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    result->value[i] = dflt;
  }
  result->size = zize;
}

void MS_30A5B4__append(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_30A5B4));
  result->value[thisSize] = value;
  result->size = (int8_t) (thisSize + 1);
}

void MS_30A5B4__prepend(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  int8_t thisSize = this->size;
  result->value[0] = value;
  for (int8_t i = 0; i < thisSize; i++)
    result->value[i + 1] = this->value[i];
  result->size = (int8_t) (thisSize + 1);
}

void MS_30A5B4__appendAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_30A5B4, "Insufficient maximum for MS[Z, Z] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_30A5B4));
  result->size = (int8_t) (thisSize + otherSize);
  for (int8_t i = 0; i < otherSize; i++)
    result->value[thisSize + i] = other->value[i];
}

void MS_30A5B4__sub(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, Z value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Z o = this->value[i];
    if (Z__ne(o, value)) result->value[k++] = o;
  }
  result->size = k;
}

void MS_30A5B4__removeAll(STACK_FRAME MS_30A5B4 result, MS_30A5B4 this, MS_30A5B4 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
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

void MS_30A5B4_cprint(MS_30A5B4 this, B isOut) {
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

void MS_30A5B4_string_(STACK_FRAME String result, MS_30A5B4 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
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

B MS_30A5B4__ne(MS_30A5B4 this, MS_30A5B4 other);

void MS_30A5B4_toIS(STACK_FRAME IS_82ABD8 result, MS_30A5B4 this);