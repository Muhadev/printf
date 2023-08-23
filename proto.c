#include "main.h"

/**
 * allow_print - print char if possible
 * @ch: character
 * Return: 1 if allowed and 0 if not.
 */
int allow_print(char ch)
{
if (ch >= 32 && ch < 127)
return (1);
return (0);
}

/**
 * apply_hexa - apply ascii hexa
 * @buffer: characters array
 * @n: to loop through the array
 * @ascii_pro: ascii prototype
 * Return:  3
 */
int apply_hexa(char ascii_pro, char buffer[], int n)
{
char apply[] = "0123456789ABCDEF";
if (ascii_pro < 0)
{
	ascii_pro = ascii_pro * -1;
}
	buffer[n++] = '\\';
	buffer[n++] = 'x';
	buffer[n++] = apply[ascii_pro / 16];
	buffer[n] = apply[ascii_pro % 16];
return (3);
}

/**
 * coop - check if it is a character
 * @ch: characters
 * Return: 1 if allowed and 0 if not.
 */

int coop(char ch)
{
if (ch >= '0' && ch <= '9')
return (1);
return (0);
}

/**
 * conv_size - convert number space
 * @n: number to work on
 * @size_s: for the type to be add
 * Return: casted value
 */

long int conv_size(long int n, int size_s)
{
if (size_s == TWO_VAL)
return (n);
else if (size_s == ONE_VAL)
return ((short)n);
return ((int)n);
}

/**
 * conv_unsign - convert number space
 * @n: number to work on
 * @size_s: for the type to be add
 * Return: casted value
 */ 

long int conv_unsign(unsigned long int n, int size_s)
{
if (size_s == TWO_VAL)
return (n);
else if (size_s == ONE_VAL)
return ((short)n);
return ((int)n);
}
