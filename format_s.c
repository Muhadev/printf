#include "main.h"
#include <stdio.h>
#include <stdarg.h>
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
	string = "(null)";
while (string[num] != '\0')
{
	_putchar(string[num]);
	num++;
	i++;
}
return (i);
}
