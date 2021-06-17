/*
 * Copyright 2020, Collins Aerospace
 */

/* jab: why not just include hexdump.h?
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
*/
#include <hexdump.h>

void fhexdump(FILE *stream, const char *prefix, size_t max_line_len, const uint8_t* data, size_t datalen) {
  char *printables = malloc(max_line_len + 1);
  fprintf(stream, "%s     |", prefix);
  for (size_t index = 0; index < max_line_len; ++index) {
    fprintf(stream," %02x", (uint8_t) index);
  }
  fprintf(stream, "\n%s-----|", prefix);
  for (size_t index = 0; index < max_line_len; ++index) {
    fprintf(stream, "---");
  }
  size_t offset = 0, line_offset = 0;
  for (; line_offset < datalen; line_offset += max_line_len) {
    fprintf(stream, "\n%s%04x |", prefix, (uint16_t) line_offset);
    if (printables != NULL) memset(printables, 0, max_line_len + 1);
    for (; offset < datalen && offset < line_offset + max_line_len; ++offset) {
      fprintf(stream, " %02x", data[offset]);
      if (printables != NULL) printables[offset - line_offset] = ((isprint(data[offset])) ? data[offset] : '.');
    }
    if (printables != NULL) fprintf(stream, "  %s", printables);
  }
  fprintf(stream, "\n");
  if (printables != NULL) free(printables);
}


void hexdump_raw(size_t max_line_len, const uint8_t* data, size_t datalen) {

  size_t offset = 0, line_offset = 0;
  printf("\n");
  for (; line_offset < datalen; line_offset += max_line_len) {
    for (; offset < datalen && offset < line_offset + max_line_len; ++offset) {
      printf("%02X ", data[offset]);
    }
    printf("\n");
  }
  printf("\n");
  fflush(stdout);
}


void hexdump(const char *prefix, size_t max_line_len, const uint8_t* data, size_t datalen) {
  fhexdump(stdout, prefix, max_line_len, data, datalen);
  fflush(stdout);
}


void fhexdump_ring(FILE *stream, const char *prefix, size_t max_line_len,
		   const uint8_t* ring, size_t ring_size, size_t start_offset, size_t datalen) {
  char *printables = malloc(max_line_len + 1);
  fprintf(stream, "%s     |", prefix);
  for (size_t index = 0; index < max_line_len; ++index) {
    fprintf(stream," %02x", (uint8_t) index);
  }
  fprintf(stream, "\n%s-----|", prefix);
  for (size_t index = 0; index < max_line_len; ++index) {
    fprintf(stream, "---");
  }
  size_t offset = 0, line_offset = 0;
  for (; line_offset < datalen; line_offset += max_line_len) {
    fprintf(stream, "\n%s%04x |", prefix, (uint16_t) line_offset);
    if (printables != NULL) memset(printables, 0, max_line_len + 1);
    for (; offset < datalen && offset < line_offset + max_line_len; ++offset) {
      uint8_t val = ring[(offset + start_offset) % ring_size];
      fprintf(stream, " %02x", val);
      if (printables != NULL) printables[offset - line_offset] = ((isprint(val)) ? val : '.');
    }
    if (printables != NULL) fprintf(stream, "  %s", printables);
  }
  fprintf(stream, "\n");
  if (printables != NULL) free(printables);
}


void hexdump_ring(const char *prefix, size_t max_line_len,
		  const uint8_t* ring, size_t ring_size, size_t start_offset, size_t datalen) {
  fhexdump_ring(stdout, prefix, max_line_len, ring, ring_size, start_offset, datalen);
}
