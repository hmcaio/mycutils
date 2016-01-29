#include "stringUtils.h"


void strToUpper(char* str)
{
    if (!str)
        return;
    
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        str[i] = toupper(str[i]);
}

void strToLower(char* str)
{
    if (!str)
        return;
    
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        str[i] = tolower(str[i]);
}
