#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

void design_buffer(char buffer[], int *buff);
/**
 * _printf - customised printf
 * @format: of spec format
 * Return: variables output
*/
int _printf(const char *format, ...)
{
int n;
int num = 0;
int chars_count = 0;
int size_s, prec, f_lags, buff = 0, width;
va_list arguments;
char buffer[BUFF_SIZE];
if (format == NULL)
return (-1);
	va_start(arguments, format);
for (n = 0; format && format[n] != '\0'; n++)
{
if (format[n] != '%')
{
	buffer[buff++] = format[n];
if (buff == BUFF_SIZE)
	design_buffer(buffer, &buff);
chars_count++;
}
else
{
	design_buffer(buffer, &buff);
	f_lags = add_flags(format, &n);
	prec = add_prec(format, &n, arguments);
	width = add_width(format, &n, arguments);
	size_s = add_size(format, &n);
	++n;
	num = design_printf(format, &n, arguments, buffer, f_lags, prec, width, size_s);
if (num == -1)
return (-1);
	chars_count = chars_count + num;
}
}
	design_buffer(buffer, &buff);
	va_end(arguments);
return (chars_count);
}

/**
 * design_buffer - display context of a buffer
 * @buffer: characters
 * @buff: loop through the characters
 */

void design_buffer(char buffer[], int *buff)
{
if (*buff > 0)
	write(1, &buffer[0], *buff);
*buff = 0;
}
