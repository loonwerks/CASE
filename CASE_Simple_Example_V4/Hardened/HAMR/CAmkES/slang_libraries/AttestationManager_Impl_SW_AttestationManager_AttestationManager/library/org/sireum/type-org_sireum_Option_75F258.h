#ifndef SIREUM_TYPE_H_org_sireum_Option_75F258
#define SIREUM_TYPE_H_org_sireum_Option_75F258

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationManager_Impl_Operational_Api]

#include <type-org_sireum_Some_6D831B.h>
#include <type-org_sireum_None_AAA378.h>

typedef union Option_75F258 *Option_75F258;
union Option_75F258 {
  TYPE type;
  struct Some_6D831B Some_6D831B;
  struct None_AAA378 None_AAA378;
};

#define DeclNewOption_75F258(x) union Option_75F258 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif