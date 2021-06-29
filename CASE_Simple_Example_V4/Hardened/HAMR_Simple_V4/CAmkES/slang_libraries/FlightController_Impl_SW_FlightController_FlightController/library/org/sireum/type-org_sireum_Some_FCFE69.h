#ifndef SIREUM_TYPE_H_org_sireum_Some_FCFE69
#define SIREUM_TYPE_H_org_sireum_Some_FCFE69

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api.h>

typedef struct Some_FCFE69 *Some_FCFE69;
struct Some_FCFE69 {
  TYPE type;
  struct HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api value;
};

#define DeclNewSome_FCFE69(x) struct Some_FCFE69 x = { .type = TSome_FCFE69 }

#ifdef __cplusplus
}
#endif

#endif