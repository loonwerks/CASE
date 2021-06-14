#ifndef SIREUM_TYPE_H_org_sireum_Nothing
#define SIREUM_TYPE_H_org_sireum_Nothing

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Nothing


typedef union Nothing *Nothing;
union Nothing {
  TYPE type;
};

#define DeclNewNothing(x) union Nothing x = { 0 }

#ifdef __cplusplus
}
#endif

#endif