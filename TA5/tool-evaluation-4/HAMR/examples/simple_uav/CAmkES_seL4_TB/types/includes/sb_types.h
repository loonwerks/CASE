#ifndef SB_TYPES_H
#define SB_TYPES_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#ifndef SB_VERIFY
#include <stddef.h>
#endif // SB_VERIFY

#define __SB_OS_CAMKES__

#ifndef SB_VERIFY
#define MUTEXOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define MUTEXOP(OP) OP
#endif // SB_VERIFY
#ifndef SB_VERIFY
#define CALLBACKOP(OP)\
if((OP) != 0) {\
  fprintf(stderr,"Operation " #OP " failed in %s at %d.\n",__FILE__,__LINE__);\
  *((int*)0)=0xdeadbeef;\
}
#else
#define CALLBACKOP(OP) OP
#endif // SB_VERIFY

typedef
  struct MC__MISSING_TYPE_Impl {
    int32_t MISSING;
  } MC__MISSING_TYPE_Impl;

typedef
  enum {ZigZag, StraightLine, Perimeter} SW__FlightPattern;

typedef
  struct SW__Coordinate_Impl {
    int32_t lat;
    int32_t longitude;
    int32_t alt;
  } SW__Coordinate_Impl;

typedef SW__Coordinate_Impl SW__Map [4];

typedef
  struct sb_SW__Map_container {
    SW__Map f;
  } sb_SW__Map_container;

typedef
  struct SW__Command_Impl {
    SW__Map Map;
    SW__FlightPattern Pattern;
    bool HMAC;
  } SW__Command_Impl;

typedef SW__Coordinate_Impl SW__Mission [10];

typedef
  struct sb_SW__Mission_container {
    SW__Mission f;
  } sb_SW__Mission_container;

typedef SW__Coordinate_Impl SW__MissionWindow [4];

typedef
  struct sb_SW__MissionWindow_container {
    SW__MissionWindow f;
  } sb_SW__MissionWindow_container;

#endif // SB_TYPES_H
