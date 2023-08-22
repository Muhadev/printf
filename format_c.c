#include "main.h"
#include <stdio.h>
#include <stdarg.h>

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
