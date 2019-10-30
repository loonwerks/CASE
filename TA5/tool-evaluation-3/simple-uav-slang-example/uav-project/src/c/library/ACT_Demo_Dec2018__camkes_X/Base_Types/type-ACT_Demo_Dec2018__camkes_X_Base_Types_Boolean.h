#ifndef SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean
#define SIREUM_TYPE_H_ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean
#include <misc.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean

typedef struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean *ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean;
struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean {
  TYPE type;
  B value;
};

#define DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Boolean(x) struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean x = { .type = TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean }


#endif