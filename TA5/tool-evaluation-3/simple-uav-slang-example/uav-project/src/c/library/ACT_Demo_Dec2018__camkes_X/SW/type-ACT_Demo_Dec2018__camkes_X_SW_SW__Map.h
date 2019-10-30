#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_SW__Map
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_SW__Map
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.SW__Map
#include <type-org_sireum_IS_5D0BE7.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map *ACT_Demo_Dec2018__camkes_X_SW_SW__Map;
struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map {
  TYPE type;
  struct IS_5D0BE7 value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_SW__Map(x) struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map x = { .type = TACT_Demo_Dec2018__camkes_X_SW_SW__Map }


#endif