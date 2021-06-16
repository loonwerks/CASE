#ifndef SIREUM_TYPE_H_org_sireum_None_2A8B4A
#define SIREUM_TYPE_H_org_sireum_None_2A8B4A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[HAMR.SW.Monitor_Impl_Initialization_Api]

typedef struct None_2A8B4A *None_2A8B4A;
struct None_2A8B4A {
  TYPE type;
};

#define DeclNewNone_2A8B4A(x) struct None_2A8B4A x = { .type = TNone_2A8B4A }

#ifdef __cplusplus
}
#endif

#endif