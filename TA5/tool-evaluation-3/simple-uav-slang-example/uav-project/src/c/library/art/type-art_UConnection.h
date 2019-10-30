#ifndef SIREUM_TYPE_H_art_UConnection
#define SIREUM_TYPE_H_art_UConnection
#include <misc.h>

// art.UConnection

#include <type-art_art_Connection_112F4D.h>
#include <type-art_art_Connection_A24F1E.h>
#include <type-art_art_Connection_CAF041.h>
#include <type-art_art_Connection_2D82C4.h>
#include <type-art_art_Connection_E82682.h>

typedef union art_UConnection *art_UConnection;
union art_UConnection {
  TYPE type;
  struct art_Connection_112F4D art_Connection_112F4D;
  struct art_Connection_A24F1E art_Connection_A24F1E;
  struct art_Connection_CAF041 art_Connection_CAF041;
  struct art_Connection_2D82C4 art_Connection_2D82C4;
  struct art_Connection_E82682 art_Connection_E82682;
};

#define DeclNewart_UConnection(x) union art_UConnection x = { 0 }

#endif