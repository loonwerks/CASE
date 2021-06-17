#ifndef SIREUM_H_org_sireum_MBox2_1029D1
#define SIREUM_H_org_sireum_MBox2_1029D1

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MBox2[Z, Option[art.DataContent]]

#define MBox2_1029D1_value1_(this) ((this)->value1)
#define MBox2_1029D1_value1_a(this, p_value) (this)->value1 = (p_value)
#define MBox2_1029D1_value2_(this) ((Option_8E9F45) &(this)->value2)
#define MBox2_1029D1_value2_a(this, p_value) Type_assign(&(this)->value2, p_value, sizeof(union Option_8E9F45))

B MBox2_1029D1__eq(MBox2_1029D1 this, MBox2_1029D1 other);
inline B MBox2_1029D1__ne(MBox2_1029D1 this, MBox2_1029D1 other) {
  return !MBox2_1029D1__eq(this, other);
};
void MBox2_1029D1_string_(STACK_FRAME String result, MBox2_1029D1 this);
void MBox2_1029D1_cprint(MBox2_1029D1 this, B isOut);

inline B MBox2_1029D1__is(STACK_FRAME void* this) {
  return ((MBox2_1029D1) this)->type == TMBox2_1029D1;
}

inline MBox2_1029D1 MBox2_1029D1__as(STACK_FRAME void *this) {
  if (MBox2_1029D1__is(CALLER this)) return (MBox2_1029D1) this;
  sfAbortImpl(CALLER "Invalid cast to MBox2[Z, Option[art.DataContent]].");
  abort();
}

void MBox2_1029D1_apply(STACK_FRAME MBox2_1029D1 this, Z value1, Option_8E9F45 value2);

#ifdef __cplusplus
}
#endif

#endif