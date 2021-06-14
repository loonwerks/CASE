#ifndef SIREUM_TYPE_H_art_PortMode_Type
#define SIREUM_TYPE_H_art_PortMode_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.PortMode.Type
typedef enum {
  art_PortMode_Type_DataIn = 0,
  art_PortMode_Type_DataOut = 1,
  art_PortMode_Type_EventIn = 2,
  art_PortMode_Type_EventOut = 3
} art_PortMode_Type;

inline B art_PortMode_Type__eq(art_PortMode_Type this, art_PortMode_Type other) {
  return this == other;
}

inline B art_PortMode_Type__ne(art_PortMode_Type this, art_PortMode_Type other) {
  return this != other;
}

inline Z art_PortMode_Type__ordinal(art_PortMode_Type this) {
  return (Z) this;
}

inline void art_PortMode_Type_name_(String result, art_PortMode_Type this) {
  switch (this) {
    case art_PortMode_Type_DataIn: String_assign(result, string("DataIn")); return;
    case art_PortMode_Type_DataOut: String_assign(result, string("DataOut")); return;
    case art_PortMode_Type_EventIn: String_assign(result, string("EventIn")); return;
    case art_PortMode_Type_EventOut: String_assign(result, string("EventOut")); return;
  }
}

#ifdef __cplusplus
}
#endif

#endif