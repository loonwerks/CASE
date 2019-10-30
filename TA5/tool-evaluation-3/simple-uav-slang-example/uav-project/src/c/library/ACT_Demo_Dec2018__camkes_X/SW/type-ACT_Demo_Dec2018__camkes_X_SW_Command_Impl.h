#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Command_Impl
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.Command_Impl
#include <type-ACT_Demo_Dec2018__camkes_X_SW_SW__Map.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl *ACT_Demo_Dec2018__camkes_X_SW_Command_Impl;
struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map theMap;
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern Pattern;
  B HMAC;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl(x) struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl x = { .type = TACT_Demo_Dec2018__camkes_X_SW_Command_Impl }


#endif