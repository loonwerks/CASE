/* testshare/components/subscriber/src/subscriber.c */

#include <stdio.h>
#include <camkes.h>
#include <sb_subscriber_impl.h>
#include <sb_proc_types.h>

void testshare_subscriber_component_init(const int64_t *arg) {
    printf("testshare_subscriber_component_init called\n");
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
