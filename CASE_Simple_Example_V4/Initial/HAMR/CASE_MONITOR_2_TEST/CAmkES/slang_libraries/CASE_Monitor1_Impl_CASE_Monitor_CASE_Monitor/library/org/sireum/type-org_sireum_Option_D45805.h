#ifndef SIREUM_TYPE_H_org_sireum_Option_D45805
#define SIREUM_TYPE_H_org_sireum_Option_D45805

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#include <type-org_sireum_None_67F530.h>
#include <type-org_sireum_Some_A8BCDF.h>

typedef union Option_D45805 *Option_D45805;
union Option_D45805 {
  TYPE type;
  struct None_67F530 None_67F530;
  struct Some_A8BCDF Some_A8BCDF;
};

#define DeclNewOption_D45805(x) union Option_D45805 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif