#include "logger.h"

int main() {
    log_message(LOG_INFO, "System booting...");
    log_message(LOG_WARN, "Battery low!");
    log_message(LOG_ERR, "Direct Memory Access failed!");
    return 0;
}