#ifndef SIREUM_TYPE_H_org_sireum_Option_68B166
#define SIREUM_TYPE_H_org_sireum_Option_68B166

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

#include <type-org_sireum_None_863C2F.h>
#include <type-org_sireum_Some_A84D2F.h>

typedef union Option_68B166 *Option_68B166;
union Option_68B166 {
  TYPE type;
  struct None_863C2F None_863C2F;
  struct Some_A84D2F Some_A84D2F;
};

#define DeclNewOption_68B166(x) union Option_68B166 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif