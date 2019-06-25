/* testshare/components/publisher/src/publisher.c */

#include <stdio.h>
#include <camkes.h>
#include <sb_proc_types.h>
#include <sb_publisher_impl.h>

static int8_t _value;

void testshare_publisher_component_init(const int64_t *arg) {
  printf("testshare_publisher_component_init called\n");
  _value = 0;
}

void run_publisher(const int64_t *in_arg)
{
    printf("[publisher] starting\n");
    b1->lepht = _value;
    b1->right = _value + 1;
    b1->top   = _value + 2;
    b1->bottom = _value + 3;
    b1_release(); /* release memory fence */
    printf("[publisher] wrote b1={%d,%d,%d,%d}\n",
           b1->lepht, b1->right, b1->top, b1->bottom );
    _value = (_value + 4) % 500;
}
