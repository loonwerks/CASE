#ifndef SIREUM_TYPE_H_org_sireum_Option_5DEDCA
#define SIREUM_TYPE_H_org_sireum_Option_5DEDCA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

#include <type-org_sireum_Some_459F82.h>
#include <type-org_sireum_None_32B473.h>

typedef union Option_5DEDCA *Option_5DEDCA;
union Option_5DEDCA {
  TYPE type;
  struct Some_459F82 Some_459F82;
  struct None_32B473 None_32B473;
};

#define DeclNewOption_5DEDCA(x) union Option_5DEDCA x = { 0 }

#ifdef __cplusplus
}
#endif

#endif