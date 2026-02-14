#include <stdio.h>
#include "logger.h" // Include our own header

void log_message(int level, char *message) {
    printf("[TIME: 00:00] "); // Fake timestamp

    switch(level) {
        case LOG_INFO: printf("INFO: "); break;
        case LOG_WARN: printf("WARNING: "); break;
        case LOG_ERR:  printf("ERROR: "); break;
        default:       printf("LOG: "); break;
    }

    printf("%s\n", message);
}