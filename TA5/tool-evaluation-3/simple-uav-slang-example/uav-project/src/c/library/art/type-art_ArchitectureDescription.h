#ifndef SIREUM_TYPE_H_art_ArchitectureDescription
#define SIREUM_TYPE_H_art_ArchitectureDescription
#include <misc.h>

// art.ArchitectureDescription
#include <type-org_sireum_MS_852149.h>
#include <type-org_sireum_IS_08117A.h>

typedef struct art_ArchitectureDescription *art_ArchitectureDescription;
struct art_ArchitectureDescription {
  TYPE type;
  struct IS_08117A connections;
  struct MS_852149 components;
};

#define DeclNewart_ArchitectureDescription(x) struct art_ArchitectureDescription x = { .type = Tart_ArchitectureDescription }


#endif