#include <all.h>

// IS[Z, art.UConnection]
art_UConnection IS_08117A_at(IS_08117A this, Z i);
void IS_08117A_up(IS_08117A this, Z i, art_UConnection e);
Z IS_08117A_size(STACK_FRAME IS_08117A this);
Z IS_08117A_zize(STACK_FRAME IS_08117A this);

B IS_08117A__eq(IS_08117A this, IS_08117A other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_UConnection__ne((art_UConnection) &this->value[i], (art_UConnection) &other->value[i])) return F;
  }
  return T;
}

void IS_08117A_create(STACK_FRAME IS_08117A result, Z size, art_UConnection dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_UConnection));
  }
  result->size = zize;
}

void IS_08117A__append(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_08117A));
  Type_assign(&result->value[thisSize], value, sizeof(union art_UConnection));
  result->size = (int8_t) (thisSize + 1);
}

void IS_08117A__prepend(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_UConnection));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_UConnection));
  result->size = (int8_t) thisSize + 1;
}

void IS_08117A__appendAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_08117A));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union art_UConnection));
}

void IS_08117A__sub(STACK_FRAME IS_08117A result, IS_08117A this, art_UConnection value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_UConnection o = (art_UConnection) &this->value[i];
    if (art_UConnection__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_08117A__removeAll(STACK_FRAME IS_08117A result, IS_08117A this, IS_08117A other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_UConnection o = (art_UConnection) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_UConnection__eq(o, (art_UConnection) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_UConnection));
  }
  result->size = k;
}

void IS_08117A_cprint(IS_08117A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    art_UConnection_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_UConnection_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_08117A_string_(STACK_FRAME String result, IS_08117A this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_UConnection *value = this->value;
    art_UConnection_string_(SF result, (art_UConnection) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_UConnection_string_(SF result, (art_UConnection) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_08117A__ne(IS_08117A this, IS_08117A other);
