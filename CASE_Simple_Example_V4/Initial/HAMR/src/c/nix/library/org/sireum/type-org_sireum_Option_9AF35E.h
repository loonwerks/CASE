#ifndef SIREUM_TYPE_H_org_sireum_Option_9AF35E
#define SIREUM_TYPE_H_org_sireum_Option_9AF35E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[IS[Z, Z]]

#include <type-org_sireum_None_5C1355.h>

typedef union Option_9AF35E *Option_9AF35E;
union Option_9AF35E {
  TYPE type;
  struct None_5C1355 None_5C1355;
};

#define DeclNewOption_9AF35E(x) union Option_9AF35E x = { 0 }

#ifdef __cplusplus
}
#endif

#endif