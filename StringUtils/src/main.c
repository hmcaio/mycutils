#include <stdio.h>
#include <string.h>
#include "stringUtils.h"


void testStrToUpper();
void testStrToLower();
void testStrTrim();


int main(int argc, char* argv[])
{
    //testStrToUpper();    
    //testStrToLower();
    testStrTrim();
    
    return 0;
}

void testStrToUpper()
{
    char str[100];
    
    printf("Testing strToUpper():\n");

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

    printf("\nTesting strToLower():\n");
    
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

void testStrTrim()
{
    char str[100];

    printf("\nTesting strTrim():\n");

    strcpy(str, "");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "   \t\t ");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "Hello, world  yo!");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "     Hello, world  yo!");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "Hello, world  yo!        ");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "\t  \tHello, world  yo!");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "Hello, world  yo!   \t  \t");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    strcpy(str, "     Hello, world  yo!    a");
    printf("[%s] -> ", str);
    strTrim(str);
    printf("[%s]\n", str);

    char* str2 = NULL;
    strTrim(str2);
}
