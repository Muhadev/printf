#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * format_c - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int format_c(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
char characters;
	characters = va_arg(content, int);
return (design_char(characters, buffer, f_lags, prec, width, size_s));
}

/**
 * format_mod - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */

int format_mod(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
return (write(1, "%%", 1);
}
/**
 * format_s - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */

int format_s(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
char *string;
int i = 0;
int num;
	string = va_arg(arguments, char*);
if (string == NULL)
{
	string = "(null)";
if (prec >= 6)
	string = " ";
while (string[i] != '\0')
{
	i++;
if (prec >= 0 && prec < i)
	i = prec;
if (width > i)
{
if (f_lags & get_fmt)
{
	write(1, &string[0], i);
for (num = width - i; num > 0; num--)
{
	write(1, " ", 1);
}
return (width);
}
}
return (write(1, string, i));
}
