#include <all.h>

// None[art.Bridge]

B None_734370__eq(None_734370 this, None_734370 other) {
  return T;
}

B None_734370__ne(None_734370 this, None_734370 other);

void None_734370_string_(STACK_FRAME String result, None_734370 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_734370_cprint(None_734370 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_734370__is(STACK_FRAME void* this);
None_734370 None_734370__as(STACK_FRAME void *this);

void None_734370_apply(STACK_FRAME None_734370 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_734370", "apply", 0);
}