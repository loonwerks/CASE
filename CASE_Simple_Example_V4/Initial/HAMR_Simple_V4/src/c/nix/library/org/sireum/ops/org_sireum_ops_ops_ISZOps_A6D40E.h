#ifndef SIREUM_H_org_sireum_ops_ops_ISZOps_A6D40E
#define SIREUM_H_org_sireum_ops_ops_ISZOps_A6D40E

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// ops.ISZOps[Z]

#define ops_ISZOps_A6D40E_s_(this) ((IS_82ABD8) &(this)->s)

B ops_ISZOps_A6D40E__eq(ops_ISZOps_A6D40E this, ops_ISZOps_A6D40E other);
inline B ops_ISZOps_A6D40E__ne(ops_ISZOps_A6D40E this, ops_ISZOps_A6D40E other) {
  return !ops_ISZOps_A6D40E__eq(this, other);
};
void ops_ISZOps_A6D40E_string_(STACK_FRAME String result, ops_ISZOps_A6D40E this);
void ops_ISZOps_A6D40E_cprint(ops_ISZOps_A6D40E this, B isOut);

inline B ops_ISZOps_A6D40E__is(STACK_FRAME void* this) {
  return ((ops_ISZOps_A6D40E) this)->type == Tops_ISZOps_A6D40E;
}

inline ops_ISZOps_A6D40E ops_ISZOps_A6D40E__as(STACK_FRAME void *this) {
  if (ops_ISZOps_A6D40E__is(CALLER this)) return (ops_ISZOps_A6D40E) this;
  sfAbortImpl(CALLER "Invalid cast to ops.ISZOps[Z].");
  abort();
}

void ops_ISZOps_A6D40E_apply(STACK_FRAME ops_ISZOps_A6D40E this, IS_82ABD8 s);

#ifdef __cplusplus
}
#endif

#endif