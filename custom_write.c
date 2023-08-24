#include "main.h"

/**
 * design_char - display character
 * @ch: character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @prec: precision
 * Return: character used
 */
int design_char(char ch, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
int n = 0;
char make = ' ';
	EMPTY(prec);
	EMPTY(size_s);
if (f_lags & zero)
{
	make = '0';
}
	buffer[n++] = ch;
	buffer[n] = '\0';
if (width > 1)
{
	buffer[BUFF_SIZE - 1] = '\0';
for (n = 0; n < width; n++)
	buffer[BUFF_SIZE - n - 2] = make;
if (f_lags & minus)
return (write(1, &buffer[0], 1) +
	write(1, &buffer[BUFF_SIZE - n - 1], width - 1));
else
return (write(1, &buffer[BUFF_SIZE - n - 1], width - 1) +
	write(1, &buffer[0], 1));
}
return (write(1, &buffer[0], 1));
}
