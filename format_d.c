#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_d - display float
 * @arguments: the float arguments implemented
 * Return: float used
 */
int format_d(va_list arguments)
{
unsigned int divisor, num, add, temp;
int p;
	p = va_arg(arguments, int);
	add = 0;
if (p < 0)
{
	num = (-1 * p);
	add = add + _putchar('-');
}
else
{
	num = p;
}
	temp = num;
	divisor = 1;
while (temp > 9)
{
	temp /= 10;
	divisor *= 10;
}
while (divisor >= 1)
{
	add = add + _putchar('0' + ((num / divisor) % 10));
	divisor /= 10;
}
return (add);
}
