#ifndef SIREUM_TYPE_H_org_sireum_Some_3E197E
#define SIREUM_TYPE_H_org_sireum_Some_3E197E

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.UPort]
#include <type-art_UPort.h>

typedef struct Some_3E197E *Some_3E197E;
struct Some_3E197E {
  TYPE type;
  union art_UPort value;
};

#define DeclNewSome_3E197E(x) struct Some_3E197E x = { .type = TSome_3E197E }

#ifdef __cplusplus
}
#endif

#endif