#include <all.h>

// MS[Z, Option[art.Bridge]]
Option_7BBFBE MS_83D5EB_at(MS_83D5EB this, Z i);
void MS_83D5EB_up(MS_83D5EB this, Z i, Option_7BBFBE e);
Z MS_83D5EB_size(STACK_FRAME MS_83D5EB this);
Z MS_83D5EB_zize(STACK_FRAME MS_83D5EB this);

B MS_83D5EB__eq(MS_83D5EB this, MS_83D5EB other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (Option_7BBFBE__ne((Option_7BBFBE) &this->value[i], (Option_7BBFBE) &other->value[i])) return F;
  }
  return T;
}

void MS_83D5EB_create(STACK_FRAME MS_83D5EB result, Z size, Option_7BBFBE dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert((Z) size <= MaxMS_83D5EB, "Insufficient maximum for MS[Z, Option[art.Bridge]] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union Option_7BBFBE));
  }
  result->size = zize;
}

void MS_83D5EB__append(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_83D5EB, "Insufficient maximum for MS[Z, Option[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_83D5EB));
  Type_assign(&result->value[thisSize], value, sizeof(union Option_7BBFBE));
  result->size = (int8_t) (thisSize + 1);
}

void MS_83D5EB__prepend(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_83D5EB, "Insufficient maximum for MS[Z, Option[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union Option_7BBFBE));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union Option_7BBFBE));
  result->size = (int8_t) thisSize + 1;
}

void MS_83D5EB__appendAll(STACK_FRAME MS_83D5EB result, MS_83D5EB this, MS_83D5EB other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_83D5EB, "Insufficient maximum for MS[Z, Option[art.Bridge]] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_83D5EB));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union Option_7BBFBE));
}

void MS_83D5EB__sub(STACK_FRAME MS_83D5EB result, MS_83D5EB this, Option_7BBFBE value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    Option_7BBFBE o = (Option_7BBFBE) &this->value[i];
    if (Option_7BBFBE__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union Option_7BBFBE));
  }
  result->size = k;
}

void MS_83D5EB__removeAll(STACK_FRAME MS_83D5EB result, MS_83D5EB this, MS_83D5EB other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    Option_7BBFBE o = (Option_7BBFBE) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (Option_7BBFBE__eq(o, (Option_7BBFBE) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union Option_7BBFBE));
  }
  result->size = k;
}

void MS_83D5EB_cprint(MS_83D5EB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union Option_7BBFBE *value = this->value;
    Option_7BBFBE_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      Option_7BBFBE_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_83D5EB_string_(STACK_FRAME String result, MS_83D5EB this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union Option_7BBFBE *value = this->value;
    Option_7BBFBE_string_(SF result, (Option_7BBFBE) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      Option_7BBFBE_string_(SF result, (Option_7BBFBE) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B MS_83D5EB__ne(MS_83D5EB this, MS_83D5EB other);
