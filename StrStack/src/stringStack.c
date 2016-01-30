#include "stringStack.h"


void initStrStack(StrStack* stack)
{
    stack->stack = NULL;
    stack->count = 0;
}

void destroyStrStack(StrStack* stacke)
{
    if (!stacke)
        return;

    StrStackNode* p;
    while (stacke->stack)
    {
        p = stacke->stack;
        //printf("[%d][%s]\n", stacke->count, p->str);
        stacke->stack = (stacke->stack)->next;
        free(p->str);
        free(p);
        (stacke->count)--;
    }
}

void printStrStack(StrStack stack)
{
    StrStackNode* p = stack.stack;
    while (p)
    {
        printf("[%s]->", p->str);
        p = p->next;
    }
    printf("End.\n");
}

StrStackNode* createNode(char* str)
{
    StrStackNode* newNode = malloc(sizeof(StrStackNode));

    if (newNode)
    {
        int len = strlen(str);
        newNode->str = malloc(len+1);  //Allocate memory for the string on the heap
        strncpy(newNode->str, str, len);
        newNode->str[len] = '\0';
        newNode->next = NULL;
    }

    return newNode;
}

int push(StrStack* stack, char* str)
{
    if (!stack)
        return 0;

    StrStackNode* newNode = createNode(str);
    if (!newNode)
        return 0;  //Could not create node: out of memory

    newNode->next = stack->stack;
    stack->stack = newNode;
    (stack->count)++;

    printStrStack(*stack);

    return 1;
}

int peek(StrStack* stack, char* str, int n)
{
    if (!stack || !stack->stack || !str || n <= 0)
        return -1;  //Invalid argument or stack is empty

    int lenStackTop = strlen(stack->stack->str);
    strncpy(str, stack->stack->str, n);
    str[n-1] = '\0';
    return lenStackTop <= n-1 ? 1 : 0;
}

int pop(StrStack* stack, char* str, int n)
{
    if (!stack || !stack->stack || !str || n <= 0)
        return -1;  //Invalid argument or stack is empty

    int result = peek(stack, str, n);

    StrStackNode* p = stack->stack;
    stack->stack = (stack->stack)->next;
    free(p->str);
    free(p);
    (stack->count)--;

    return result;
}
