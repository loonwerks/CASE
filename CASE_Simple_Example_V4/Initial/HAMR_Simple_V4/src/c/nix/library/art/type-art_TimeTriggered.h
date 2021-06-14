#ifndef SIREUM_TYPE_H_art_TimeTriggered
#define SIREUM_TYPE_H_art_TimeTriggered

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.TimeTriggered

typedef struct art_TimeTriggered *art_TimeTriggered;
struct art_TimeTriggered {
  TYPE type;
};

#define DeclNewart_TimeTriggered(x) struct art_TimeTriggered x = { .type = Tart_TimeTriggered }

#ifdef __cplusplus
}
#endif

#endif