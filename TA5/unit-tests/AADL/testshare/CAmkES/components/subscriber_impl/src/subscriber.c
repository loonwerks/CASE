/* testshare/components/subscriber/src/subscriber.c */

#include <stdio.h>
#include <camkes.h>
#include <camkes/dataport.h>
#include <testshare_types.h>

/* Dataport b2 */
extern testshare__Thing_t *b2;
/* macro: void b2_acquire() */
/* macro: void b2_release() */

void testshare_subscriber_component_init(const int64_t *arg) {
    printf("[subscriber] starting--poll for nonzero thing_t\n");
}

void run_subscriber(const int64_t *arg)
{
    b2_acquire();  /* acquire memory fence */
    if (b2->bottom) {
        printf("[subscriber] b2={%d,%d,%d,%d}\n",
               b2->lepht, b2->right, b2->top, b2->bottom );
    }
}
