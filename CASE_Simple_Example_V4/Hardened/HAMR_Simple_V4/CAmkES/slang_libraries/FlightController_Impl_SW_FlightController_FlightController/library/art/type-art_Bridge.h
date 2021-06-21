#ifndef SIREUM_TYPE_H_art_Bridge
#define SIREUM_TYPE_H_art_Bridge

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Bridge

#include <type-HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge.h>

typedef union art_Bridge *art_Bridge;
union art_Bridge {
  TYPE type;
  struct HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge HAMR_Simple_V4_SW_FlightController_Impl_SW_FlightController_FlightController_Bridge;
};

#define DeclNewart_Bridge(x) union art_Bridge x = { 0 }

#ifdef __cplusplus
}
#endif

#endif