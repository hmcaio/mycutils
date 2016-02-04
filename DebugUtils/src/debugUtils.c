#include "debugUtils.h"


void printd(int mask, const char* format, ...)
{
#ifdef DEBUG
    if ((mask & DEBUG) == mask)
    {
        va_list args;  //Holds a list of arguments with variable length
        va_start(args, format);  //Initialize args with all the arguments that follow format in the parameter list
        vprintf(format, args);  //Print to stdout
        va_end(args);
    }
#endif
}

int fprintd(int mask, const char* format, ...)
{
#ifdef DEBUG
    if ((mask & DEBUG) == mask)
    {
        static FILE* debugFile;
        if (!debugFile)
        {
            debugFile = fopen("debug.txt", "w");
            if (!debugFile)
            {
                printf("Could not open debug file.\n");
                getch();
                return 0;
            }
        }

        va_list args;  //Holds a list of arguments with variable length
        va_start(args, format);  //Initialize args with all the arguments that follow format in the parameter list
        vfprintf(debugFile, format, args);  //Print to file
        va_end(args);

        fflush(debugFile);
    }
#endif

    return 1;
}