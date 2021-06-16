#ifndef SIREUM_TYPE_H_org_sireum_Some_9535B2
#define SIREUM_TYPE_H_org_sireum_Some_9535B2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.FlightController_Impl_Operational_Api]
#include <type-HAMR_SW_FlightController_Impl_Operational_Api.h>

typedef struct Some_9535B2 *Some_9535B2;
struct Some_9535B2 {
  TYPE type;
  struct HAMR_SW_FlightController_Impl_Operational_Api value;
};

#define DeclNewSome_9535B2(x) struct Some_9535B2 x = { .type = TSome_9535B2 }

#ifdef __cplusplus
}
#endif

#endif