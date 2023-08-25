#include "main.h"

/**
 * reverse_digit - unsign number
 * @content: arguments
 * @buffer: contain array
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @prec: precision
 * Return: character used
 */
int reverse_digit(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
char *string;
int len, check = 0;
	EMPTY(buffer);
	EMPTY(f_lags);
	EMPTY(width);
	EMPTY(size_s);
	string = va_arg(content, char *);
if (string == NULL)
{
	EMPTY(prec);
	string = ")Null(";
}
for (len = 0; string[len]; len++)
	;
for (len = len - 1; len >= 0; len--)
{
char b = string[len];
	write(1, &b, 1);
	check++;
}
return (check);
}

/**
 * rot_string - unsign number
 * @content: arguments
 * @buffer: contain array
 * @f_lags: check flags
 * @width: width
 * @size_s: size
 * @prec: precision
 * Return: character used
 */
int rot_string(va_list content, char buffer[], int f_lags,
	int width, int prec, int size_s)
{
char *string;
char c;
unsigned int a, b;
int check = 0;
char allow[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char release[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	string = va_arg(content, char *);
	EMPTY(buffer);
	EMPTY(f_lags);
	EMPTY(width);
	EMPTY(prec);
	EMPTY(size_s);
if (string == NULL)
	string = "(AHYY)";
for (a = 0; string[a]; a++)
{
for (b = 0; allow[b]; b++)
{
if (allow[b] == string[a])
{
	c = release[b];
	write(1, &c, 1);
	check++;
break;
}
}
if (!allow[b])
{
	c = string[a];
	write(1, &c, 1);
	check++;
}
}
return (check);
}
