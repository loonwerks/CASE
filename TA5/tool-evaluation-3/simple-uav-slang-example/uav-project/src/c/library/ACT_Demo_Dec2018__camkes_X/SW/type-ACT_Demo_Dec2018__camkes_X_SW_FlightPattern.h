#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_FlightPattern
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_FlightPattern
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.FlightPattern
typedef enum {
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_ZigZag = 0,
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_StraightLine = 1,
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_Perimeter = 2
} ACT_Demo_Dec2018__camkes_X_SW_FlightPattern;

static inline B ACT_Demo_Dec2018__camkes_X_SW_FlightPattern__eq(ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern other) {
  return this == other;
}

static inline B ACT_Demo_Dec2018__camkes_X_SW_FlightPattern__ne(ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern other) {
  return this != other;
}

static inline Z ACT_Demo_Dec2018__camkes_X_SW_FlightPattern__ordinal(ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this) {
  return (Z) this;
}

static inline void ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_name(String result, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern this) {
  switch (this) {
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_ZigZag: String_assign(result, string("ZigZag")); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_StraightLine: String_assign(result, string("StraightLine")); return;
    case ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_Perimeter: String_assign(result, string("Perimeter")); return;
  }
}

#endif