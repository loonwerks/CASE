#ifndef SIREUM_TYPE_H_org_sireum_Some_3B09D7
#define SIREUM_TYPE_H_org_sireum_Some_3B09D7
#include <misc.h>

// Some[ACT_Demo_Dec2018__camkes_X.SW.Mission]
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Mission.h>

typedef struct Some_3B09D7 *Some_3B09D7;
struct Some_3B09D7 {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_Mission value;
};

#define DeclNewSome_3B09D7(x) struct Some_3B09D7 x = { .type = TSome_3B09D7 }


#endif