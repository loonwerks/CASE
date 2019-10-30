#ifndef SIREUM_TYPE_H_org_sireum_Some_E9D1E5
#define SIREUM_TYPE_H_org_sireum_Some_E9D1E5
#include <misc.h>

// Some[(Z, art.DataContent)]
#include <type-org_sireum_Tuple2_D0E3BB.h>

typedef struct Some_E9D1E5 *Some_E9D1E5;
struct Some_E9D1E5 {
  TYPE type;
  struct Tuple2_D0E3BB value;
};

#define DeclNewSome_E9D1E5(x) struct Some_E9D1E5 x = { .type = TSome_E9D1E5 }

#endif