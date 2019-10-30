#include <all.h>

// art.ArchitectureDescription

B art_ArchitectureDescription__eq(art_ArchitectureDescription this, art_ArchitectureDescription other) {
  if (MS_852149__ne((MS_852149) &this->components, (MS_852149) &other->components)) return F;
  if (IS_08117A__ne((IS_08117A) &this->connections, (IS_08117A) &other->connections)) return F;
  return T;
}

B art_ArchitectureDescription__ne(art_ArchitectureDescription this, art_ArchitectureDescription other);

void art_ArchitectureDescription_string_(STACK_FRAME String result, art_ArchitectureDescription this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "string", 0);
  String_string_(SF result, string("ArchitectureDescription("));
  String sep = string(", ");
  MS_852149_string_(SF result, (MS_852149) &this->components);
  String_string_(SF result, sep);
  IS_08117A_string_(SF result, (IS_08117A) &this->connections);
  String_string_(SF result, string(")"));
}

void art_ArchitectureDescription_cprint(art_ArchitectureDescription this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ArchitectureDescription("), isOut);
  String sep = string(", ");
  MS_852149_cprint((MS_852149) &this->components, isOut);
  String_cprint(sep, isOut);
  IS_08117A_cprint((IS_08117A) &this->connections, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_ArchitectureDescription__is(STACK_FRAME void* this);
art_ArchitectureDescription art_ArchitectureDescription__as(STACK_FRAME void *this);

void art_ArchitectureDescription_apply(STACK_FRAME art_ArchitectureDescription this, MS_852149 components, IS_08117A connections) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.ArchitectureDescription", "apply", 0);
  Type_assign(&this->components, components, sizeof(struct MS_852149));
  Type_assign(&this->connections, connections, sizeof(struct IS_08117A));
}