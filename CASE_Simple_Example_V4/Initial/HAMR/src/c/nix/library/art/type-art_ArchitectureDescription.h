#ifndef SIREUM_TYPE_H_art_ArchitectureDescription
#define SIREUM_TYPE_H_art_ArchitectureDescription

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.ArchitectureDescription
#include <type-org_sireum_IS_7E8796.h>
#include <type-org_sireum_IS_08117A.h>

typedef struct art_ArchitectureDescription *art_ArchitectureDescription;
struct art_ArchitectureDescription {
  TYPE type;
  struct IS_7E8796 components;
  struct IS_08117A connections;
};

#define DeclNewart_ArchitectureDescription(x) struct art_ArchitectureDescription x = { .type = Tart_ArchitectureDescription }

#ifdef __cplusplus
}
#endif

#endif