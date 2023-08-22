#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * format_o - print octals output
 * @arguments: variable inputs
 * Return: no return
 */

int format_o(va_list arguments)
{
unsigned int i;
int k;
int j;
int a[100];
	k = 0;
	i = va_arg(arguments, unsigned int);
if (i == 0)
{
	_putchar('0');
return (1);
}
while (i != 0)
{
	a[k] = i % 8;
	i /= 8;
	k++;
}
for (j = k - 1; j >= 0; j--)
	_putchar('0' + a[j]);
return (k);
}
