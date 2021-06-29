#ifndef SIREUM_TYPE_H_org_sireum_Some_4782C6
#define SIREUM_TYPE_H_org_sireum_Some_4782C6

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.Empty]
#include <type-art_Empty.h>

typedef struct Some_4782C6 *Some_4782C6;
struct Some_4782C6 {
  TYPE type;
  struct art_Empty value;
};

#define DeclNewSome_4782C6(x) struct Some_4782C6 x = { .type = TSome_4782C6 }

#ifdef __cplusplus
}
#endif

#endif