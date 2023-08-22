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
char *array;

	array = "%";
while (va_arg(arguments, int) == *array)
{
return (*array);
}
return (*array);
}
