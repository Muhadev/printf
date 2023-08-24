#include "main.h"

/**
 * design_printf - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @format: string format
 * @buffer: array of buffer
 * @pt: informations
 * @arguments: variables to be printed
 * @prec: precision
 * Return: character used
 */
int design_printf(const char *format, int *pt, va_list arguments,
	char buffer[], int f_lags, int width, int prec, int size_s)
{
int n, num = 0, chars_count = -1;
	cond_t array[] = {
		{'b', format_b}, {'c', format_c},
		{'i', format_i}, {'p', write_pointer},
		{'d', format_i}, {'s', format_s},
		{'S', unknown_print}, {'%', format_mod},
		{'o', format_o}, {'u', format_u},
		{'x', format_hex}, {'X', format_uhex},
		{'\0', NULL}
};
for (n = 0; array[n].format != '\0'; n++)
if (format[*pt] == array[n].format)
return (array[n].fun(arguments, buffer, f_lags, width,
	prec, size_s));
if (array[n].format == '\0')
{
if (format[*pt] == '\0')
return (-1);
	num += write(1, "%%", 1);
if (format[*pt - 1] == ' ')
	num += write(1, " ", 1);
else if (width)
{
	--(*pt);
while (format[*pt] != ' ' && format[*pt] != '%')
	--(*pt);
if (format[*pt] == ' ')
	--(*pt);
return (1);
}
	num += write(1, &format[*pt], 1);
return (num);
}
return (chars_count);
}
