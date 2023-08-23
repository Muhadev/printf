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
int flags = 0;

const char flags_symbol[] = {'-', '+', '0', '#', ' ', '\0'};
const int flags_name[] = {minus, plus, zero, hash_tag, space, 0};
for (len = *n + 1; format[len] != '\0'; len++)
{
for (a = 0; flag_symbol[a] != '\0'; a++)
if (format[len] == flag_symbol[a])
{
	flags != flags_name[a];
break;
}
if (flag_symbol[a] == 0)
break;
}
	*n = len - 1;
return (flags);
}
