#include <stdio.h>
#include "stringStack.h"


int main()
{
    StrStack stack;

    initStrStack(&stack);

    char* str = "Yahoo";
    if (!push(&stack, str))
        printf("Failed\n");
    
    char* str2 = "poskpdadsp";
    if (!push(&stack, str2))
        printf("Failed\n");

    if (!push(&stack, str))
        printf("Failed\n");

    char peeked[100];
    peek(&stack, peeked, 100);
    printf("Peeked [%s]\n", peeked);

    char popped[100];
    pop(&stack, popped, 100);
    printf("Popped [%s]\n", popped);

    destroyStrStack(&stack);

    return 0;
}