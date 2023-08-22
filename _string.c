#include "main.h"

/**
 * _strings  give string
 * @s: given string
 * Return: numbers of string
 */

int _strings(char *s)
{
int p = 0;
while (*s)
{
	_putchar(*s);
	s++;
	p++;
}
return (p);
}
