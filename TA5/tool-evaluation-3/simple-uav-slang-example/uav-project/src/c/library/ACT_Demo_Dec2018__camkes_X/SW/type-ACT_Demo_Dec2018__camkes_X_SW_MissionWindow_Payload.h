#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload
#include <type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.h>

typedef struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload *ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload;
struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload(x) struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload x = { .type = TACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload }


#endif