#ifndef SIREUM_TYPE_H_art_EventTriggered
#define SIREUM_TYPE_H_art_EventTriggered

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.EventTriggered
#include <type-org_sireum_IS_82ABD8.h>

typedef struct art_EventTriggered *art_EventTriggered;
struct art_EventTriggered {
  TYPE type;
  struct IS_82ABD8 portIds;
};

#define DeclNewart_EventTriggered(x) struct art_EventTriggered x = { .type = Tart_EventTriggered }

#ifdef __cplusplus
}
#endif

#endif