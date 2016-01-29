#include <stdio.h>
#include <string.h>
#include "stringUtils.h"


void testStrToUpper();
void testStrToLower();


int main(int argc, char* argv[])
{
    printf("Testing strToUpper():\n");
    testStrToUpper();
    
    printf("\nTesting strToLower():\n");
    testStrToLower();
    
    return 0;
}

void testStrToUpper()
{
    char str[100];
    
    strcpy(str, "Hello, world!");
    printf("[%-20s] -> ", str);
    strToUpper(str);
    printf("[%-20s]\n", str);
    
    strcpy(str, "");
    printf("[%-20s] -> ", str);
    strToUpper(str);
    printf("[%-20s]\n", str);
    
    strcpy(str, "123abcDEF.#()");
    printf("[%-20s] -> ", str);
    strToUpper(str);
    printf("[%-20s]\n", str);
    
}

void testStrToLower()
{
    char str[100];
    
    strcpy(str, "Hello, world!");
    printf("[%-20s] -> ", str);
    strToLower(str);
    printf("[%-20s]\n", str);
    
    strcpy(str, "");
    printf("[%-20s] -> ", str);
    strToLower(str);
    printf("[%-20s]\n", str);
    
    strcpy(str, "123abcDEF.#()");
    printf("[%-20s] -> ", str);
    strToLower(str);
    printf("[%-20s]\n", str);
    
}
