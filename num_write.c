#include "main.h"
/**
 * num_write - display character
 * @issue: arguments
 * @pt: types
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @prec: precision
 * Return: character used
 */
int num_write(int issue, int pt, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
int n = BUFF_SIZE - pt - 1;
char make = ' ', add_tp = 0;
	EMPTY(size_s);
if ((f_lags & zero) && !(f_lags & minus))
	make = '0';
if (issue)
	add_tp = '-';
else if (f_lags & plus)
	add_tp = '+';
else if (f_lags & space)
	add_tp = ' ';
return (print_num(pt, buffer, f_lags, width, prec,
	n, make, add_tp));
}
/**
 * print_num - display character
 * @make: arguments
 * @add_tp: add chars
 * @pt: types
 * @f_lags: check flags
 * @width: width
 * @n: size
 * @buffer: array of buffer
 * @prec: precision
 * Return: character used
 */
int print_num(int pt, char buffer[], int f_lags, int width,
	int prec, int n, char make, char add_tp)
{
int p, initial_make = 1;
if (prec == 0 && pt == BUFF_SIZE - 2 && buffer[pt] == '0' &&
	width == '0')
return (0);
if (prec == 0 && pt == BUFF_SIZE - 2 && buffer[pt] == '0')
	buffer[pt] = make = ' ';
if (prec > 0 && prec < n)
	make = ' ';
while (prec > n)
	buffer[--pt] = '0', n++;
if (add_tp != 0)
	n++;
if (width > n)
{
for (p = 1; p < width - n + 1; p++)
	buffer[p] = make;
buffer[p] = '\0';
if (f_lags & minus && make == ' ')
{
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[pt], n) + write(1, &buffer[1], p - 1));
}
else if (!(f_lags & minus) && make == ' ')
{
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[1], p - 1) + write(1, &buffer[pt], n));
}
else if (!(f_lags & minus) && make == '0')
{
if (add_tp)
	buffer[--initial_make] = add_tp;
return (write(1, &buffer[initial_make], p - initial_make) +
	write(1, &buffer[pt], n - (1 - initial_make)));
}
}
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[pt], n));
}
