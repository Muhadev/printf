#include "main.h"
#include <stdio.h>

/**
 * format_b - binary number
 * @arguments: variable input
 * Return: no return
 */
int format_b(va_list arguments)
{
unsigned int i;
int k;
int j;
int a[100];
	k = 0;
	i = va_arg(arguments, int);
if (i == 0)
{
	_putchar('0');
return (1);
}
while (i > 0)
{
	a[k] = i % 2;
	i /= 2;
	k++;
}
for (j = k - 1; j >= 0; j--)
{
	_putchar('0' + a[j]);
}
return (k);
}
