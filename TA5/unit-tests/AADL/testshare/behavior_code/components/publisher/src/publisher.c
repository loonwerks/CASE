/* testshare/components/publisher/src/publisher.c */

#include <stdio.h>
#include <camkes.h>
#include <camkes/dataport.h>
#include <testshare_types.h>

/* Dataport b1 */
extern testshare__Thing_t *b1;
/* macro: void b1_acquire() */
/* macro: void b1_release() */

void testshare_publisher_component_init(const int64_t *arg) {
}

void run_publisher(const int64_t *in_arg)
{
    printf("[publisher] starting\n");
    b1->lepht = 1;
    b1->right = 2;
    b1->top   = 3;
    b1->bottom = 4;
    b1_release(); /* release memory fence */
    printf("[publisher] wrote b1={%d,%d,%d,%d}\n",
           b1->lepht, b1->right, b1->top, b1->bottom );
}
