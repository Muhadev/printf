#include "main.h"


/**
 * add_prec - precisions to print
 * @format: format string
 * @n: variables
 * @arguments: information
 * Return: precision
 */
int add_prec(const char *format, int *n, va_list arguments)
{
int len = *n + 1;
int prec = -1;
if (format[len] != '.')
return (prec);
	prec = 0;
for (len = len + 1; format[len] != '\0'; len++)
{
if (coop(format[len]))
{
	prec = prec * 10;
	prec = prec + format[len] - '0';
}
else if (format[len] == '*')
{
	len++;
	prec = va_list(arguments, int);
break;
}
else
break;
}
	*n = len - 1;
return (prec);
}
