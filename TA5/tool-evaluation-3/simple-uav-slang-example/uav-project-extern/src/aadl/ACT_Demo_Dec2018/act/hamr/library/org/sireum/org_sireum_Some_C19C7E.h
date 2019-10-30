#ifndef SIREUM_H_org_sireum_Some_C19C7E
#define SIREUM_H_org_sireum_Some_C19C7E
#include <types.h>

// Some[uav_project_extern.SW.Mission]

#define Some_C19C7E_value_(this) ((uav_project_extern_SW_Mission) &(this)->value)

B Some_C19C7E__eq(Some_C19C7E this, Some_C19C7E other);
inline B Some_C19C7E__ne(Some_C19C7E this, Some_C19C7E other) {
  return !Some_C19C7E__eq(this, other);
};
void Some_C19C7E_string_(STACK_FRAME String result, Some_C19C7E this);
void Some_C19C7E_cprint(Some_C19C7E this, B isOut);

inline B Some_C19C7E__is(STACK_FRAME void* this) {
  return ((Some_C19C7E) this)->type == TSome_C19C7E;
}

inline Some_C19C7E Some_C19C7E__as(STACK_FRAME void *this) {
  if (Some_C19C7E__is(CALLER this)) return (Some_C19C7E) this;
  fprintf(stderr, "Invalid case from %s to Some[uav_project_extern.SW.Mission].", TYPE_string_(this));
  sfAbortImpl(CALLER "");
  abort();
}

void Some_C19C7E_apply(STACK_FRAME Some_C19C7E this, uav_project_extern_SW_Mission value);

#endif