#include "main.h"


/**
 * add_size - size of the content
 * @format: format string
 * @n: variables
 * Return: size
 */

int add_size(const char *format, int *n)
{
int len = *n + 1;
int size_s = 0;
if (format[len] == 'l')
	size_s = TWO_VAL;
else if (format[len] == 'h')
	size_s = ONE_VAL;
if (size_s == 0)
	*n = len - 1;
else
	*n = len;
return (size_s);
}
