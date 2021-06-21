#include <all.h>

// IS[Z, B]
B IS_C4F575_at(IS_C4F575 this, Z i);
void IS_C4F575_up(IS_C4F575 this, Z i, B e);
Z IS_C4F575_size(STACK_FRAME IS_C4F575 this);
Z IS_C4F575_zize(STACK_FRAME IS_C4F575 this);
B IS_C4F575_isEmpty(STACK_FRAME IS_C4F575 this);
B IS_C4F575_nonEmpty(STACK_FRAME IS_C4F575 this);

B IS_C4F575__eq(IS_C4F575 this, IS_C4F575 other) {
  intmax_t size = this->size;
  if (size != other->size) return F;
  intmax_t n = size / 8;
  for (intmax_t i = 0; i < n; i++) {
    if (this->value[i] != other->value[i]) return F;
  }
  intmax_t m = size % 8;
  U8 mask = 1;
  for (intmax_t i = 0; i < m; i++) {
    if ((this->value[n] & mask) != (other->value[n] & mask)) return F;
    mask <<= 1;
  }
  return T;
}

void IS_C4F575_create(STACK_FRAME IS_C4F575 result, Z size, B dflt) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "create", 0);
  sfAssert((Z) size <= MaxIS_C4F575, "Insufficient maximum for IS[Z, B] elements.");
  intmax_t zize = (intmax_t) size;
  U8 d = (U8) (dflt ? -1 : 0);
  intmax_t n = zize / 8;
  for (intmax_t i = 0; i < n; i++) {
    result->value[i] = d;
  }
  intmax_t m = size % 8;
  U8 mask = 1;
  if (dflt) {
    for (intmax_t i = 0; i < m; i++) {
      result->value[n] |= mask;
      mask <<= 1;
    }
  } else {
    for (intmax_t i = 0; i < m; i++) {
      result->value[n] &= ~mask;
      mask <<= 1;
    }
  }
  result->size = zize;
}

void IS_C4F575__append(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", ":+", 0);
  sfAssert(this->size + 1 <= MaxIS_C4F575, "Insufficient maximum for IS[Z, B] elements.");
  intmax_t thisSize = this->size;
  Type_assign(result, this, sizeof(struct IS_C4F575));
  IS_C4F575_up(result, thisSize, value);
  result->size = (intmax_t) (thisSize + 1);
}

void IS_C4F575__prepend(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "+:", 0);
  sfAssert(this->size + 1 <= MaxIS_C4F575, "Insufficient maximum for IS[Z, B] elements.");
  intmax_t thisSize = this->size;
  IS_C4F575_up(result, 0, value);
  for (intmax_t i = 0; i < thisSize; i++)
    IS_C4F575_up(result, i + 1, IS_C4F575_at(this, i));
  result->size = (intmax_t) (thisSize + 1);
}

void IS_C4F575__appendAll(STACK_FRAME IS_C4F575 result, IS_C4F575 this, IS_C4F575 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "++", 0);
  sfAssert(this->size + other->size <= MaxIS_C4F575, "Insufficient maximum for IS[Z, B] elements.");
  intmax_t thisSize = this->size;
  intmax_t otherSize = other->size;
  Type_assign(result, this, sizeof(struct IS_C4F575));
  result->size = (int16_t) (thisSize + otherSize);
  for (int16_t i = 0; i < otherSize; i++)
    IS_C4F575_up(result, thisSize + i, IS_C4F575_at(other, i));
}

void IS_C4F575__sub(STACK_FRAME IS_C4F575 result, IS_C4F575 this, B value) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "-", 0);
  intmax_t thisSize = this->size;
  intmax_t k = 0;
  for (intmax_t i = 0; i < thisSize; i++) {
    B o = IS_C4F575_at(this, i);
    if (B__ne(o, value)) IS_C4F575_up(result, k++, o);
  }
  result->size = k;
}

void IS_C4F575__removeAll(STACK_FRAME IS_C4F575 result, IS_C4F575 this, IS_C4F575 other) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "--", 0);
  intmax_t thisSize = this->size;
  intmax_t otherSize = other->size;
  intmax_t k = 0;
  for (intmax_t i = 0; i < thisSize; i++) {
    B found = F;
    B o = IS_C4F575_at(this, i);
    for (intmax_t j = 0; j < otherSize && !found; j++)
      if (B__eq(o, IS_C4F575_at(other, j))) found = T;
    if (!found) IS_C4F575_up(result, k++, o);
  }
  result->size = k;
}

void IS_C4F575_cprint(IS_C4F575 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("["), isOut);
  intmax_t size = this->size;
  intmax_t n = size / 8;
  for (intmax_t i = 0; i < n; i++) {
    U8_cprint(this->value[i], isOut);
  }
  if (size % 8 != 0) {
    U8_cprint(this->value[n], isOut);
  }
  String_cprint(string("]"), isOut);
  #endif
}

void IS_C4F575_string_(STACK_FRAME String result, IS_C4F575 this) {
  DeclNewStackFrame(caller, "IS.scala", "org.sireum.IS", "string", 0);
  String_string_(SF result, string("["));
  intmax_t size = this->size;
  intmax_t n = size / 8;
  for (intmax_t i = 0; i < n; i++) {
    U8_string_(SF result, this->value[i]);
  }
  if (size % 8 != 0) {
    U8_string_(SF result, this->value[n]);
  }
  String_string_(SF result, string("]"));
}

B IS_C4F575__ne(IS_C4F575 this, IS_C4F575 other);
