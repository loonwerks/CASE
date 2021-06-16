#ifndef SIREUM_TYPE_H_org_sireum_Some_EB994A
#define SIREUM_TYPE_H_org_sireum_Some_EB994A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR.SW.FlightPlanner_Impl_Operational_Api]
#include <type-HAMR_SW_FlightPlanner_Impl_Operational_Api.h>

typedef struct Some_EB994A *Some_EB994A;
struct Some_EB994A {
  TYPE type;
  struct HAMR_SW_FlightPlanner_Impl_Operational_Api value;
};

#define DeclNewSome_EB994A(x) struct Some_EB994A x = { .type = TSome_EB994A }

#ifdef __cplusplus
}
#endif

#endif