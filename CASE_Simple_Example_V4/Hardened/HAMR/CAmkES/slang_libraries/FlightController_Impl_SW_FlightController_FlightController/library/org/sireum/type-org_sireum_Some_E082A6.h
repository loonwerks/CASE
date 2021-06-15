#ifndef SIREUM_TYPE_H_org_sireum_Some_E082A6
#define SIREUM_TYPE_H_org_sireum_Some_E082A6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.FlightController_Impl_Initialization_Api]
#include <type-HAMR_SW_FlightController_Impl_Initialization_Api.h>

typedef struct Some_E082A6 *Some_E082A6;
struct Some_E082A6 {
  TYPE type;
  struct HAMR_SW_FlightController_Impl_Initialization_Api value;
};

#define DeclNewSome_E082A6(x) struct Some_E082A6 x = { .type = TSome_E082A6 }

#ifdef __cplusplus
}
#endif

#endif