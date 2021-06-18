#ifndef SIREUM_TYPE_H_org_sireum_Option_E8930C
#define SIREUM_TYPE_H_org_sireum_Option_E8930C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_844F3C.h>
#include <type-org_sireum_Some_65C258.h>

typedef union Option_E8930C *Option_E8930C;
union Option_E8930C {
  TYPE type;
  struct None_844F3C None_844F3C;
  struct Some_65C258 Some_65C258;
};

#define DeclNewOption_E8930C(x) union Option_E8930C x = { 0 }

#ifdef __cplusplus
}
#endif

#endif