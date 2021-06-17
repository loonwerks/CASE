#ifndef SIREUM_TYPE_H_org_sireum_Option_73B21F
#define SIREUM_TYPE_H_org_sireum_Option_73B21F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.UxAS_thr_Impl_Operational_Api]

#include <type-org_sireum_None_5189C1.h>
#include <type-org_sireum_Some_7F8DC4.h>

typedef union Option_73B21F *Option_73B21F;
union Option_73B21F {
  TYPE type;
  struct None_5189C1 None_5189C1;
  struct Some_7F8DC4 Some_7F8DC4;
};

#define DeclNewOption_73B21F(x) union Option_73B21F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif