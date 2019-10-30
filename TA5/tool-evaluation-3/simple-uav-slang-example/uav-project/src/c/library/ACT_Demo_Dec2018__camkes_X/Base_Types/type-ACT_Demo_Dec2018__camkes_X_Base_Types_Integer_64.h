#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64
#include <type-org_sireum_Z64.h>

typedef struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 *ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64;
struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 {
  TYPE type;
  Z64 value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64(x) struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 x = { .type = TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 }


#endif