#ifndef __CMATSUMO_STRINGSTACK__
#define __CMATSUMO_STRINGSTACK__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


////////////////////////////////////////////////////////TYPE DEFINITIONS
/**
 * StrStackNode
 * Node for a stack of strings.
 */
typedef struct _strStackNode
{
    char* str;  //String value
    struct _strStackNode* next;  //Reference for the next node
} StrStackNode;

/**
 * StrStack
 * Stack for storage of strings. This structure contains a reference to
 * the top of the stack and a counter of elements.
 */
typedef struct
{
    StrStackNode* stack;  //Top of stack
    int count;  //Node counter
} StrStack;


/////////////////////////////////////////////////////FUNCTION PROTOTYPES
/**
 * initStrStack
 * Initializes the StrStack structure.
 * 
 * IN
 *  StrStack* stack: The stack to be initialized.
 */
void initStrStack(StrStack* stack);

/**
 * destroyStrStack
 * Destroy the given stack by freeing all the memory held by its nodes.
 * 
 * IN
 *  StrStack* stack: Stack to be destroyed.
 */
void destroyStrStack(StrStack* stack);

/**
 * printStrStack
 * Prints all the nodes in the stack, starting by the top of the stack.
 * 
 * IN
 *  StrStack stack: Stack to be displayed.
 */
void printStrStack(StrStack stack);

/**
 * push
 * Inserts a new node on the top of the stack with the string given.
 * 
 * IN
 *  StrStack* stack: The stack that will receive the new element.
 *  char* str: String value to be inserted in the stack.
 * 
 * OUT
 *  Returns 0 if the operation was not successful (invalid stack or out
 * of memory). Returns 1 on success.
 */
int push(StrStack* stack, char* str);

/**
 * peek
 * Retrieves the string value on the top of the stack, without removing
 * it from the stack.
 * 
 * IN
 *  StrStack* stack: The stack on which to perform the operation.
 *  char* str: Buffer to hold the string value.
 *  int n: Maximum size of the buffer.
 * 
 * OUT
 *  Returns -1 if the stack is invalid or empty or the string buffer
 * given is invalid (NULL) or the maximum size of the buffer given is
 * less or equal to 0. Returns 1 if the string value was retrieved and
 * successfully stored in the buffer. Returns 0 if the length of the
 * string in the top of the stack is greater than the buffer size (in
 * this case the value is still stored in the buffer, but it is
 * incomplete).
 */
int peek(StrStack* stack, char* str, int n);

/**
 * pop
 * Gets the value of the element on the top of the stack and removes it
 * from the stack (frees the memory associated to the element).
 * 
 * IN
 *  StrStack* stack: The stack on which to perform the operation.
 *  char* str: Buffer to hold the string value.
 *  int n: Maximum size of the buffer.
 * 
 * OUT
 *  Returns -1 if the stack is invalid or empty or the string buffer
 * given is invalid (NULL) or the maximum size of the buffer given is
 * less or equal to 0. Returns 1 if the string value was retrieved and
 * successfully stored in the buffer. Returns 0 if the length of the
 * string in the top of the stack is greater than the buffer size (in
 * this case the value is still stored in the buffer, but it is
 * incomplete).
 */
int pop(StrStack* stack, char* str, int n);


#endif
