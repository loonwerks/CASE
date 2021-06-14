#ifndef SIREUM_TYPE_H_org_sireum_Option_30119F
#define SIREUM_TYPE_H_org_sireum_Option_30119F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[IS[Z, B]]

#include <type-org_sireum_None_3026C5.h>
#include <type-org_sireum_Some_8D03B1.h>

typedef union Option_30119F *Option_30119F;
union Option_30119F {
  TYPE type;
  struct None_3026C5 None_3026C5;
  struct Some_8D03B1 Some_8D03B1;
};

#define DeclNewOption_30119F(x) union Option_30119F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif