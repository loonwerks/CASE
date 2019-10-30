#include <all.h>

#include <errno.h>

void Z32_string(STACK_FRAME String result, Z32 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.Z32", "string", 0);
  int nSize = snprintf(NULL, 0, Z32_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z32_F, this);
  result->size = newSize;
}