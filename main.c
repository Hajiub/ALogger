#include "logger.h"

int main(void)
{
    LOGDEBUG("This is debug dude!");
    LOGERROR("This is an Erorr");
    LOGINFO("This is an INFO");
    LOGFATAL("This is FATAL");
    return 0;
}