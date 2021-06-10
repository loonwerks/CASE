/*
 * Copyright 2020, Collins Aerospace
 */

#pragma once

#include <stdint.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>


void fhexdump(FILE *stream, const char *prefix, size_t max_line_len, const uint8_t* data, size_t datalen);


void hexdump(const char *prefix, size_t max_line_len, const uint8_t* data, size_t datalen);

void hexdump_raw(size_t max_line_len, const uint8_t* data, size_t datalen);


void fhexdump_ring(FILE *stream, const char *prefix, size_t max_line_len,
		   const uint8_t* ring, size_t ring_size, size_t offset, size_t datalen);


void hexdump_ring(const char *prefix, size_t max_line_len,
		  const uint8_t* ring, size_t ring_size, size_t offset, size_t datalen);
