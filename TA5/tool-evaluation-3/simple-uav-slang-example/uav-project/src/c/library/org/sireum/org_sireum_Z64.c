#include <all.h>

#include <errno.h>

void Z64_string(STACK_FRAME String result, Z64 this) {
  DeclNewStackFrame(caller, "BitsRangeTypes.scala", "org.sireum.Z64", "string", 0);
  int nSize = snprintf(NULL, 0, Z64_F, this);
  Z size = result->size;
  Z newSize = size + nSize;
  sfAssert(newSize <= MaxString, "Insufficient maximum for String characters.");
  snprintf(&(result->value[result->size]), nSize + 1, Z64_F, this);
  result->size = newSize;
}