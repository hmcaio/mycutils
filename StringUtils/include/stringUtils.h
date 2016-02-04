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

/**
 * strTrimLeading
 * Removes consecutive blanks (spaces and tabs) from the beginning of
 * the string. The original string is modified.
 * 
 * IN
 *  char* str: Original string to be trimmed.
 */
void strTrimLeading(char* str);

/**
 * strTrimTrailing
 * Removes consecutive blanks (spaces and tabs) from the end of the
 * string. The original string is modified.
 * 
 * IN
 *  char* str: Original string to be trimmed.
 */
void strTrimTrailing(char* str);

/**
 * strTrim
 * Removes consecutive blanks (spaces and tabs) from the beginning and
 * end of the string. The original string is modified.
 * 
 * IN
 *  char* str: Original string to be trimmed.
 */
void strTrim(char* str);


#endif
