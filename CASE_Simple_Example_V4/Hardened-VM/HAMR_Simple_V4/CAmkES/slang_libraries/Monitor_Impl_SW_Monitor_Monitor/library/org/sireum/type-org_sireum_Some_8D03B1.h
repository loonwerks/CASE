#ifndef SIREUM_TYPE_H_org_sireum_Some_8D03B1
#define SIREUM_TYPE_H_org_sireum_Some_8D03B1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[IS[Z, B]]
#include <type-org_sireum_IS_C4F575.h>

typedef struct Some_8D03B1 *Some_8D03B1;
struct Some_8D03B1 {
  TYPE type;
  struct IS_C4F575 value;
};

#define DeclNewSome_8D03B1(x) struct Some_8D03B1 x = { .type = TSome_8D03B1 }

#ifdef __cplusplus
}
#endif

#endif