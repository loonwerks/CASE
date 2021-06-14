#include <all.h>

#include <lib.h>

U8 U8__plus(U8 n);
U8 U8__minus(U8 n);
U8 U8__add(U8 n1, U8 n2);
U8 U8__sub(U8 n1, U8 n2);
U8 U8__mul(U8 n1, U8 n2);
U8 U8__div(U8 n1, U8 n2);
U8 U8__rem(U8 n1, U8 n2);
B U8__eq(U8 n1, U8 n2);
B U8__ne(U8 n1, U8 n2);
B U8__lt(U8 n1, U8 n2);
B U8__le(U8 n1, U8 n2);
B U8__gt(U8 n1, U8 n2);
B U8__ge(U8 n1, U8 n2);

U8 U8__complement(U8 n);
U8 U8__shl(U8 n1, U8 n2);
U8 U8__shr(U8 n1, U8 n2);
U8 U8__ushr(U8 n1, U8 n2);
U8 U8__and(U8 n1, U8 n2);
U8 U8__or(U8 n1, U8 n2);
U8 U8__xor(U8 n1, U8 n2);

void U8_string_(STACK_FRAME String result, U8 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.U8", "string", 0);
  int nSize = snprintf(NULL, 0, U8_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, U8_F, this);
  result->size = newSize;
}