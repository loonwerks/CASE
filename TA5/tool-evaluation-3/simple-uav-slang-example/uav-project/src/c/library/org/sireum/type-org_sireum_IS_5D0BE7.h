#ifndef SIREUM_TYPE_H_org_sireum_IS_5D0BE7
#define SIREUM_TYPE_H_org_sireum_IS_5D0BE7
#include <misc.h>

// IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.h>

#define MaxIS_5D0BE7 24
#define IS_5D0BE7SizeT int8_t

typedef struct IS_5D0BE7 *IS_5D0BE7;
struct IS_5D0BE7 {
  TYPE type;
  int8_t size;
  struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value[MaxIS_5D0BE7];
};

#define DeclNewIS_5D0BE7(x) struct IS_5D0BE7 x = { .type = TIS_5D0BE7 }

static inline Z IS_5D0BE7_size(STACK_FRAME IS_5D0BE7 this) {
   return (Z) (this)->size;
}

static inline Z IS_5D0BE7_zize(STACK_FRAME IS_5D0BE7 this) {
   return (Z) (this)->size;
}

#define IS_5D0BE7_at(this, i) ((ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) &((this)->value[(int8_t) (i)]))

#endif