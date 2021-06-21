#include <all.h>

// art.Empty

B art_Empty__eq(art_Empty this, art_Empty other) {
  return T;
}

B art_Empty__ne(art_Empty this, art_Empty other);

void art_Empty_string_(STACK_FRAME String result, art_Empty this) {
  DeclNewStackFrame(caller, "DataContent.scala", "art.Empty", "string", 0);
  String_string_(SF result, string("Empty("));
  String_string_(SF result, string(")"));
}

void art_Empty_cprint(art_Empty this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Empty("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Empty__is(STACK_FRAME void* this);
art_Empty art_Empty__as(STACK_FRAME void *this);

void art_Empty_apply(STACK_FRAME art_Empty this) {
  DeclNewStackFrame(caller, "DataContent.scala", "art.Empty", "apply", 0);
}