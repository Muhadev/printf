#include "main.h"
/**
 * _printf - writes to stdout according to data format.
 * @format: string to be written
 * Return: num of char printed.
 */
int _printf(const char *format, ...)
{
	/*char ch;*/
	int i = 0, n_fprinted = 0;
	va_list args;

	if (!format) /* NULL value passed */
		return (-1);

	va_start(args, format);
	while (format[i])/* Iterate through arguments */
	{
		if (format[i] == '%') /*An accepted format specified */
		{
			formatsp(format + i, args, &n_fprinted);
			format++;/*Skip the actual fmt specifier*/
		}
		else if (format[i] == '\0')
		{
			break;
		}
		else /* No format specifier */
		{
			_putchar(format[i], 1);
			n_fprinted++;
		}
		i++;
	}
	va_end(args);

	return (n_fprinted);
}
