#ifndef SIREUM_TYPE_H_org_sireum_Option_EA4AEC
#define SIREUM_TYPE_H_org_sireum_Option_EA4AEC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

#include <type-org_sireum_None_A19CD9.h>
#include <type-org_sireum_Some_9A9753.h>

typedef union Option_EA4AEC *Option_EA4AEC;
union Option_EA4AEC {
  TYPE type;
  struct None_A19CD9 None_A19CD9;
  struct Some_9A9753 Some_9A9753;
};

#define DeclNewOption_EA4AEC(x) union Option_EA4AEC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif