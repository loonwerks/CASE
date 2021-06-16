#ifndef SIREUM_TYPE_H_org_sireum_None_BE5310
#define SIREUM_TYPE_H_org_sireum_None_BE5310

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[HAMR.SW.Monitor_Impl_Operational_Api]

typedef struct None_BE5310 *None_BE5310;
struct None_BE5310 {
  TYPE type;
};

#define DeclNewNone_BE5310(x) struct None_BE5310 x = { .type = TNone_BE5310 }

#ifdef __cplusplus
}
#endif

#endif