/* testpdmon/components/destination/src/destination.c */

#include <camkes.h>
#include <stdio.h>
#include <sb_proc_types.h>
#include <sb_destination_t_impl.h>

void testdpmon_destination_component_init(const int64_t *in_arg)
{
    printf("testdpmon_destination_component_init called\n");
    
    printf("dest: can we write to the shared data?\n");
    
    printf("dest: the value is now %i\n", deq->data);
    deq->data = 42;
    printf("dest: the value is now %i\n", deq->data);
}


/* Handle monsig notification: there is QueuedData
 */
void run_receiver(const int64_t *in_arg)
{
    /* keep dequeuing until no more things can be had
     */
    int8_t value;

    if(sb_deq_read(&value)){
        printf("[destination] value {%d}\n", value);
    }
}
