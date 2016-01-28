#include "debugUtils.h"


void debugPrint(int level, const char* format, ...)
{
#ifdef DEBUG
    if (level <= DEBUG)
    {
        va_list args;  //Holds a list of arguments with variable length
        va_start(args, format);  //Initialize args with all the arguments that follow format in the parameter list
        vprintf(format, args);  //Print to stdout
        va_end(args);
    }
#endif
}
