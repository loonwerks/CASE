#ifndef SIREUM_TYPE_H_org_sireum_Option_4B18FC
#define SIREUM_TYPE_H_org_sireum_Option_4B18FC

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

#include <type-org_sireum_None_12F982.h>
#include <type-org_sireum_Some_BA86B7.h>

typedef union Option_4B18FC *Option_4B18FC;
union Option_4B18FC {
  TYPE type;
  struct None_12F982 None_12F982;
  struct Some_BA86B7 Some_BA86B7;
};

#define DeclNewOption_4B18FC(x) union Option_4B18FC x = { 0 }

#ifdef __cplusplus
}
#endif

#endif