#ifndef SIREUM_TYPE_H_org_sireum_Some_0FF3DD
#define SIREUM_TYPE_H_org_sireum_Some_0FF3DD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api.h>

typedef struct Some_0FF3DD *Some_0FF3DD;
struct Some_0FF3DD {
  TYPE type;
  struct HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api value;
};

#define DeclNewSome_0FF3DD(x) struct Some_0FF3DD x = { .type = TSome_0FF3DD }

#ifdef __cplusplus
}
#endif

#endif