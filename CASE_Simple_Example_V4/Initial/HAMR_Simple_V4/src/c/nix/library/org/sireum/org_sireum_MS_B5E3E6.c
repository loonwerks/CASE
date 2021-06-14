#include <all.h>

// MS[Z, IS[Z, (Z, Z)]]
IS_AA0F82 MS_B5E3E6_at(MS_B5E3E6 this, Z i);
void MS_B5E3E6_up(MS_B5E3E6 this, Z i, IS_AA0F82 e);
Z MS_B5E3E6_size(STACK_FRAME MS_B5E3E6 this);
Z MS_B5E3E6_zize(STACK_FRAME MS_B5E3E6 this);

B MS_B5E3E6__eq(MS_B5E3E6 this, MS_B5E3E6 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (IS_AA0F82__ne((IS_AA0F82) &this->value[i], (IS_AA0F82) &other->value[i])) return F;
  }
  return T;
}

void MS_B5E3E6_create(STACK_FRAME MS_B5E3E6 result, Z size, IS_AA0F82 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct IS_AA0F82));
  }
  result->size = zize;
}

void MS_B5E3E6__append(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_B5E3E6));
  Type_assign(&result->value[thisSize], value, sizeof(struct IS_AA0F82));
  result->size = (int8_t) (thisSize + 1);
}

void MS_B5E3E6__prepend(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct IS_AA0F82));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct IS_AA0F82));
  result->size = (int8_t) thisSize + 1;
}

void MS_B5E3E6__appendAll(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, MS_B5E3E6 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_B5E3E6, "Insufficient maximum for MS[Z, IS[Z, (Z, Z)]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_B5E3E6));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(struct IS_AA0F82));
}

void MS_B5E3E6__sub(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, IS_AA0F82 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    IS_AA0F82 o = (IS_AA0F82) &this->value[i];
    if (IS_AA0F82__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct IS_AA0F82));
  }
  result->size = k;
}

void MS_B5E3E6__removeAll(STACK_FRAME MS_B5E3E6 result, MS_B5E3E6 this, MS_B5E3E6 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    IS_AA0F82 o = (IS_AA0F82) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (IS_AA0F82__eq(o, (IS_AA0F82) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct IS_AA0F82));
  }
  result->size = k;
}

void MS_B5E3E6_cprint(MS_B5E3E6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct IS_AA0F82 *value = this->value;
    IS_AA0F82_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      IS_AA0F82_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_B5E3E6_string_(STACK_FRAME String result, MS_B5E3E6 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct IS_AA0F82 *value = this->value;
    IS_AA0F82_string_(SF result, (IS_AA0F82) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      IS_AA0F82_string_(SF result, (IS_AA0F82) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_B5E3E6__ne(MS_B5E3E6 this, MS_B5E3E6 other);
