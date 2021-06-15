#ifndef SIREUM_TYPE_H_org_sireum_Some_9C7E56
#define SIREUM_TYPE_H_org_sireum_Some_9C7E56

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.FlightPlanner_Impl_Initialization_Api]
#include <type-HAMR_SW_FlightPlanner_Impl_Initialization_Api.h>

typedef struct Some_9C7E56 *Some_9C7E56;
struct Some_9C7E56 {
  TYPE type;
  struct HAMR_SW_FlightPlanner_Impl_Initialization_Api value;
};

#define DeclNewSome_9C7E56(x) struct Some_9C7E56 x = { .type = TSome_9C7E56 }

#ifdef __cplusplus
}
#endif

#endif