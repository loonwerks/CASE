#pragma once

// The event data port type. Sender and receiver type must match. Many ports can use the same type.
// The data representation is independent of the queue representation.
//
// NOTE: data_t must define a type for which assignment will copy all the
// data. For example, pointers do not work.
typedef struct data {
  int x;
} data_t;

