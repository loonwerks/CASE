#ifndef SIREUM_TYPE_H_org_sireum_Option_E8C05C
#define SIREUM_TYPE_H_org_sireum_Option_E8C05C

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.Monitor_Impl_Operational_Api]

#include <type-org_sireum_Some_3E502C.h>
#include <type-org_sireum_None_BE5310.h>

typedef union Option_E8C05C *Option_E8C05C;
union Option_E8C05C {
  TYPE type;
  struct Some_3E502C Some_3E502C;
  struct None_BE5310 None_BE5310;
};

#define DeclNewOption_E8C05C(x) union Option_E8C05C x = { 0 }

#ifdef __cplusplus
}
#endif

#endif