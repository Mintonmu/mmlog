#include "logcore.h"

void log_message(const char* message) {
    LOG_DEBUG(LOG_LEVEL_DEBUG, message);
}