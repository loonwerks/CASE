#ifndef SIREUM_TYPE_H_org_sireum_Some_CA0A4D
#define SIREUM_TYPE_H_org_sireum_Some_CA0A4D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]
#include <type-hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api.h>

typedef struct Some_CA0A4D *Some_CA0A4D;
struct Some_CA0A4D {
  TYPE type;
  struct hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api value;
};

#define DeclNewSome_CA0A4D(x) struct Some_CA0A4D x = { .type = TSome_CA0A4D }

#ifdef __cplusplus
}
#endif

#endif