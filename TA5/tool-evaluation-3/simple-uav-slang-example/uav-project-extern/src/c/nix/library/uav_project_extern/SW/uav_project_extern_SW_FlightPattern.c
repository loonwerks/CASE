#include <all.h>

// uav_project_extern.SW.FlightPattern

B uav_project_extern_SW_FlightPattern__eq(uav_project_extern_SW_FlightPattern this, uav_project_extern_SW_FlightPattern other);
B uav_project_extern_SW_FlightPattern__ne(uav_project_extern_SW_FlightPattern this, uav_project_extern_SW_FlightPattern other);
Z uav_project_extern_SW_FlightPattern__ordinal(uav_project_extern_SW_FlightPattern this);
void uav_project_extern_SW_FlightPattern_name_(String result, uav_project_extern_SW_FlightPattern this);

Z uav_project_extern_SW_FlightPattern_numOfElements() {
  return Z_C(3);
}

void uav_project_extern_SW_FlightPattern_cprint(uav_project_extern_SW_FlightPattern this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case uav_project_extern_SW_FlightPattern_ZigZag: String_cprint(string("ZigZag"), isOut); return;
    case uav_project_extern_SW_FlightPattern_StraightLine: String_cprint(string("StraightLine"), isOut); return;
    case uav_project_extern_SW_FlightPattern_Perimeter: String_cprint(string("Perimeter"), isOut); return;
  }
  #endif
}

void uav_project_extern_SW_FlightPattern_string_(STACK_FRAME String result, uav_project_extern_SW_FlightPattern this) {
  DeclNewStackFrame(caller, "FlightPattern.scala", "uav_project_extern_SW_FlightPattern", "string", 0);
  switch (this) {
    case uav_project_extern_SW_FlightPattern_ZigZag: String_string_(SF result, string("ZigZag")); return;
    case uav_project_extern_SW_FlightPattern_StraightLine: String_string_(SF result, string("StraightLine")); return;
    case uav_project_extern_SW_FlightPattern_Perimeter: String_string_(SF result, string("Perimeter")); return;
  }
}