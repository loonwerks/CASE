#ifndef SIREUM_TYPE_H_org_sireum_None_76463B
#define SIREUM_TYPE_H_org_sireum_None_76463B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[Z]

typedef struct None_76463B *None_76463B;
struct None_76463B {
  TYPE type;
};

#define DeclNewNone_76463B(x) struct None_76463B x = { .type = TNone_76463B }

#ifdef __cplusplus
}
#endif

#endif