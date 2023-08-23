#include "main.h"

/**
 * print_pointer - display character
 * @n: len of num
 * @pt: types
 * @f_lags: check flags
 * @width: width
 * @initial_make: size
 * @buffer: array of buffer
 * @add_tp: add characters
 * @make: rep character
 * Return: character used
 */
int print_pointer(char buffer[], int pt, int n, int width,
	int f_lags, char make, char add_tp, int initial_make)
{
int p;
if (width > n)
{
for (p = 3; p < width - n + 3; p++)
	buffer[p] = make;
buffer[p] = '\0';
if (f_lags & minus && make == ' ')
{
	buffer[--pt] = 'x';
	buffer[--pt] = '0';
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[pt], n) + write(1, &buffer[3], p  - 3));
}
else if (!(f_lags & minus) && make == ' ')
{
	buffer[--pt] = 'x';
	buffer[--pt] = '0';
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[3], p - 3) + write(1, &buffer[pt], n));
}
else if (!(f_lags & minus) && make == '0')
{
if (add_tp)
	buffer[--initial_make] = add_tp;
buffer[1] = '0';
buffer[2] = 'x';
return (write(1, &buffer[initial_make], p - initial_make) +
	write(1, &buffer[pt], n - (1 - initial_make) - 2));
}
}
	buffer[--pt] = 'x';
	buffer[--pt] = '0';
if (add_tp)
	buffer[--pt] = add_tp;
return (write(1, &buffer[pt], BUFF_SIZE - pt - 1));
}
