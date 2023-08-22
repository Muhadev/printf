#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * format_X - upper hexa
 * @arguments: variable input
 * Return: no return
 */
int format_X(va_list arguments)
{
unsigned int i;
int k;
int j;
int temporary;
int a[100];
	temporary = 0;
	k = 0;
	i = va_arg(arguments, unsigned int);
if (i == 0)
{
	_putchar('0');
return (1);
}
while (i != 0)
{
	temporary = i % 16;
if (temporary < 10)
{
	a[k] = 48 + temporary;
}
else
{
	a[k] = 55 + temporary;
}
	i /= 16;
	k++;
}
for (j = k - 1; j >= 0; j--)
	_putchar(a[j]);
return (k);
}
