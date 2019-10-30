#include <all.h>

// art.Bridge.EntryPoints

B art_Bridge_EntryPoints__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: return T;
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: return T;
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: return T;
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: return T;
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: return T;
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: return T;
    default: return F;
  }
}

art_Bridge_EntryPoints art_Bridge_EntryPoints__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: break;
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: break;
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: break;
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: break;
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: break;
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: break;
    default:
      fprintf(stderr, "Invalid cast from %s to art.Bridge.EntryPoints.", TYPE_string(this));
      sfAbortImpl(CALLER "");
  }
  return (art_Bridge_EntryPoints) this;
}

Unit art_Bridge_EntryPoints_initialise_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints_initialise_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_compute_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints_compute_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}

Unit art_Bridge_EntryPoints_finalise_(STACK_FRAME art_Bridge_EntryPoints this) {
  switch (this->type) {
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints) this); return;
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints_finalise_(CALLER (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string(this)); exit(1);
  }
}