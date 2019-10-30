#ifndef SIREUM_TYPE_H_art_PortMode
#define SIREUM_TYPE_H_art_PortMode
#include <misc.h>

// art.PortMode
typedef enum {
  art_PortMode_DataIn = 0,
  art_PortMode_DataOut = 1,
  art_PortMode_EventIn = 2,
  art_PortMode_EventOut = 3
} art_PortMode;

inline B art_PortMode__eq(art_PortMode this, art_PortMode other) {
  return this == other;
}

inline B art_PortMode__ne(art_PortMode this, art_PortMode other) {
  return this != other;
}

inline Z art_PortMode__ordinal(art_PortMode this) {
  return (Z) this;
}

inline void art_PortMode_name_(String result, art_PortMode this) {
  switch (this) {
    case art_PortMode_DataIn: String_assign(result, string("DataIn")); return;
    case art_PortMode_DataOut: String_assign(result, string("DataOut")); return;
    case art_PortMode_EventIn: String_assign(result, string("EventIn")); return;
    case art_PortMode_EventOut: String_assign(result, string("EventOut")); return;
  }
}

#endif