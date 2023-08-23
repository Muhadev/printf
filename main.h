#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct mem - struct
 * @NoNull: validate chars
 * @func:  function
 */

typedef struct mem
{
char *NoNull;
int (*func)(va_list);
} offset;

int _printf(const char *format, ...);
int (*apply_func(char letter))(va_list arguments);
int format_x(va_list arguments);
int format_c(va_list arguments);
int format_i(va_list arguments);
int format_d(va_list arguments);
int format_mod(va_list arguments);
int format_s(va_list arguments);
int format_X(va_list arguments);
int _putchar(char c);
int format_o(va_list arguments);
int format_u(va_list arguments);
int format_b(va_list arguments);
#endif
