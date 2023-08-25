#include "main.h"
/**
 * format_i - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: iniformations
 * @prec: precision
 * Return: character used
 */

int format_i(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
int n = BUFF_SIZE - 2;
int issue = 0;
long int p = va_arg(content, long int);
unsigned long int value;
	p = conv_size(p, size_s);
if (p == 0)
{
	write (1, "0", 1);
}
else
{
	buffer[BUFF_SIZE - 1] = '\0';
	value = (unsigned long int)p;
}
if (p < 0)
{
	value = (unsigned long int)((-1) * p);
	issue = 1;
}
while (value > 0)
{
	buffer[n--] = (value % 10) + '0';
	value = value / 10;
}
	n++;
return (num_write(issue, n, buffer, f_lags, width, prec,
	size_s));
}
/**
 * format_b - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */

int format_b(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
unsigned int a, b, c, d;
int check;
unsigned int array[32];
	EMPTY(buffer);
	EMPTY(f_lags);
	EMPTY(width);
	EMPTY(prec);
	EMPTY(size_s);
	a = va_arg(content, unsigned int);
	b = 2147483648;
	array[0] = a / b;
for (c = 1; c < 32; c++)
{
	b = b / 2;
	array[c] = (a / b) % 2;
}
for (c = 0, d = 0, check = 0; c < 32; c++)
{
	d = d + array[c];
if (d || c == 31)
{
char f = '0' + array[c];
	write(1, &f, 1);
	check++;
}
}
return (check);
}
