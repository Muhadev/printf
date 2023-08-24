#include "main.h"

/**
 * format_hex - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int format_hex(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
return (format_luh(content, "0123456789abcdef", buffer, f_lags,
	'x', width, prec, size_s));
}

/**
 * format_uhex - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int format_uhex(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
return (format_luh(content, "0123456789ABCDEF", buffer, f_lags,
	'X', width, prec, size_s));
}

/**
 * format_luh - display character
 * @f_lags: check flags
 * @apply: array to be used
 * @flag_o: fleag involve
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int format_luh(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s, char flag_o, char apply[])
{
int n = BUFF_SIZE - 2;
unsigned long int valid = va_arg(content, unsigned long int);
unsigned long int num = valid;
	EMPTY(width);
	valid = conv_unsign(valid, size_s);
if (valid == 0)
	buffer[n--] = '0';
buffer[BUFF_SIZE - 1] = '\0';
while (valid > 0)
{
	buffer[n--] = apply[valid % 16];
	valid = valid / 16;
}
if (f_lags & hash_tag && num != 0)
{
	buffer[n--] = flag_o;
	buffer[n--] = '0';
}
	n++;
return (write_unsign(0, n, buffer, f_lags, width, prec, size_s));
}
