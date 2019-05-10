/* testepmon/components/consumer/src/consumer */

#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_consumer_t_impl.h>

void testepmon_consumer_component_init(const int64_t *in_arg)
{
    printf("testepmon_consumer_component_init called\n");
}


/* Handle monsig notification: there is QueuedData
 */
void testepmon_consumer_s_event_handler(const int8_t * in_arg)
{
    /* keep dequeuing until no more things can be had
     */
    int8_t value;

    if (sb_deq_dequeue(&value)) {
        printf("[destination] value {%d}\n", value);
    } else {
        printf("[destination] no value consumed.\n");
    }
}
