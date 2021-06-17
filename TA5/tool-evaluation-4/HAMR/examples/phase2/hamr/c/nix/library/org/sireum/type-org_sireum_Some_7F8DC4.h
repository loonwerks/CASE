#ifndef SIREUM_TYPE_H_org_sireum_Some_7F8DC4
#define SIREUM_TYPE_H_org_sireum_Some_7F8DC4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.UxAS_thr_Impl_Operational_Api]
#include <type-hamr_SW_UxAS_thr_Impl_Operational_Api.h>

typedef struct Some_7F8DC4 *Some_7F8DC4;
struct Some_7F8DC4 {
  TYPE type;
  struct hamr_SW_UxAS_thr_Impl_Operational_Api value;
};

#define DeclNewSome_7F8DC4(x) struct Some_7F8DC4 x = { .type = TSome_7F8DC4 }

#ifdef __cplusplus
}
#endif

#endif