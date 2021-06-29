#ifndef SIREUM_STACK_FRAME_H
#define SIREUM_STACK_FRAME_H

#ifdef __cplusplus
extern "C" {
#endif

#include <type.h>

typedef struct StackFrame *StackFrame;
struct StackFrame {
  StackFrame caller;
  const char *uri;
  const char *owner;
  const char *name;
  int line;
};

#ifdef SIREUM_LOC
#define DeclNewStackFrame(_caller, _uri, _owner, _name, _line) struct StackFrame sf[1] = { (struct StackFrame) { .caller = (_caller), .uri = (_uri), .owner = (_owner), .name = (_name), .line = (_line) } }
#define sfUpdateLoc(l)    sf->line = l
#define STACK_FRAME       StackFrame caller,
#define STACK_FRAME_ONLY  StackFrame caller
#define STACK_FRAME_SF    StackFrame sf,
#define SF                sf,
#define SF_LAST           sf
#define CALLER            caller,
#define CALLER_LAST       caller
#else
#define DeclNewStackFrame(_caller, _uri, _owner, _name, _line)
#define sfUpdateLoc(l)
#define STACK_FRAME
#define STACK_FRAME_ONLY  void
#define STACK_FRAME_SF
#define SF
#define SF_LAST
#define CALLER
#define CALLER_LAST
#endif


#define sfAbort(msg) sfAbortImpl(SF msg); abort()

void sfAbortImpl(STACK_FRAME_SF char *msg);

#define sfAssert(cond, msg) if (!(cond)) { sfAbort(msg); }

#define sfDump(isOut) sfDumpImpl(SF isOut)

void sfDumpImpl(STACK_FRAME_SF B isOut);

#ifdef __cplusplus
}
#endif

#endif