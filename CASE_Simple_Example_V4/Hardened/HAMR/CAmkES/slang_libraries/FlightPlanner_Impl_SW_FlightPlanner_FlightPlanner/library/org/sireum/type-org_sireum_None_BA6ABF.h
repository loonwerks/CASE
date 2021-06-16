#ifndef SIREUM_TYPE_H_org_sireum_None_BA6ABF
#define SIREUM_TYPE_H_org_sireum_None_BA6ABF

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

typedef struct None_BA6ABF *None_BA6ABF;
struct None_BA6ABF {
  TYPE type;
};

#define DeclNewNone_BA6ABF(x) struct None_BA6ABF x = { .type = TNone_BA6ABF }

#ifdef __cplusplus
}
#endif

#endif