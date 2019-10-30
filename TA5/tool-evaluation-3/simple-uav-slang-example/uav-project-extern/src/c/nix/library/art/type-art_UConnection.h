#ifndef SIREUM_TYPE_H_art_UConnection
#define SIREUM_TYPE_H_art_UConnection
#include <misc.h>

// art.UConnection

#include <type-art_art_Connection_210187.h>
#include <type-art_art_Connection_C6DC10.h>
#include <type-art_art_Connection_F3A765.h>
#include <type-art_art_Connection_B6057D.h>
#include <type-art_art_Connection_A6262C.h>

typedef union art_UConnection *art_UConnection;
union art_UConnection {
  TYPE type;
  struct art_Connection_210187 art_Connection_210187;
  struct art_Connection_C6DC10 art_Connection_C6DC10;
  struct art_Connection_F3A765 art_Connection_F3A765;
  struct art_Connection_B6057D art_Connection_B6057D;
  struct art_Connection_A6262C art_Connection_A6262C;
};

#define DeclNewart_UConnection(x) union art_UConnection x = { 0 }

#endif