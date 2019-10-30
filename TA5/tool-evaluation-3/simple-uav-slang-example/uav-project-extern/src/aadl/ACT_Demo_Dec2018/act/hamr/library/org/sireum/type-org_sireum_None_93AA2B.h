#ifndef SIREUM_TYPE_H_org_sireum_None_93AA2B
#define SIREUM_TYPE_H_org_sireum_None_93AA2B
#include <misc.h>

// None[(Z, art.DataContent)]

typedef struct None_93AA2B *None_93AA2B;
struct None_93AA2B {
  TYPE type;
};

#define DeclNewNone_93AA2B(x) struct None_93AA2B x = { .type = TNone_93AA2B }

#endif