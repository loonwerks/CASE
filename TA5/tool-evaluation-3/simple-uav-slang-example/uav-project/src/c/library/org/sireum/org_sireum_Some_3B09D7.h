#ifndef SIREUM_H_org_sireum_Some_3B09D7
#define SIREUM_H_org_sireum_Some_3B09D7
#include <types.h>

// Some[ACT_Demo_Dec2018__camkes_X.SW.Mission]

#define Some_3B09D7_value_(this) ((ACT_Demo_Dec2018__camkes_X_SW_Mission) &(this)->value)

B Some_3B09D7__eq(Some_3B09D7 this, Some_3B09D7 other);
static inline B Some_3B09D7__ne(Some_3B09D7 this, Some_3B09D7 other) {
  return !Some_3B09D7__eq(this, other);
};
void Some_3B09D7_cprint(Some_3B09D7 this, B isOut);
void Some_3B09D7_string(STACK_FRAME String result, Some_3B09D7 this);

static inline B Some_3B09D7__is(STACK_FRAME void* this) {
  return ((Some_3B09D7) this)->type == TSome_3B09D7;
}

static inline Some_3B09D7 Some_3B09D7__as(STACK_FRAME void *this) {
  if (Some_3B09D7__is(CALLER this)) return (Some_3B09D7) this;
  fprintf(stderr, "Invalid case from %s to Some[ACT_Demo_Dec2018__camkes_X.SW.Mission].", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void Some_3B09D7_apply(STACK_FRAME Some_3B09D7 this, ACT_Demo_Dec2018__camkes_X_SW_Mission value);

#endif