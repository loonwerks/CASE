#include <all.h>

#include <errno.h>

S64 S64__plus(S64 n);
S64 S64__minus(S64 n);
S64 S64__add(S64 n1, S64 n2);
S64 S64__sub(S64 n1, S64 n2);
S64 S64__mul(S64 n1, S64 n2);
S64 S64__div(S64 n1, S64 n2);
S64 S64__rem(S64 n1, S64 n2);
B S64__eq(S64 n1, S64 n2);
B S64__ne(S64 n1, S64 n2);
B S64__lt(S64 n1, S64 n2);
B S64__le(S64 n1, S64 n2);
B S64__gt(S64 n1, S64 n2);
B S64__ge(S64 n1, S64 n2);

S64 S64__complement(S64 n);
S64 S64__shl(S64 n1, S64 n2);
S64 S64__shr(S64 n1, S64 n2);
S64 S64__ushr(S64 n1, S64 n2);
S64 S64__and(S64 n1, S64 n2);
S64 S64__or(S64 n1, S64 n2);
S64 S64__xor(S64 n1, S64 n2);

void S64_string_(STACK_FRAME String result, S64 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.S64", "string", 0);
  int nSize = snprintf(NULL, 0, S64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, S64_F, this);
  result->size = newSize;
}