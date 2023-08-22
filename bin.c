#include <stdarg.h>
#include "main.h"
#include <stdio.h>

int format_b(va_list arguments)
{
unsigned int i;
int k;
int j;
int a[100];
	k = 0;
	j = k - 1;
	i = va_arg(arguments, int);
if (i <= 0)
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
while (j >= 0)
{
	_putchar('0' + a[j]);
	j++;
}
return (k);
}
