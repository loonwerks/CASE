#include <all.h>

// art.PortMode.Type

B art_PortMode_Type__eq(art_PortMode_Type this, art_PortMode_Type other);
B art_PortMode_Type__ne(art_PortMode_Type this, art_PortMode_Type other);
Z art_PortMode_Type__ordinal(art_PortMode_Type this);
void art_PortMode_Type_name_(String result, art_PortMode_Type this);

Z art_PortMode_Type_numOfElements(void) {
  return Z_C(4);
}

void art_PortMode_Type_cprint(art_PortMode_Type this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case art_PortMode_Type_DataIn: String_cprint(string("DataIn"), isOut); return;
    case art_PortMode_Type_DataOut: String_cprint(string("DataOut"), isOut); return;
    case art_PortMode_Type_EventIn: String_cprint(string("EventIn"), isOut); return;
    case art_PortMode_Type_EventOut: String_cprint(string("EventOut"), isOut); return;
  }
  #endif
}

void art_PortMode_Type_string_(STACK_FRAME String result, art_PortMode_Type this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art_PortMode_Type", "string", 0);
  switch (this) {
    case art_PortMode_Type_DataIn: String_string_(SF result, string("DataIn")); return;
    case art_PortMode_Type_DataOut: String_string_(SF result, string("DataOut")); return;
    case art_PortMode_Type_EventIn: String_string_(SF result, string("EventIn")); return;
    case art_PortMode_Type_EventOut: String_string_(SF result, string("EventOut")); return;
  }
}