#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#define FORMAT_SHORT 1
#define FORMAT_LONG 2

/** 
 * printf_design - a customised design of printf as
 * a variadic function
 * @string_format - embody the conversion specifiers.
 * @... : This allows adding of as much as possible variable
 */
void printf_design(const char *string_format, ...)
{
int check = 0;
int format_modifier = 0;
int result = 0;
long long input_ptr;
unsigned long input_str;
va_list info;
va_start(info, string_format);
