#include "main.h"

/**
 * write_unsign - display character
 * @issue: arguments
 * @pt: types
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @prec: precision
 * Return: character used
 */
int write_unsign(int issue, int pt, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
int n = BUFF_SIZE - pt - 1, p = 0;
char make = ' ';
	EMPTY(issue);
	EMPTY(size_s);
if (prec == 0 && pt == BUFF_SIZE - 2 && buffer[pt] == '0')
return (0);
if (prec > 0 && prec < n)
	make = ' ';
while (prec > n)
{
	buffer[--pt] = '0';
	n++;
}
if ((f_lags & zero) && !(f_lags & minus))
	make = '0';
if (width > n)
{
for (p = 0; p < width - n; p++)
	buffer[p] = make;
buffer = '\0';
if (f_lags & minus)
{
return (write(1, &buffer[pt], n) + write(1, &buffer[0], p));
}
else
{
return (write(1, &buffer[0], p) + write(1, &buffer[pt], n));
}
}
return (write(1, &buffer[pt], n));
}
