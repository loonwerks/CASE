#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.FlightPattern

Z ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_numOfElements() {
  return Z_C(3);
      }

void ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_cprint(ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  switch (this) {
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_ZigZag: String_cprint(string("ZigZag"), isOut); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_StraightLine: String_cprint(string("StraightLine"), isOut); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_Perimeter: String_cprint(string("Perimeter"), isOut); return;
  }
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this) {
  DeclNewStackFrame(caller, "FlightPattern.scala", "ACT_Demo_Dec2018__camkes_X_SW_FlightPattern", "string", 0);
  switch (this) {
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_ZigZag: String_string(SF result, string("ZigZag")); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_StraightLine: String_string(SF result, string("StraightLine")); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_Perimeter: String_string(SF result, string("Perimeter")); return;
  }
}