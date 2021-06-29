#ifndef SIREUM_TYPE_H_org_sireum_None_5C1355
#define SIREUM_TYPE_H_org_sireum_None_5C1355

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[IS[Z, Z]]

typedef struct None_5C1355 *None_5C1355;
struct None_5C1355 {
  TYPE type;
};

#define DeclNewNone_5C1355(x) struct None_5C1355 x = { .type = TNone_5C1355 }

#ifdef __cplusplus
}
#endif

#endif