#include "main.h"

/**
 * write_point - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */

int write_pointer(va_list content, char buffer[],
	int f_lags, int width, int prec, int size_s)
{
char add_tp = 0, make = ' ';
int pt = BUFF_SIZE - 2, i  = 2;
int initial_make = 1;
unsigned long addre_po;
char apply[] = "0123456789abcdef";
void *address = va_arg(content, void *);

	EMPTY(width);
	EMPTY(size_s);
if (address == NULL)
return (write(1, "(nil)", 5));
buffer[BUFF_SIZE - 1] = '\0';
	EMPTY(prec);
	addre_po = (unsigned long)address;
while (addre_po > 0)
{
	buffer[pt--] = apply[addre_po % 16];
	addre_po /= 16;
	i++;
}
if ((f_lags & zero) && !(f_lags & minus))
	make = '0';
if (f_lags & plus)
	add_tp = '+', i++;
else if (f_lags & space)
	add_tp = ' ', i++;
pt++;
return (print_pointer(buffer, pt, i, width,
	f_lags, make, add_tp, initial_make));
}

/**
 * unknown_print - display character
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @buffer: array of buffer
 * @content: informations
 * @prec: precision
 * Return: character used
 */
int unknown_print(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
int n = 0, fmt = 0;
char *string = va_arg(content, char *);
	EMPTY(f_lags);
	EMPTY(width);
	EMPTY(prec);
	EMPTY(size_s);
if (string == NULL)
return (write(1, "(null)", 6));
while (string[n] != '\0')
{
if (allow_print(string[n]))
	buffer[n + fmt] = string[n];
else
	fmt += apply_hexa(string[n], buffer, n + fmt);
n++;
}
	buffer[n + fmt] = '\0';
return (write(1, buffer, n + fmt));
}
