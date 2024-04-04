#include "logger.h"

#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

void logMessage(LogLevel level, const char *format, ...)
{

    time_t currentTime;
    time(&currentTime);
    char *timeString = ctime(&currentTime);
    timeString[strlen(timeString) - 1] = '\0';
    const char *levelString[5] = {"FATAL", "ERROR", "WARN", "DEBUG", "INFO"};
    fprintf(stderr, "[%s] [%s] ", timeString, levelString[level]);

    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    fprintf(stderr,"\n");
    va_end(args);
}
