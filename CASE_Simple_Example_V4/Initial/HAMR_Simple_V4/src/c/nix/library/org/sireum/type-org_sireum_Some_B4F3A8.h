#ifndef SIREUM_TYPE_H_org_sireum_Some_B4F3A8
#define SIREUM_TYPE_H_org_sireum_Some_B4F3A8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]
#include <type-HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api.h>

typedef struct Some_B4F3A8 *Some_B4F3A8;
struct Some_B4F3A8 {
  TYPE type;
  struct HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api value;
};

#define DeclNewSome_B4F3A8(x) struct Some_B4F3A8 x = { .type = TSome_B4F3A8 }

#ifdef __cplusplus
}
#endif

#endif