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

/**
 * format_x - lower hexa
 * @arguments: variable input
 * Return: no return
 */
int format_x(va_list arguments)
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
	a[k] = 87 + temporary;
}
	i /= 16;
	k++;
}
for (j = k - 1; j >= 0; j--)
	_putchar(a[j]);
return (k);
}

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
