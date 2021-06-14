#ifndef SIREUM_TYPE_H_org_sireum_Some_482E57
#define SIREUM_TYPE_H_org_sireum_Some_482E57

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.Bridge]
#include <type-art_Bridge.h>

typedef struct Some_482E57 *Some_482E57;
struct Some_482E57 {
  TYPE type;
  union art_Bridge value;
};

#define DeclNewSome_482E57(x) struct Some_482E57 x = { .type = TSome_482E57 }

#ifdef __cplusplus
}
#endif

#endif