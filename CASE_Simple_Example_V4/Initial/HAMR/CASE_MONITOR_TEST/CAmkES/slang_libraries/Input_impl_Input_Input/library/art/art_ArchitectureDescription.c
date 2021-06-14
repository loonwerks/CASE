#include <all.h>

// art.ArchitectureDescription

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  if (IS_7E8796__ne((IS_7E8796) &this->components, (IS_7E8796) &other->components)) return F;
  if (IS_08117A__ne((IS_08117A) &this->connections, (IS_08117A) &other->connections)) return F;
  return T;
}

B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other);

void art_ArchitectureDescription_string_(STACK_FRAME String result, art_ArchitectureDescription this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "string", 0);
  String_string_(SF result, string("ArchitectureDescription("));
  String sep = string(", ");
  IS_7E8796_string_(SF result, (IS_7E8796) &this->components);
  String_string_(SF result, sep);
  IS_08117A_string_(SF result, (IS_08117A) &this->connections);
  String_string_(SF result, string(")"));
}

void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ArchitectureDescription("), isOut);
  String sep = string(", ");
  IS_7E8796_cprint((IS_7E8796) &this->components, isOut);
  String_cprint(sep, isOut);
  IS_08117A_cprint((IS_08117A) &this->connections, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_ArchitectureDescription__is(STACK_FRAME void* this);
art_ArchitectureDescription art_ArchitectureDescription__as(STACK_FRAME void *this);

void art_ArchitectureDescription_apply(STACK_FRAME art_ArchitectureDescription this, IS_7E8796 components, IS_08117A connections) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "apply", 0);
  Type_assign(&this->components, components, sizeof(struct IS_7E8796));
  Type_assign(&this->connections, connections, sizeof(struct IS_08117A));
}