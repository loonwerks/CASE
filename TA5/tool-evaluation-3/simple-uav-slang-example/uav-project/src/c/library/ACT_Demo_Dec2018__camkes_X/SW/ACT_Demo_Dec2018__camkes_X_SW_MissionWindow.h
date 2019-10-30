#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_MissionWindow
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_MissionWindow
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.MissionWindow

#define ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_value_(this) ((IS_5D0BE7) &(this)->value)

B ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__eq(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__ne(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_cprint(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) this)->type == TACT_Demo_Dec2018__camkes_X_SW_MissionWindow;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_MissionWindow ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.MissionWindow.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, IS_5D0BE7 value);

#endif