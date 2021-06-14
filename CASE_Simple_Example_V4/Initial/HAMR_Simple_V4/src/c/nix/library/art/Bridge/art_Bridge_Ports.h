#ifndef SIREUM_H_art_Bridge_Ports
#define SIREUM_H_art_Bridge_Ports

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.Bridge.Ports

#define art_Bridge_Ports_all_(this) ((IS_820232) &(this)->all)
#define art_Bridge_Ports_dataIns_(this) ((IS_820232) &(this)->dataIns)
#define art_Bridge_Ports_dataOuts_(this) ((IS_820232) &(this)->dataOuts)
#define art_Bridge_Ports_eventIns_(this) ((IS_820232) &(this)->eventIns)
#define art_Bridge_Ports_eventOuts_(this) ((IS_820232) &(this)->eventOuts)

B art_Bridge_Ports__eq(art_Bridge_Ports this, art_Bridge_Ports other);
inline B art_Bridge_Ports__ne(art_Bridge_Ports this, art_Bridge_Ports other) {
  return !art_Bridge_Ports__eq(this, other);
};
void art_Bridge_Ports_string_(STACK_FRAME String result, art_Bridge_Ports this);
void art_Bridge_Ports_cprint(art_Bridge_Ports this, B isOut);

inline B art_Bridge_Ports__is(STACK_FRAME void* this) {
  return ((art_Bridge_Ports) this)->type == Tart_Bridge_Ports;
}

inline art_Bridge_Ports art_Bridge_Ports__as(STACK_FRAME void *this) {
  if (art_Bridge_Ports__is(CALLER this)) return (art_Bridge_Ports) this;
  sfAbortImpl(CALLER "Invalid cast to art.Bridge.Ports.");
  abort();
}

void art_Bridge_Ports_apply(STACK_FRAME art_Bridge_Ports this, IS_820232 all, IS_820232 dataIns, IS_820232 dataOuts, IS_820232 eventIns, IS_820232 eventOuts);

#ifdef __cplusplus
}
#endif

#endif