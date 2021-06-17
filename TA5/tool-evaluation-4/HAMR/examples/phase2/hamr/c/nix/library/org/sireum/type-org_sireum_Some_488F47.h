#ifndef SIREUM_TYPE_H_org_sireum_Some_488F47
#define SIREUM_TYPE_H_org_sireum_Some_488F47

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[Z]

typedef struct Some_488F47 *Some_488F47;
struct Some_488F47 {
  TYPE type;
  Z value;
};

#define DeclNewSome_488F47(x) struct Some_488F47 x = { .type = TSome_488F47 }

#ifdef __cplusplus
}
#endif

#endif