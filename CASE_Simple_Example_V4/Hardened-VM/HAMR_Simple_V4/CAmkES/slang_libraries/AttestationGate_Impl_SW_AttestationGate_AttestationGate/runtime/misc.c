#include <misc.h>

B _T(STACK_FRAME_ONLY);
B _F(STACK_FRAME_ONLY);
void String_assign(String dest, String src);
B String__eq(String this, String other);
B String__ne(String this, String other);
Z String_size_(STACK_FRAME_SF String this);

void String__append(STACK_FRAME_SF String dest, String src) {
  Z srcSize = src->size;
  Z destSize = dest->size;
  Z size = srcSize + destSize;
  sfAssert(size <= MaxString, "Insufficient maximum for String characters.");
  for (Z i = Z_C(0); i < srcSize; i++) {
    dest->value[destSize + i] = src->value[i];
  }
  dest->value[size] = '\0';
  dest->size = size;
}

void B_string_(STACK_FRAME String result, B this) {
  DeclNewStackFrame(caller, "B.scala", "org.sireum.B", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this? (char) 'T' : (char) 'F';
  result->value[newSize] = '\0';
  result->size = newSize;
}

void C_string_(STACK_FRAME String result, C this) {
  DeclNewStackFrame(caller, "C.scala", "org.sireum.C", "string", 0);
  Z size = result->size;
  Z newSize = size + 1;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  result->value[size] = this;
  result->value[newSize] = '\0';
  result->size = newSize;
}

void Z_string_(STACK_FRAME String result, Z this) {
  DeclNewStackFrame(caller, "Z.scala", "org.sireum.Z", "string", 0);
  int nSize = snprintf(NULL, 0, Z_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z_F, this);
  result->size = newSize;
}

void F32_string_(STACK_FRAME String result, F32 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F32", "string", 0);
  int nSize = snprintf(NULL, 0, F32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F32_F, this);
  result->size = newSize;
}

void F64_string_(STACK_FRAME String result, F64 this) {
  DeclNewStackFrame(caller, "FloatingPoint.scala", "org.sireum.F64", "string", 0);
  int nSize = snprintf(NULL, 0, F64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, F64_F, this);
  result->size = newSize;
}

void R_string_(STACK_FRAME String result, R this) {
  DeclNewStackFrame(caller, "R.scala", "org.sireum.R", "string", 0);
  int nSize = snprintf(NULL, 0, R_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, R_F, this);
  result->size = newSize;
}

void String_string_(STACK_FRAME String result, String this) {
  DeclNewStackFrame(caller, "String.scala", "org.sireum.String", "string", 0);
  String__append(SF result, this);
}
