#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Mission
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Mission
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.Mission
#include <type-org_sireum_IS_5D0BE7.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_Mission *ACT_Demo_Dec2018__camkes_X_SW_Mission;
struct ACT_Demo_Dec2018__camkes_X_SW_Mission {
  TYPE type;
  struct IS_5D0BE7 value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission(x) struct ACT_Demo_Dec2018__camkes_X_SW_Mission x = { .type = TACT_Demo_Dec2018__camkes_X_SW_Mission }


#endif