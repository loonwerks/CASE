#include <all.h>

// IS[Z, art.Bridge]
art_Bridge IS_7E8796_at(IS_7E8796 this, Z i);
void IS_7E8796_up(IS_7E8796 this, Z i, art_Bridge e);
Z IS_7E8796_size(STACK_FRAME IS_7E8796 this);
Z IS_7E8796_zize(STACK_FRAME IS_7E8796 this);

B IS_7E8796__eq(IS_7E8796 this, IS_7E8796 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_Bridge__ne((art_Bridge) &this->value[i], (art_Bridge) &other->value[i])) return F;
  }
  return T;
}

void IS_7E8796_create(STACK_FRAME IS_7E8796 result, Z size, art_Bridge dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_Bridge));
  }
  result->size = zize;
}

void IS_7E8796__append(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_7E8796));
  Type_assign(&result->value[thisSize], value, sizeof(union art_Bridge));
  result->size = (int8_t) (thisSize + 1);
}

void IS_7E8796__prepend(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_Bridge));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_Bridge));
  result->size = (int8_t) thisSize + 1;
}

void IS_7E8796__appendAll(STACK_FRAME IS_7E8796 result, IS_7E8796 this, IS_7E8796 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_7E8796));
  result->size = (int8_t) thisSize + otherSize;
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i + 1], sizeof(union art_Bridge));
}

void IS_7E8796__sub(STACK_FRAME IS_7E8796 result, IS_7E8796 this, art_Bridge value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_Bridge o = (art_Bridge) &this->value[i];
    if (art_Bridge__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_Bridge));
  }
  result->size = k;
}

void IS_7E8796__removeAll(STACK_FRAME IS_7E8796 result, IS_7E8796 this, IS_7E8796 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    B found = F;
    art_Bridge o = (art_Bridge) &this->value[i];
    for (int8_t j = 0; j < otherSize && !found; j++)
      if (art_Bridge__eq(o, (art_Bridge) &other->value[j])) found = T;
    if (!found) Type_assign(&result->value[k++], o, sizeof(union art_Bridge));
  }
  result->size = k;
}

void IS_7E8796_cprint(IS_7E8796 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_Bridge *value = this->value;
    art_Bridge_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_Bridge_cprint(&value[i], isOut);
    }
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_7E8796_string_(STACK_FRAME String result, IS_7E8796 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_Bridge *value = this->value;
    art_Bridge_string_(SF result, (art_Bridge) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string_(SF result, string(", "));
      art_Bridge_string_(SF result, (art_Bridge) &(value[i]));
    }
  }
  String_string_(SF result, string("]"));
}

B IS_7E8796__ne(IS_7E8796 this, IS_7E8796 other);
