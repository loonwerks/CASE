#ifndef SIREUM_TYPE_H_art_art_Connection_210187
#define SIREUM_TYPE_H_art_art_Connection_210187
#include <misc.h>

// art.Connection[uav_project_extern.SW.Command_Impl]
#include <type-art_art_Port_311EA2.h>
#include <type-art_art_Port_311EA2.h>

typedef struct art_Connection_210187 *art_Connection_210187;
struct art_Connection_210187 {
  TYPE type;
  struct art_Port_311EA2 from;
  struct art_Port_311EA2 to;
};

#define DeclNewart_Connection_210187(x) struct art_Connection_210187 x = { .type = Tart_Connection_210187 }

#endif