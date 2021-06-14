#include <all.h>

// MS[Z, IS[Z, Z]]
IS_82ABD8 MS_E444B2_at(MS_E444B2 this, Z i);
void MS_E444B2_up(MS_E444B2 this, Z i, IS_82ABD8 e);
Z MS_E444B2_size(STACK_FRAME MS_E444B2 this);
Z MS_E444B2_zize(STACK_FRAME MS_E444B2 this);

B MS_E444B2__eq(MS_E444B2 this, MS_E444B2 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (IS_82ABD8__ne((IS_82ABD8) &this->value[i], (IS_82ABD8) &other->value[i])) return F;
  }
  return T;
}

void MS_E444B2_create(STACK_FRAME MS_E444B2 result, Z size, IS_82ABD8 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_E444B2, "Insufficient maximum for MS[Z, IS[Z, Z]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct IS_82ABD8));
  }
  result->size = zize;
}

void MS_E444B2__append(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_E444B2, "Insufficient maximum for MS[Z, IS[Z, Z]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_E444B2));
  Type_assign(&result->value[thisSize], value, sizeof(struct IS_82ABD8));
  result->size = (int8_t) (thisSize + 1);
}

void MS_E444B2__prepend(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_E444B2, "Insufficient maximum for MS[Z, IS[Z, Z]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct IS_82ABD8));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct IS_82ABD8));
  result->size = (int8_t) thisSize + 1;
}

void MS_E444B2__appendAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_E444B2, "Insufficient maximum for MS[Z, IS[Z, Z]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_E444B2));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct IS_82ABD8));
}

void MS_E444B2__sub(STACK_FRAME MS_E444B2 result, MS_E444B2 this, IS_82ABD8 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    IS_82ABD8 o = (IS_82ABD8) &this->value[i];
    if (IS_82ABD8__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct IS_82ABD8));
  }
  result->size = k;
}

void MS_E444B2__removeAll(STACK_FRAME MS_E444B2 result, MS_E444B2 this, MS_E444B2 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    IS_82ABD8 o = (IS_82ABD8) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (IS_82ABD8__eq(o, (IS_82ABD8) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct IS_82ABD8));
  }
  result->size = k;
}

void MS_E444B2_cprint(MS_E444B2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct IS_82ABD8 *value = this->value;
    IS_82ABD8_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      IS_82ABD8_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_E444B2_string_(STACK_FRAME String result, MS_E444B2 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct IS_82ABD8 *value = this->value;
    IS_82ABD8_string_(SF result, (IS_82ABD8) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      IS_82ABD8_string_(SF result, (IS_82ABD8) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_E444B2__ne(MS_E444B2 this, MS_E444B2 other);
