#ifndef SIREUM_TYPE_H_uav_project_extern_SW_FlightPattern
#define SIREUM_TYPE_H_uav_project_extern_SW_FlightPattern
#include <misc.h>

// uav_project_extern.SW.FlightPattern
typedef enum {
  uav_project_extern_SW_FlightPattern_ZigZag = 0,
  uav_project_extern_SW_FlightPattern_StraightLine = 1,
  uav_project_extern_SW_FlightPattern_Perimeter = 2
} uav_project_extern_SW_FlightPattern;

inline B uav_project_extern_SW_FlightPattern__eq(uav_project_extern_SW_FlightPattern this, uav_project_extern_SW_FlightPattern other) {
  return this == other;
}

inline B uav_project_extern_SW_FlightPattern__ne(uav_project_extern_SW_FlightPattern this, uav_project_extern_SW_FlightPattern other) {
  return this != other;
}

inline Z uav_project_extern_SW_FlightPattern__ordinal(uav_project_extern_SW_FlightPattern this) {
  return (Z) this;
}

inline void uav_project_extern_SW_FlightPattern_name_(String result, uav_project_extern_SW_FlightPattern this) {
  switch (this) {
    case uav_project_extern_SW_FlightPattern_ZigZag: String_assign(result, string("ZigZag")); return;
    case uav_project_extern_SW_FlightPattern_StraightLine: String_assign(result, string("StraightLine")); return;
    case uav_project_extern_SW_FlightPattern_Perimeter: String_assign(result, string("Perimeter")); return;
  }
}

#endif