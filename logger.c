#include <stdio.h>
#include "logger.h" // Include our own header

void log_message(char *message) {
    printf("[KERNEL_LOG]: %s\n", message);
}