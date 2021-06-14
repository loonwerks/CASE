#include <all.h>

// art.TimeTriggered

B art_TimeTriggered__eq(art_TimeTriggered this, art_TimeTriggered other) {
  return T;
}

B art_TimeTriggered__ne(art_TimeTriggered this, art_TimeTriggered other);

void art_TimeTriggered_string_(STACK_FRAME String result, art_TimeTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.TimeTriggered", "string", 0);
  String_string_(SF result, string("TimeTriggered("));
  String_string_(SF result, string(")"));
}

void art_TimeTriggered_cprint(art_TimeTriggered this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("TimeTriggered("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_TimeTriggered__is(STACK_FRAME void* this);
art_TimeTriggered art_TimeTriggered__as(STACK_FRAME void *this);

void art_TimeTriggered_apply(STACK_FRAME art_TimeTriggered this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.TimeTriggered", "apply", 0);
}