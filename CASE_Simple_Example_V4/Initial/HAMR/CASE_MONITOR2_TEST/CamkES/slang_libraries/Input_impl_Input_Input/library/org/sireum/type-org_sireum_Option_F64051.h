#ifndef SIREUM_TYPE_H_org_sireum_Option_F64051
#define SIREUM_TYPE_H_org_sireum_Option_F64051

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

#include <type-org_sireum_None_B2E40A.h>
#include <type-org_sireum_Some_EA751B.h>

typedef union Option_F64051 *Option_F64051;
union Option_F64051 {
  TYPE type;
  struct None_B2E40A None_B2E40A;
  struct Some_EA751B Some_EA751B;
};

#define DeclNewOption_F64051(x) union Option_F64051 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif