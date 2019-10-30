#include <all.h>

// IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]

B IS_5D0BE7__eq(IS_5D0BE7 this, IS_5D0BE7 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__ne((ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &this->value[i], (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &other->value[i])) return F;
  }
  return T;
}

void IS_5D0BE7_create(STACK_FRAME IS_5D0BE7 result, Z size, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert(size <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }
  result->size = zize;
}

void IS_5D0BE7_zreate(STACK_FRAME IS_5D0BE7 result, Z size, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "zreate", 0);
  sfAssert(size <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }
  result->size = zize;
}

void IS_5D0BE7__append(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_5D0BE7));
  Type_assign(&result->value[thisSize], value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  result->size = (int8_t) (thisSize + 1);
}

void IS_5D0BE7__prepend(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  result->size = (int8_t) thisSize + 1;
}

void IS_5D0BE7__appendAll(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, IS_5D0BE7 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_5D0BE7, "Insufficient maximum for IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_5D0BE7));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  result->size = (int8_t) thisSize + otherSize;
}

void IS_5D0BE7__remove(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl o = (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &this->value[i];
    if (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }
  result->size = k;
}

void IS_5D0BE7__removeAll(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, IS_5D0BE7 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl o = (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__eq(o, (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl));
  }
  result->size = k;
}

void IS_5D0BE7_cprint(IS_5D0BE7 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_5D0BE7_string(STACK_FRAME String result, IS_5D0BE7 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl *value = this->value;
    String space = string(" ");
    String_string(SF result, space);
    ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(SF result, string(", "));
      ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &(value[i]));
    }
    String_string(SF result, space);
  }
  String_string(SF result, string("]"));
}