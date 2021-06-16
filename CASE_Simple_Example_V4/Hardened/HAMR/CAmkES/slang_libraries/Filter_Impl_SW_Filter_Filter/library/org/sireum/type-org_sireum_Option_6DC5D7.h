#ifndef SIREUM_TYPE_H_org_sireum_Option_6DC5D7
#define SIREUM_TYPE_H_org_sireum_Option_6DC5D7

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.Filter_Impl_Operational_Api]

#include <type-org_sireum_Some_73C5E1.h>
#include <type-org_sireum_None_10267D.h>

typedef union Option_6DC5D7 *Option_6DC5D7;
union Option_6DC5D7 {
  TYPE type;
  struct Some_73C5E1 Some_73C5E1;
  struct None_10267D None_10267D;
};

#define DeclNewOption_6DC5D7(x) union Option_6DC5D7 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif