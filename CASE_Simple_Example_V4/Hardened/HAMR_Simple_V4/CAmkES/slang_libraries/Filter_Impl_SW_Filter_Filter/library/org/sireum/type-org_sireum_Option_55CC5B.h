#ifndef SIREUM_TYPE_H_org_sireum_Option_55CC5B
#define SIREUM_TYPE_H_org_sireum_Option_55CC5B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

#include <type-org_sireum_Some_FDA5C5.h>
#include <type-org_sireum_None_968C19.h>

typedef union Option_55CC5B *Option_55CC5B;
union Option_55CC5B {
  TYPE type;
  struct Some_FDA5C5 Some_FDA5C5;
  struct None_968C19 None_968C19;
};

#define DeclNewOption_55CC5B(x) union Option_55CC5B x = { 0 }

#ifdef __cplusplus
}
#endif

#endif