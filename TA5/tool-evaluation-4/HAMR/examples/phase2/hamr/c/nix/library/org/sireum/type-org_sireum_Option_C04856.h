#ifndef SIREUM_TYPE_H_org_sireum_Option_C04856
#define SIREUM_TYPE_H_org_sireum_Option_C04856

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_7290DE.h>
#include <type-org_sireum_Some_30503C.h>

typedef union Option_C04856 *Option_C04856;
union Option_C04856 {
  TYPE type;
  struct None_7290DE None_7290DE;
  struct Some_30503C Some_30503C;
};

#define DeclNewOption_C04856(x) union Option_C04856 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif