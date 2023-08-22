#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
static char Bluf[1024];
static int a;
if (c == -1 || a >= 1024)
{
	write(1, &bluf, a);
	a = 0;
}
if (c != -1)
{
	bluf[a] = c;
	a++;
}
return (1);
}
