#ifndef SIREUM_TYPE_H_org_sireum_Option_921595
#define SIREUM_TYPE_H_org_sireum_Option_921595

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationGate_Impl_Operational_Api]

#include <type-org_sireum_Some_8753F1.h>
#include <type-org_sireum_None_118401.h>

typedef union Option_921595 *Option_921595;
union Option_921595 {
  TYPE type;
  struct Some_8753F1 Some_8753F1;
  struct None_118401 None_118401;
};

#define DeclNewOption_921595(x) union Option_921595 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif