#ifndef __CMATSUMO_DEBUGUTILS__
#define __CMATSUMO_DEBUGUTILS__


#include <stdio.h>
#include <stdarg.h>


//#define DEBUG 6


/**
 * debugPrint
 * Helper function to print debug messages to stdout. The messages are
 * only printed if the bits of the mask are on (bit equals to 1) in the
 * DEBUG macro. If DEBUG is not defined, no message is printed.
 * 
 * IN:
 *  int mask: Bitwise mask to determine if the message should be printed
 *      or not according to the value of DEBUG.
 *  const char *format: A string (format specifier) with text to be
 *      written to stdout (similar to printf).
 *  ... (additional arguments): Additional arguments that may be used in
 *      the format string.
 */
void debugPrint(int mask, const char* format, ...);


#endif
