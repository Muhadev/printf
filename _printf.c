#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - customised printf
 * @format: of spec format
 * Return: variables output
*/
int _printf(const char *format, ...)
{
if (format != NULL)
{
int point = 0, num = 0;
int (*ptr)(va_list);
va_list arguments;
	va_start(arguments, format);
if (format[0] == '%' && format[1] == '\0')
return (-1);
while (format != NULL && format[num] != '\0')
{
if (format[num] == '%')
{
if (format[num + 1] == '%')
{
	point += _putchar(format[num]);
	num = num + 2;
}
else
{
	ptr = apply_func(format[num + 1]);
if (ptr)
	point = point + ptr(arguments);
else
{
	point = _putchar(format[num]) + _putchar(format[num + 1]);
}
	num += 2;
}
}
else
{
	point += _putchar(format[num]);
	num++;
}
}
	va_end(arguments);
return (point);
}
return (-1);
}
