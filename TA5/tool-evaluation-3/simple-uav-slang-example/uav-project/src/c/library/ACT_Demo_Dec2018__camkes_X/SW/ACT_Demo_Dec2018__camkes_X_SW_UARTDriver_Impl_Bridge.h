#ifndef SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge
#define SIREUM_H_ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge
#include <types.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge

#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_id_(this) ((this)->id)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_name_(this) ((String) &(this)->name)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_dispatchProtocol_(this) ((art_DispatchPropertyProtocol) &(this)->dispatchProtocol)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(this) ((art_Port_2D3735) &(this)->mission_window)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_tracking_id_(this) ((art_Port_446859) &(this)->tracking_id)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_ports_(this) ((art_Bridge_Ports) &(this)->ports)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_api_(this) ((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api) &(this)->api)
#define ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_entryPoints_(this) ((art_Bridge_EntryPoints) &(this)->entryPoints)

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge other);
static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__ne(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge other) {
  return !ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__eq(this, other);
};
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge this, B isOut);
void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge this);

static inline B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__is(STACK_FRAME void* this) {
  return ((ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge) this)->type == TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge;
}

static inline ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__as(STACK_FRAME void *this) {
  if (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge__is(CALLER this)) return (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge) this;
  fprintf(stderr, "Invalid case from %s to ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.", TYPE_string(this));
  sfAbortImpl(CALLER "");
  abort();
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge this, Z id, String name, art_DispatchPropertyProtocol dispatchProtocol, art_Port_2D3735 mission_window, art_Port_446859 tracking_id);

#endif