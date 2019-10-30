#include <all.h>

// MS[Z, art.Bridge]

B MS_852149__eq(MS_852149 this, MS_852149 other) {
  int8_t size = this->size;
  if (size != other->size) return F;
  for (int8_t i = 0; i < size; i++) {
    if (art_Bridge__ne((art_Bridge) &this->value[i], (art_Bridge) &other->value[i])) return F;
  }
  return T;
}

void MS_852149_create(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "create", 0);
  sfAssert(size <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_Bridge));
  }
  result->size = zize;
}

void MS_852149_zreate(STACK_FRAME MS_852149 result, Z size, art_Bridge dflt) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "zreate", 0);
  sfAssert(size <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  int8_t zize = (int8_t) size;
  for (int8_t i = 0; i < zize; i++) {
    Type_assign(&result->value[i], dflt, sizeof(union art_Bridge));
  }
  result->size = zize;
}

void MS_852149__append(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", ":+", 0);
  sfAssert(this->size + 1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct MS_852149));
  Type_assign(&result->value[thisSize], value, sizeof(union art_Bridge));
  result->size = (int8_t) (thisSize + 1);
}

void MS_852149__prepend(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "+:", 0);
  sfAssert(this->size + 1 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  Type_assign(&result->value[0], value, sizeof(union art_Bridge));
  for (int8_t i = 0; i < thisSize; i++)
    Type_assign(&result->value[i + 1], &this->value[i], sizeof(union art_Bridge));
  result->size = (int8_t) thisSize + 1;
}

void MS_852149__appendAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "++", 0);
  sfAssert(this->size + other->size <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  int8_t thisSize = this->size;
  int8_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct MS_852149));
  for (int8_t i = 0; i < otherSize; i++)
    Type_assign(&result->value[thisSize + i], &other->value[i], sizeof(union art_Bridge));
  result->size = (int8_t) thisSize + otherSize;
}

void MS_852149__remove(STACK_FRAME MS_852149 result, MS_852149 this, art_Bridge value) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "-", 0);
  int8_t thisSize = this->size;
  int8_t k = 0;
  for (int8_t i = 0; i < thisSize; i++) {
    art_Bridge o = (art_Bridge) &this->value[i];
    if (art_Bridge__ne(o, value))
      Type_assign(&result->value[k++], o, sizeof(union art_Bridge));
  }
  result->size = k;
}

void MS_852149__removeAll(STACK_FRAME MS_852149 result, MS_852149 this, MS_852149 other) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "--", 0);
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

void MS_852149_cprint(MS_852149 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  int8_t size = this->size;
  if (size > 0) {
    union art_Bridge *value = this->value;
    String space = string(" ");
    String_cprint(space, isOut);
    art_Bridge_cprint(&value[0], isOut);
    for (int8_t i = 1; i < size; i++) {
      String_cprint(string(", "), isOut);
      art_Bridge_cprint(&value[i], isOut);
    }
    String_cprint(space, isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void MS_852149_string(STACK_FRAME String result, MS_852149 this) {
  DeclNewStackFrame(caller, "MS.scala", "org.sireum.MS", "string", 0);
  String_string(SF result, string("["));
  int8_t size = this->size;
  if (size > 0) {
    union art_Bridge *value = this->value;
    String space = string(" ");
    String_string(SF result, space);
    art_Bridge_string(SF result, (art_Bridge) &(value[0]));
    for (int8_t i = 1; i < size; i++) {
      String_string(SF result, string(", "));
      art_Bridge_string(SF result, (art_Bridge) &(value[i]));
    }
    String_string(SF result, space);
  }
  String_string(SF result, string("]"));
}