#ifndef SIREUM_TYPE_H_org_sireum_Option_6F33AF
#define SIREUM_TYPE_H_org_sireum_Option_6F33AF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

#include <type-org_sireum_None_3D0813.h>
#include <type-org_sireum_Some_C4344F.h>

typedef union Option_6F33AF *Option_6F33AF;
union Option_6F33AF {
  TYPE type;
  struct None_3D0813 None_3D0813;
  struct Some_C4344F Some_C4344F;
};

#define DeclNewOption_6F33AF(x) union Option_6F33AF x = { 0 }

#ifdef __cplusplus
}
#endif

#endif