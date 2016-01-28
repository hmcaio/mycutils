#ifndef __CMATSUMO_DEBUGUTILS__
#define __CMATSUMO_DEBUGUTILS__


#include <stdio.h>
#include <stdarg.h>


/**
 * debugPrint
 * Helper function to print debug messages to stdout. The messages are
 * only printed if the debug level is less than the value of the macro
 * DEBUG. If DEBUG is not defined, no message is printed.
 * 
 * IN:
 *  int level: Level of debug message.
 *  const char *format: A string (format specifier) with text to be
 *      written to stdout (similar to printf).
 *  ... (additional arguments): Additional arguments that may be used in
 *      the format string.
 */
void debugPrint(int level, const char* format, ...);


#endif
