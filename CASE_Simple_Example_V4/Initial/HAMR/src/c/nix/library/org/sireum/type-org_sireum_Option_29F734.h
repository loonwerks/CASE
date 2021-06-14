#ifndef SIREUM_TYPE_H_org_sireum_Option_29F734
#define SIREUM_TYPE_H_org_sireum_Option_29F734

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

#include <type-org_sireum_None_E951B6.h>
#include <type-org_sireum_Some_B4F3A8.h>

typedef union Option_29F734 *Option_29F734;
union Option_29F734 {
  TYPE type;
  struct None_E951B6 None_E951B6;
  struct Some_B4F3A8 Some_B4F3A8;
};

#define DeclNewOption_29F734(x) union Option_29F734 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif