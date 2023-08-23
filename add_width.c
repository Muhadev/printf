#include "main.h"

/**
 * add_width - size of the content
 * @format: format string
 * @n: variables
 * @arguments: information
 * Return: width
 */
int add_width(const char *format, int *n, va_list arguments)
{
int len;
int width = 0;
for (len = *n + 1; format[len] != '\0'; len++)
{
if (coop(format[len]))
{
	width = width * 10;
	width = width + format[len] - '0';
}
else if (format[len] == '*')
{
	len++;
	width = va_arg(arguments, int);
break;
}
else
break;
}
	*n = len - 1;
return (width);
}
