/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <errno.h>

#include <sb_types.h>
#include <sb_event_counter.h>
#include <sb_queue_int8_t_1.h>

//------------------------------------------------------------------------------
// Implementation of AADL Input Event Data Port (in) named "p1_in"
// Three styles: poll, wait and callback.
//
// Callback would typically be avoid for safety critical systems. It is harder
// to analyze since the callback handler is run on some arbitrary thread.
//
// NOTE: If we only need polling style receivers, we can get rid of SendEvent

sb_queue_int8_t_1_Recv_t recvQueue;
sb_queue_int8_t_1_Recv_t periodQueue;

int dataport_fd;
int eventport_fd;

//------------------------------------------------------------------------------
// User specified input data receive handler for AADL Input Event Data Port (in) named
// "p1_in".

void p1_in_aadl_event_data_receive(sb_event_counter_t *numDropped, int8_t *data) {
    printf("Receiver: received: %d  numDropped: %d\n", *data, *numDropped);
}

// Assumption: only one thread is calling this and/or reading p1_in_recv_counter.
bool p1_in_aadl_event_data_poll(sb_event_counter_t *numDropped, int8_t *data) {
    return sb_queue_int8_t_1_dequeue(&recvQueue, numDropped, data);
}

void p1_in_aadl_event_data_wait(sb_event_counter_t *numDropped, int8_t *data) {
    while (!p1_in_aadl_event_data_poll(numDropped, data)) {
    	int8_t val;
    	/* Blocking read */
    	int result = read(dataport_fd, &val, sizeof(val));
		if (result < 0) {
		    printf("Error: %s\n", strerror(errno));
		    //return -1;
		}
    }
}


//------------------------------------------------------------------------------
// Testing - Three tests for the different styles: poll, wait and callback.
//
// NOTE: The constants in the tests were chosen to cause a variety of
// situations at runtime including dropped packets and no data
// available. These numbers may not cause the same variety of behaviour in
// different test environments.

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

void run_poll(void) {
    sb_event_counter_t numDropped = 0;
    int8_t data = 0;
    int notfound = 1;

    while (true) {
        // wait a bit and slow things down
        //usleep(500 * 1000);
        period_wait(eventport_fd, &periodQueue, &numDropped);
        
        // Random number of polls for testing
        notfound = 1;
        while (notfound) {
            bool dataReceived = p1_in_aadl_event_data_poll(&numDropped, &data);
            if (dataReceived) {
                p1_in_aadl_event_data_receive(&numDropped, &data);
                notfound = 0;
                
            } else {
                printf("%s: received nothing\n", "Receiver");
            }
        }
    }

}

void run_wait(void) {
    sb_event_counter_t numDropped = 0;
    int8_t data = 0;

    while (true) {
        period_wait(eventport_fd, &periodQueue, &numDropped);

        p1_in_aadl_event_data_wait(&numDropped, &data);
        p1_in_aadl_event_data_receive(&numDropped, &data);

        // Busy loop to wait a bit and slow things down randomly
        //int n = (random() % 10) * 5000;
		//usleep(n);
    }
}


int main(int argc, char *argv[])
{

    if (argc != 4) {
        printf("Usage: %s dataport dataport_size eventport\n\n"
               "Reads the c string contents of a specified dataport file to stdout",
               argv[0]);
        return 1;
    }

    char *dataport_name = argv[1];
    int length = atoi(argv[2]);
    assert(length > 0);

    char *eventport_name = argv[3];
    
    dataport_fd = open(dataport_name, O_RDWR);
    assert(dataport_fd >= 0);

    eventport_fd = open(eventport_name, O_RDWR);
    assert(eventport_fd >= 0);

    char *dataport;
    if ((dataport = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, dataport_fd, 1 * getpagesize())) == (void *) -1) {
        printf("mmap dataport failed\n");
        close(dataport_fd);
    }

    char *period;
    if ((period = mmap(NULL, length, PROT_READ | PROT_WRITE, MAP_SHARED, eventport_fd, 1 * getpagesize())) == (void *) -1) {
        printf("mmap period failed\n");
        close(eventport_fd);
    }

    sb_queue_int8_t_1_Recv_init(&recvQueue, (sb_queue_int8_t_1_t *)dataport);
    sb_queue_int8_t_1_Recv_init(&periodQueue, (sb_queue_int8_t_1_t *)period);

    run_poll();
    //run_wait();

    munmap(dataport, length);
    munmap(period, length);
    close(dataport_fd);
    close(eventport_fd);

    return 0;
}
