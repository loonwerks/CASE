#include <all.h>

// art.PortMode

B art_PortMode__eq(art_PortMode this, art_PortMode other);
B art_PortMode__ne(art_PortMode this, art_PortMode other);
Z art_PortMode__ordinal(art_PortMode this);
void art_PortMode_name_(String result, art_PortMode this);

Z art_PortMode_numOfElements() {
  return Z_C(4);
}

void art_PortMode_cprint(art_PortMode this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case art_PortMode_DataIn: String_cprint(string("DataIn"), isOut); return;
    case art_PortMode_DataOut: String_cprint(string("DataOut"), isOut); return;
    case art_PortMode_EventIn: String_cprint(string("EventIn"), isOut); return;
    case art_PortMode_EventOut: String_cprint(string("EventOut"), isOut); return;
  }
  #endif
}

void art_PortMode_string_(STACK_FRAME String result, art_PortMode this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art_PortMode", "string", 0);
  switch (this) {
    case art_PortMode_DataIn: String_string_(SF result, string("DataIn")); return;
    case art_PortMode_DataOut: String_string_(SF result, string("DataOut")); return;
    case art_PortMode_EventIn: String_string_(SF result, string("EventIn")); return;
    case art_PortMode_EventOut: String_string_(SF result, string("EventOut")); return;
  }
}