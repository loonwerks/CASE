#include <stackframe.h>

void sfAbortImpl(STACK_FRAME_SF char *msg) {
  fprintf(stderr, "%s\n", msg);
  sfDump(F);
  exit(1);
}

void sfDumpImpl(STACK_FRAME_SF bool isOut) {
#ifdef SIREUM_LOC
  FILE *stream = isOut? stdout : stderr;
  StackFrame curr = sf;
  while (curr) {
    if (strlen(curr->owner) == 0) {
      if (curr->line == 0) fprintf(stream, "  %s(%s)\n", curr->name, curr->uri);
      else fprintf(stream, "  %s(%s:%d)\n", curr->name, curr->uri, curr->line);
    } else {
      if (curr->line == 0) fprintf(stream, "  %s.%s(%s)\n", curr->owner, curr->name, curr->uri);
      else fprintf(stream, "  %s.%s(%s:%d)\n", curr->owner, curr->name, curr->uri, curr->line);
    }
    curr = curr->caller;
  }
  fflush(stream);
#endif
}
