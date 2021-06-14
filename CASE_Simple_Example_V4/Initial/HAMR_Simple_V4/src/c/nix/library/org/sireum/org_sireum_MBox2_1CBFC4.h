#ifndef SIREUM_H_org_sireum_MBox2_1CBFC4
#define SIREUM_H_org_sireum_MBox2_1CBFC4

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// MBox2[Z, art.DataContent]

#define MBox2_1CBFC4_value1_(this) ((this)->value1)
#define MBox2_1CBFC4_value1_a(this, p_value) (this)->value1 = (p_value)
#define MBox2_1CBFC4_value2_(this) ((art_DataContent) &(this)->value2)
#define MBox2_1CBFC4_value2_a(this, p_value) Type_assign(&(this)->value2, p_value, sizeof(union art_DataContent))

B MBox2_1CBFC4__eq(MBox2_1CBFC4 this, MBox2_1CBFC4 other);
inline B MBox2_1CBFC4__ne(MBox2_1CBFC4 this, MBox2_1CBFC4 other) {
  return !MBox2_1CBFC4__eq(this, other);
};
void MBox2_1CBFC4_string_(STACK_FRAME String result, MBox2_1CBFC4 this);
void MBox2_1CBFC4_cprint(MBox2_1CBFC4 this, B isOut);

inline B MBox2_1CBFC4__is(STACK_FRAME void* this) {
  return ((MBox2_1CBFC4) this)->type == TMBox2_1CBFC4;
}

inline MBox2_1CBFC4 MBox2_1CBFC4__as(STACK_FRAME void *this) {
  if (MBox2_1CBFC4__is(CALLER this)) return (MBox2_1CBFC4) this;
  sfAbortImpl(CALLER "Invalid cast to MBox2[Z, art.DataContent].");
  abort();
}

void MBox2_1CBFC4_apply(STACK_FRAME MBox2_1CBFC4 this, Z value1, art_DataContent value2);

#ifdef __cplusplus
}
#endif

#endif