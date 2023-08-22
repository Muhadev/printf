#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_mod - display %
 * @arguments:  the % arguments implemented
 * Return: module used
 */
int format_mod(va_list arguments)
{
const char *array;
int n;
	n = 0;
	array = va_arg(arguments, const char*);
while (array[n] != '\0')
{
if (array[n] == '%' && array[n + 1] != '\0')
{
return (array[n + 1]);
}
	n++;
}
return (-1);
}


/**
 * format_s - display string
 * @arguments: the string arguments implemented
 * Return: string used
 */
int format_s(va_list arguments)
{
char *string;
int num;
int i;
	num = 0;
	i = 0;
	string = va_arg(arguments, char*);
if (string == NULL)
	string = "NULL";
while (string[num] != '\0')
{
	_putchar(string[num]);
	num++;
	i++;
}
return (i);
}


/**
 * format_c - display character
 * @arguments: the character arguments implemented
 * Return: character used
 */
int format_c(va_list arguments)
{
int characters;
	characters = va_arg(arguments, int);
return (_putchar(characters));
}


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


/**
 * format_i - display integer
 * @arguments: the integer arguments implemented
 * Return: float function used
 */
int format_i(va_list arguments)
{
return (format_d(arguments));
}
