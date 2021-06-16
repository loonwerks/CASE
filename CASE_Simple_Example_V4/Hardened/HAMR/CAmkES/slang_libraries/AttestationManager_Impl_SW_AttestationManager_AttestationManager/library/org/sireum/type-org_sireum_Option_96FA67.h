#ifndef SIREUM_TYPE_H_org_sireum_Option_96FA67
#define SIREUM_TYPE_H_org_sireum_Option_96FA67

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationManager_Impl_Initialization_Api]

#include <type-org_sireum_Some_88F02A.h>
#include <type-org_sireum_None_E08F39.h>

typedef union Option_96FA67 *Option_96FA67;
union Option_96FA67 {
  TYPE type;
  struct Some_88F02A Some_88F02A;
  struct None_E08F39 None_E08F39;
};

#define DeclNewOption_96FA67(x) union Option_96FA67 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif