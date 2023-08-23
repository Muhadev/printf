#include "main.h"

/**
 * format_u - unsign number
 * @content: arguments
 * @buffer: contain array
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @prec: precision
 * Return: character used
 */
int format_u(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
int n = BUFF_SIZE - 2;
unsigned long int value = va_arg(content, unsigned long int);
value =  conv_unsign(value, size_s);
if (value == 0)
	buffer[n--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (value > 0)
{
	buffer[n--] = (value % 10) + '0';
	value = value / 10;
}
	n++;
return (write_unsign(0, n, buffer, f_lags, width, prec, size_s));
}

/**
 * format_o - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int format_o(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
int n = BUFF_SIZE - 2;
unsigned long int value = va_arg(content, unsigned lon int);
unsigned long int num = value;
	EMPTY(width);
	value = conv_unsign(value, size_s);
if (value == 0)
	buffer[n--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (value > 0)
{
	buffer[n--] = (value % 8) + '0';
	value = value / 8;
}
if (f_lags & hash_tag && num != 0)
	buffer[n--] = '\0';
n++;
return (write_unsign(0, n, buffer, width, f_lags, prec, size_s));
}
