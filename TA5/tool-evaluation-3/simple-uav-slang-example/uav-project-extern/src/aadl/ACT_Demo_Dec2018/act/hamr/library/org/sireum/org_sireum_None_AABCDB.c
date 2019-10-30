#include <all.h>

// None[uav_project_extern.SW.Mission]

B None_AABCDB__eq(None_AABCDB this, None_AABCDB other) {
  return T;
}

B None_AABCDB__ne(None_AABCDB this, None_AABCDB other);

void None_AABCDB_string_(STACK_FRAME String result, None_AABCDB this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_AABCDB_cprint(None_AABCDB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_AABCDB__is(STACK_FRAME void* this);
None_AABCDB None_AABCDB__as(STACK_FRAME void *this);

void None_AABCDB_apply(STACK_FRAME None_AABCDB this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_AABCDB", "apply", 0);
}