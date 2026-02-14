// This is a "Header Guard" - it prevents the file from being loaded twice
#ifndef LOGGER_H
#define LOGGER_H

// Define some levels (Kernel style)
#define LOG_INFO  0
#define LOG_WARN  1
#define LOG_ERR   2

void log_message(int level, char *message);

#endif
