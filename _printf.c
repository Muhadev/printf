#include "main.h"

/**
 * _printf - prints
 * @format: the format
 * Return: number printed *
*/

int _printf(const char *format, ...)
{
	int tt = 0;
	va_list ar;
	char *p, *str;
	prm_t prm = PRM_INIT;

	va_start(ar, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_prm(&prm, ar);
		if (*p != '%')
		{
			tt += _putchar(*p);
			continue;
		}
		str = p;
		p++;
		while (get_flag(p, &prm, ar))
		{
			p++;
		}
		p = get_width(p, &prm, ar);
		p = get_precision(p, &prm, ar);
		if (get_modifier(p, &prm))
			p++;
		if (get_specifier(p))
			tt += print_from_to(str, p,
				prm.l_modifier || prm.h_modifier ? p - 1 : 0);
		else
			tt += get_print_func(p, ar, &prm);
	}
	_putchar(BUF_FLUSH);
	va_end(ar);
	return (tt);
}
