#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Mission.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload *ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload;
struct ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_Mission value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission_Payload(x) struct ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload x = { .type = TACT_Demo_Dec2018__camkes_X_SW_Mission_Payload }


#endif