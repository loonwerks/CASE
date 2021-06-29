#include <all.h>

// MS[Z, Option[art.DataContent]]
Option_8E9F45 MS_2590FE_at(MS_2590FE this, Z i);
void MS_2590FE_up(MS_2590FE this, Z i, Option_8E9F45 e);
Z MS_2590FE_size(STACK_FRAME MS_2590FE this);
Z MS_2590FE_zize(STACK_FRAME MS_2590FE this);

B MS_2590FE__eq(MS_2590FE this, MS_2590FE other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Option_8E9F45__ne((Option_8E9F45) &this->value[i], (Option_8E9F45) &other->value[i])) return F;
  }
  return T;
}

void MS_2590FE_create(STACK_FRAME MS_2590FE result, Z size, Option_8E9F45 dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union Option_8E9F45));
  }
  result->size = zize;
}

void MS_2590FE__append(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_2590FE));
  Type_assign(&result->value[thisSize], value, sizeof(union Option_8E9F45));
  result->size = (int8_t) (thisSize + 1);
}

void MS_2590FE__prepend(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union Option_8E9F45));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union Option_8E9F45));
  result->size = (int8_t) thisSize + 1;
}

void MS_2590FE__appendAll(STACK_FRAME MS_2590FE result, MS_2590FE this, MS_2590FE other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_2590FE, "Insufficient maximum for MS[Z, Option[art.DataContent]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_2590FE));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union Option_8E9F45));
}

void MS_2590FE__sub(STACK_FRAME MS_2590FE result, MS_2590FE this, Option_8E9F45 value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Option_8E9F45 o = (Option_8E9F45) &this->value[i];
    if (Option_8E9F45__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union Option_8E9F45));
  }
  result->size = k;
}

void MS_2590FE__removeAll(STACK_FRAME MS_2590FE result, MS_2590FE this, MS_2590FE other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Option_8E9F45 o = (Option_8E9F45) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Option_8E9F45__eq(o, (Option_8E9F45) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union Option_8E9F45));
  }
  result->size = k;
}

void MS_2590FE_cprint(MS_2590FE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union Option_8E9F45 *value = this->value;
    Option_8E9F45_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Option_8E9F45_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_2590FE_string_(STACK_FRAME String result, MS_2590FE this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union Option_8E9F45 *value = this->value;
    Option_8E9F45_string_(SF result, (Option_8E9F45) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Option_8E9F45_string_(SF result, (Option_8E9F45) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_2590FE__ne(MS_2590FE this, MS_2590FE other);
