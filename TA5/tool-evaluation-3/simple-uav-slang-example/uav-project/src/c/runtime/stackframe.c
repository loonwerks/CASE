/*
 Copyright (c) 2019, Robby, Kansas State University
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

 1. Redistributions of source code must retain the above copyright notice, this
    list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright notice,
    this list of conditions and the following disclaimer in the documentation
    and/or other materials provided with the distribution.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#include <stdio.h>
#include <stackframe.h>
#include <string.h>

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
