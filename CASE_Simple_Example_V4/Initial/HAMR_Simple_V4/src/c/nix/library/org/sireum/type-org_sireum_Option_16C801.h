#ifndef SIREUM_TYPE_H_org_sireum_Option_16C801
#define SIREUM_TYPE_H_org_sireum_Option_16C801

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

#include <type-org_sireum_Some_DAEBD0.h>
#include <type-org_sireum_None_43D596.h>

typedef union Option_16C801 *Option_16C801;
union Option_16C801 {
  TYPE type;
  struct Some_DAEBD0 Some_DAEBD0;
  struct None_43D596 None_43D596;
};

#define DeclNewOption_16C801(x) union Option_16C801 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif