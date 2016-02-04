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

void strTrimLeading(char* str)
{
    if (!str)
        return;

    //Trim leading blanks
    int i = 0, j = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    while (str[i])
        str[j++] = str[i++];
    str[j] = '\0';
}

void strTrimTrailing(char* str)
{
    if (!str)
        return;
    
    //Trim trailing blanks
    int i = strlen(str)-1;
    while (i > 0 && (str[i] == ' ' || str[i] == '\t'))
        i--;
    str[++i] = '\0';
}

void strTrim(char* str)
{
    strTrimLeading(str);

    strTrimTrailing(str);
}
