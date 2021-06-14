#include <all.h>

// art.Bridge

B art_Bridge__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: return T;
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: return T;
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: return T;
    default: return F;
  }
}

art_Bridge art_Bridge__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: break;
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: break;
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge) this;
}

void art_Bridge_string_(STACK_FRAME String result, art_Bridge this);

Z art_Bridge_id_(STACK_FRAME art_Bridge this) {
  switch (this->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: return HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_id_((HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge) this);
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: return HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_id_((HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge) this);
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: return HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_id_((HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge) this);
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_dispatchProtocol_(STACK_FRAME art_DispatchPropertyProtocol result, art_Bridge this) {
  switch (this->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_dispatchProtocol_((HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: Type_assign(result, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_dispatchProtocol_((HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_dispatchProtocol_((HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge) this), sizeof(union art_DispatchPropertyProtocol)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_name_(STACK_FRAME String result, art_Bridge this) {
  switch (this->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_name_((HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge) this), sizeof(struct StaticString)); return;
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: Type_assign(result, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_name_((HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge) this), sizeof(struct StaticString)); return;
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_name_((HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge) this), sizeof(struct StaticString)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}

void art_Bridge_ports_(STACK_FRAME art_Bridge_Ports result, art_Bridge this) {
  switch (this->type) {
    case THAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge_ports_((HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case THAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge: Type_assign(result, HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge_ports_((HAMR_Simple_V4_SW_RadioDriver_Impl_SW_Radio_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    case THAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge: Type_assign(result, HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge_ports_((HAMR_Simple_V4_SW_FlightPlanner_Impl_SW_FlightPlanner_Bridge) this), sizeof(struct art_Bridge_Ports)); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}