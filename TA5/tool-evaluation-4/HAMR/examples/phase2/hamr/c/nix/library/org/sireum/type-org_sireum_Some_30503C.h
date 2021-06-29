#ifndef SIREUM_TYPE_H_org_sireum_Some_30503C
#define SIREUM_TYPE_H_org_sireum_Some_30503C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]
#include <type-hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api.h>

typedef struct Some_30503C *Some_30503C;
struct Some_30503C {
  TYPE type;
  struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api value;
};

#define DeclNewSome_30503C(x) struct Some_30503C x = { .type = TSome_30503C }

#ifdef __cplusplus
}
#endif

#endif