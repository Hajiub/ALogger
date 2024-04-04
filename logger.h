#ifndef _LOGGER_H
#define _LOGGER_H

typedef enum {
    FATAL=0,
    ERROR,
    WARN,
    DEBUG,
    INFO,
} LogLevel;

void logMessage(LogLevel level, const char *format, ...);


#define LOGDEBUG(message, ...) logMessage(DEBUG, message, ##__VA_ARGS__);
#define LOGFATAL(message, ...) logMessage(FATAL, message, ##__VA_ARGS__);
#define LOGWARN(message, ...) logMessage(WARN, message, ##__VA_ARGS__);
#define LOGERROR(message, ...) logMessage(ERROR, message, ##__VA_ARGS__);
#define LOGINFO(message, ...) logMessage(INFO, message, ##__VA_ARGS__);

#endif