#ifndef SIREUM_H_org_sireum_Some_6EC2CA
#define SIREUM_H_org_sireum_Some_6EC2CA

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// Some[HAMR.SW.Monitor_Impl_Initialization_Api]

#define Some_6EC2CA_value_(this) ((HAMR_SW_Monitor_Impl_Initialization_Api) &(this)->value)

B Some_6EC2CA__eq(Some_6EC2CA this, Some_6EC2CA other);
inline B Some_6EC2CA__ne(Some_6EC2CA this, Some_6EC2CA other) {
  return !Some_6EC2CA__eq(this, other);
};
void Some_6EC2CA_string_(STACK_FRAME String result, Some_6EC2CA this);
void Some_6EC2CA_cprint(Some_6EC2CA this, B isOut);

inline B Some_6EC2CA__is(STACK_FRAME void* this) {
  return ((Some_6EC2CA) this)->type == TSome_6EC2CA;
}

inline Some_6EC2CA Some_6EC2CA__as(STACK_FRAME void *this) {
  if (Some_6EC2CA__is(CALLER this)) return (Some_6EC2CA) this;
  sfAbortImpl(CALLER "Invalid cast to Some[HAMR.SW.Monitor_Impl_Initialization_Api].");
  abort();
}

void Some_6EC2CA_apply(STACK_FRAME Some_6EC2CA this, HAMR_SW_Monitor_Impl_Initialization_Api value);

#ifdef __cplusplus
}
#endif

#endif