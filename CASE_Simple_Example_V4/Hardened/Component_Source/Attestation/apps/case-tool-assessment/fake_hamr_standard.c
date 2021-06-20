#include <stdbool.h>
#include <stdio.h>
#include <sys/time.h>

void ffiapi_receiveInput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  return;
}

void ffiapi_sendOutput(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  return;
}

void ffiapi_logInfo(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  printf("INFO: %s\n", parameter);
} 

void ffiapi_logDebug(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  printf("DEBUG: %s\n", parameter);
} 

void ffiapi_logError(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes){
  printf("ERROR: %s\n", parameter);
} 

int difftimeval(struct timeval end, struct timeval start) {
    return (end.tv_sec  - start.tv_sec)* 1000000
         + (end.tv_usec - start.tv_usec);
}

// Waits until 0.5 seconds after last pacer tick
void ffisb_pacer_notification_wait(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  static bool firstRun = true;
  static struct timeval prev;

  if (firstRun) {
    firstRun = false;
    gettimeofday(&prev, NULL);
  } else {
    struct timeval now;
    gettimeofday(&now, NULL);
    for(; difftimeval(now, prev) < 500000; gettimeofday(&now, NULL)) {}
    prev = now;
  }
  output[0] = true;
}

void ffisb_pacer_notification_emit(unsigned char *parameter, long parameterSizeBytes, unsigned char *output, long outputSizeBytes) {
  output[0] = true;
}