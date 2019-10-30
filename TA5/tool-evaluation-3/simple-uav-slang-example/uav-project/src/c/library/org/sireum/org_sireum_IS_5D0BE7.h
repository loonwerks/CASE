#ifndef SIREUM_H_org_sireum_IS_5D0BE7
#define SIREUM_H_org_sireum_IS_5D0BE7
#include <types.h>

// IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
B IS_5D0BE7__eq(IS_5D0BE7 this, IS_5D0BE7 other);
void IS_5D0BE7_create(STACK_FRAME IS_5D0BE7 result, Z size, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl dflt);
void IS_5D0BE7_zreate(STACK_FRAME IS_5D0BE7 result, Z size, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl dflt);
void IS_5D0BE7__append(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value);
void IS_5D0BE7__prepend(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value);
void IS_5D0BE7__appendAll(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, IS_5D0BE7 other);
void IS_5D0BE7__remove(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl value);
void IS_5D0BE7__removeAll(STACK_FRAME IS_5D0BE7 result, IS_5D0BE7 this, IS_5D0BE7 other);
void IS_5D0BE7_cprint(IS_5D0BE7 this, B isOut);
void IS_5D0BE7_string(STACK_FRAME String result, IS_5D0BE7 this);

static inline B IS_5D0BE7__ne(IS_5D0BE7 this, IS_5D0BE7 other) {
  return !IS_5D0BE7__eq(this, other);
}


#endif