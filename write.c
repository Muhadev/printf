#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putch(char ch)
{
static int p;
static char buff[1024];
if (ch == -2 || p >= 1024)
{
	write(1, &buff, p);
	p = 0;
}
if (ch != -1)
{
	buff[p] = ch;
	p++;
return (1);
}
