// This file will not be overwritten so is safe to edit
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <stdint.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>

#include <seqNum.h>
#include <sp_int8_t.h>

sb_queue_int8_t_1_Recv_t periodQueue;

//------------------------------------------------------------------------------
// Implementation of AADL Input Event Data Port (out) named "p1_out"
//
// NOTE: If we only need polling style receivers, we can get rid of the SendEvent

// Assumption: only one thread is calling this and/or reading p1_in_recv_counter.
void p1_out_aadl_event_data_send(sp_int8_t_t *q, int8_t *data, seqNum_t *seqNum) {
    write_sp_int8_t(q, data, seqNum);
}

//------------------------------------------------------------------------------
// Testing

void period_wait(int port_fd, sb_queue_int8_t_1_Recv_t *q, sb_event_counter_t *numDropped) {
    int8_t data;
    while (!sb_queue_int8_t_1_dequeue(q, numDropped, &data)) {
    	int8_t val;
    	/* Blocking read */
    	int result = read(port_fd, &val, sizeof(val));
		if (result < 0) {
		    printf("Error reading period.\n");
		    //return -1;
		}
    }
}

int main(int argc, char *argv[])
{

    if (argc != 5) {
        printf("Usage: %s dataport dataport_size eventport\n\n"
               "Reads the c string contents of a specified dataport file to stdout",
               argv[0]);
        return 1;
    }

    char *dataport_name = argv[1];
    int length = atoi(argv[2]);
    assert(length > 0);
    
    char *eventport_name = argv[3];
    int length2 = atoi(argv[4]);
    assert(length2 > 0);
    
    int fd = open(dataport_name, O_RDWR);
    assert(fd >= 0);
    
    int fd2 = open(eventport_name, O_RDWR);
    assert(fd2 >= 0);

    char *dataport;
    if ((dataport = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 1 * getpagesize())) == (void *) -1) {
        printf("mmap dataport failed\n");
        close(fd);
    }

    char *period;
    if ((period = mmap(NULL, length2, PROT_READ | PROT_WRITE, MAP_SHARED, fd2, 1 * getpagesize())) == (void *) -1) {
        printf("mmap period failed\n");
        close(fd2);
    }

    int i = 0;
    int err = 0;
    seqNum_t datanum = 0;
    sb_event_counter_t ticknum = 0;
    int8_t data;

    init_sp_int8_t((sp_int8_t_t *)dataport, &datanum);
    sb_queue_int8_t_1_Recv_init(&periodQueue, (sb_queue_int8_t_1_t *)period);

    while (1) {

        // wait a bit and slow things down
        //usleep(500 * 1000);
        period_wait(fd2, &periodQueue, &ticknum);

        // Send a random number of data elements
        //int n = (random() % 10);
        //for(unsigned int j = 0; j < n; ++j){
            ++i;
            // Stage data
            data = (int8_t)i;
            // if (i%100 == 0)
            printf("%s: sending: %d\n", "sender", data);
            // Send the data
            p1_out_aadl_event_data_send((sp_int8_t_t *)dataport, &data, &datanum);
        //}
    }

    munmap(dataport, length);
    munmap(period, length2);
    close(fd);
    close(fd2);

    return 0;
}
