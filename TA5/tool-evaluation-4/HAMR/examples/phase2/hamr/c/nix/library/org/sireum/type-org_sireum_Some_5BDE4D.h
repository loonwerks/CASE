#ifndef SIREUM_TYPE_H_org_sireum_Some_5BDE4D
#define SIREUM_TYPE_H_org_sireum_Some_5BDE4D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]
#include <type-hamr_SW_UxAS_thr_Impl_Initialization_Api.h>

typedef struct Some_5BDE4D *Some_5BDE4D;
struct Some_5BDE4D {
  TYPE type;
  struct hamr_SW_UxAS_thr_Impl_Initialization_Api value;
};

#define DeclNewSome_5BDE4D(x) struct Some_5BDE4D x = { .type = TSome_5BDE4D }

#ifdef __cplusplus
}
#endif

#endif