#ifndef SIREUM_TYPE_H_org_sireum_Option_AE4A98
#define SIREUM_TYPE_H_org_sireum_Option_AE4A98

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]

#include <type-org_sireum_Some_262A95.h>
#include <type-org_sireum_None_02D0B8.h>

typedef union Option_AE4A98 *Option_AE4A98;
union Option_AE4A98 {
  TYPE type;
  struct Some_262A95 Some_262A95;
  struct None_02D0B8 None_02D0B8;
};

#define DeclNewOption_AE4A98(x) union Option_AE4A98 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif