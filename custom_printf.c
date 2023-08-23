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
	cond cond_t[] = {
		{'b', format_b}, {'x', format_x}, {'X', format_X},
		{'o', format_o}, {'u', format_u}, {'c', format_c},
		{'i', format_i}, {'s', format_s}, {'d', format_d},
		{'%', format_mod}, {'p', format_p}, {'S', format_S},
		{'r', format_r}, {'R', format_R}, {'\0', NULL}
};
for (n = 0; cond_t[n].format != '\0'; n++)
if (format[*pt] == cond_t[n].format)
return (cond_t[n].f(arguments, buffer, f_lags, width,
	prec, size_s));
if (cond_t[n].format == '\0')
{
if (format[*pt] == '\0')
return (-1);
	num = num + write(1, "%%", 1);
if (format[*pt - 1] == ' ')
	num = num + write(1, " ", 1);
else if (width)
{
	--(*pt);
while (format[*pt] != ' ' && format[*pt] != '%')
	--(*pt);
if (format[*pt] == ' ')
	--(*pt);
return (1);
}
	num = num + write(1, format[*pt], 1);
return (num);
}
return (chars_count);
}
