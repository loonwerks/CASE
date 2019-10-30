#include <all.h>

// IS[Z, (Z, Z)]

B IS_AA0F82__eq(IS_AA0F82 this, IS_AA0F82 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Tuple2_EC3B57__ne((Tuple2_EC3B57) &this->value[i], (Tuple2_EC3B57) &other->value[i])) return F;
  }
  return T;
}

void IS_AA0F82_create(STACK_FRAME IS_AA0F82 result, Z size, Tuple2_EC3B57 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_EC3B57));
  }
  result->size = zize;
}

void IS_AA0F82_zreate(STACK_FRAME IS_AA0F82 result, Z size, Tuple2_EC3B57 dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct Tuple2_EC3B57));
  }
  result->size = zize;
}

void IS_AA0F82__append(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_AA0F82));
  Type_assign(&result->value[thisSize], value, sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) (thisSize + 1);
}

void IS_AA0F82__prepend(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct Tuple2_EC3B57));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) thisSize + 1;
}

void IS_AA0F82__appendAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_AA0F82, "Insufficient maximum for IS[Z, (Z, Z)] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_AA0F82));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(struct Tuple2_EC3B57));
  result->size = (int8_t) thisSize + otherSize;
}

void IS_AA0F82__remove(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, Tuple2_EC3B57 value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Tuple2_EC3B57 o = (Tuple2_EC3B57) &this->value[i];
    if (Tuple2_EC3B57__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct Tuple2_EC3B57));
  }
  result->size = k;
}

void IS_AA0F82__removeAll(STACK_FRAME IS_AA0F82 result, IS_AA0F82 this, IS_AA0F82 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Tuple2_EC3B57 o = (Tuple2_EC3B57) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Tuple2_EC3B57__eq(o, (Tuple2_EC3B57) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct Tuple2_EC3B57));
  }
  result->size = k;
}

void IS_AA0F82_cprint(IS_AA0F82 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_EC3B57 *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    Tuple2_EC3B57_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Tuple2_EC3B57_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_AA0F82_string(STACK_FRAME String result, IS_AA0F82 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct Tuple2_EC3B57 *value = this->value;
    String space = string(" ");
    String_string(SF result, space);
    Tuple2_EC3B57_string(SF result, (Tuple2_EC3B57) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(SF result, string(", "));
      Tuple2_EC3B57_string(SF result, (Tuple2_EC3B57) &(value[i]));
    }
    String_string(SF result, space);
  }
  String_string(SF result, string("]"));
}