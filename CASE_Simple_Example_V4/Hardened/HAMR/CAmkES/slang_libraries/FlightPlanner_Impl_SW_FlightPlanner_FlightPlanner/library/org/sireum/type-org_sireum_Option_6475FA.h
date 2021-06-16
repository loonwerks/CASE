#ifndef SIREUM_TYPE_H_org_sireum_Option_6475FA
#define SIREUM_TYPE_H_org_sireum_Option_6475FA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.FlightPlanner_Impl_Operational_Api]

#include <type-org_sireum_Some_EB994A.h>
#include <type-org_sireum_None_3EE2E0.h>

typedef union Option_6475FA *Option_6475FA;
union Option_6475FA {
  TYPE type;
  struct Some_EB994A Some_EB994A;
  struct None_3EE2E0 None_3EE2E0;
};

#define DeclNewOption_6475FA(x) union Option_6475FA x = { 0 }

#ifdef __cplusplus
}
#endif

#endif