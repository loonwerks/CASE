#ifndef SIREUM_TYPE_H_org_sireum_Option_80DF3B
#define SIREUM_TYPE_H_org_sireum_Option_80DF3B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]

#include <type-org_sireum_None_579C8E.h>
#include <type-org_sireum_Some_F82A4D.h>

typedef union Option_80DF3B *Option_80DF3B;
union Option_80DF3B {
  TYPE type;
  struct None_579C8E None_579C8E;
  struct Some_F82A4D Some_F82A4D;
};

#define DeclNewOption_80DF3B(x) union Option_80DF3B x = { 0 }

#ifdef __cplusplus
}
#endif

#endif