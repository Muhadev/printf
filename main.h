#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#define BUFF_SIZE 1024
/**
 * struct mem - struct
 * @NoNull: does not support NULL
 * @str: applied func
 */
typedef struct mem
{
	char *NoNull;
	int (*str)(va_list);
} offset;


typedef struct flags
{
    int plus;
    int space;
    int hash;
} flags_t;
int get_flag(char s, flags_t *f);

int _printf(const char *format, ...);
int _putchar(char c);
int (*apply_func(char letter))(va_list arguments);
int format_s(va_list arguments);
int format_c(va_list arguments);
int format_mod(va_list arguments);
int format_d(va_list arguments);
int format_b(va_list arguments);
int format_i(va_list arguments);
int format_x(va_list arguments);
int format_X(va_list arguments);
int format_o(va_list arguments);
int format_u(va_list arguments);
#endif /* MAIN_H */
