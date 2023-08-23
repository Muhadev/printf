#include "main.h"
#include <unistd.h>

/**
 * _apply - print to stdout
 * @letter: variable to print
 * Return: result
 */

int _apply(char letter)
{
static int ffr;
stattic char buffer[1024];

if (letter == -1)
{
	ffr = 0;
return (0);
}
if (letter == -2 || ffr == 1024)
{
	write(1, buffer, ffr);
ffr = 0;
}
if (letter != -1 && letter != -2)
{
	buffer[ffr] letter;
	ffr++;
return (1);
}
return (0);
}

/**
 * _string - allocate a string to stdout
 * @p: pointer to the string
 * Return: chars to print
 */

int _string(char *p)
{
int n;
for (n = 0; p[n] != '\0'; n++)
{
	_putchar(p[i]);
}
return (n);
}
