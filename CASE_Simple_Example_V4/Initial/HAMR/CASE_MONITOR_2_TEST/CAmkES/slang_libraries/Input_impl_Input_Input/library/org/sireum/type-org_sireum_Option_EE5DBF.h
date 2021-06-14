#ifndef SIREUM_TYPE_H_org_sireum_Option_EE5DBF
#define SIREUM_TYPE_H_org_sireum_Option_EE5DBF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

#include <type-org_sireum_Some_2EBF4C.h>
#include <type-org_sireum_None_05FEAD.h>

typedef union Option_EE5DBF *Option_EE5DBF;
union Option_EE5DBF {
  TYPE type;
  struct Some_2EBF4C Some_2EBF4C;
  struct None_05FEAD None_05FEAD;
};

#define DeclNewOption_EE5DBF(x) union Option_EE5DBF x = { 0 }

#ifdef __cplusplus
}
#endif

#endif