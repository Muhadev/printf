#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * format_u - print unsigned int output
 * @arguments: variable inputs
 * Return: no return
 */

int format_u(va_list arguments)
{
unsigned int i = va_arg(arguments, unsigned int);
int k;
int j;
int l;
int m;
long int val, val_t;
	k = 0;
	j = 0;
	l = 1;
	m = 1;
	val = i;
while (val > 0)
{
	val = val / 10;
	j++;
}
while (l < j)
{
	m = m * 10;
	l++;
}
while (m >= 1)
{
	val_t = (i / m) % 10;
	_putchar('0' + val_t);
	k++;
	m = m / 10;
}
return (k);
}
