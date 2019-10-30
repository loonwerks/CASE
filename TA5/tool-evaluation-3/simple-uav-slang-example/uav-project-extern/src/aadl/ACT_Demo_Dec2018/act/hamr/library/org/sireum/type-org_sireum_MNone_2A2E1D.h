#ifndef SIREUM_TYPE_H_org_sireum_MNone_2A2E1D
#define SIREUM_TYPE_H_org_sireum_MNone_2A2E1D
#include <misc.h>

// MNone[art.Bridge]

typedef struct MNone_2A2E1D *MNone_2A2E1D;
struct MNone_2A2E1D {
  TYPE type;
};

#define DeclNewMNone_2A2E1D(x) struct MNone_2A2E1D x = { .type = TMNone_2A2E1D }

#endif