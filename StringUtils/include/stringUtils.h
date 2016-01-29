#ifndef __CMATSUMO_STRINGUTILS__
#define __CMATSUMO_STRINGUTILS__


#include <string.h>
#include <ctype.h>


/**
 * strToUpper
 * Transform every character from the string in its corresponding
 * uppercase form (if such form exists). In-place operation.
 * 
 * IN
 *  char* str: Original string to be modified.
 */
void strToUpper(char* str);

/**
 * strToLower
 * Transform every character from the string in its corresponding
 * lowercase form (if such form exists). In-place operation.
 * 
 * IN
 *  char* str: Original string to be modified.
 */
void strToLower(char* str);


#endif
