#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl

#define ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_lat_(this) ((this)->lat)
#define ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_longitude_(this) ((this)->longitude)
#define ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_alt_(this) ((this)->alt)

B ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__ne(ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) this)->type == TACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl this, Z32 lat, Z32 longitude, Z32 alt);

#endif