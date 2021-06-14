#ifndef SIREUM_TYPE_H_org_sireum_Some_DAEBD0
#define SIREUM_TYPE_H_org_sireum_Some_DAEBD0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api.h>

typedef struct Some_DAEBD0 *Some_DAEBD0;
struct Some_DAEBD0 {
  TYPE type;
  struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api value;
};

#define DeclNewSome_DAEBD0(x) struct Some_DAEBD0 x = { .type = TSome_DAEBD0 }

#ifdef __cplusplus
}
#endif

#endif