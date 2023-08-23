#include "main.h"


/**
 * add_flag - find flags
 * @format: format strings
 * @n: variable
 * Return: check flags
 */

int add_flags(const char *format, int *n)
{
int a, len;
int f_lags = 0;

const char flags_symbol[] = {'-', '+', '0', '#', ' ', '\0'};
const int flags_name[] = {minus, plus, zero, hash_tag, space, 0};
for (len = *n + 1; format[len] != '\0'; len++)
{
for (a = 0; flags_symbol[a] != '\0'; a++)
if (format[len] == flags_symbol[a])
{
	f_lags |= flags_name[a];
break;
}
if (flags_symbol[a] == 0)
break;
}
	*n = len - 1;
return (f_lags);
}
