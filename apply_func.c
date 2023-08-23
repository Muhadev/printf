#include "main.h"

/**
 * apply_func - search for the specifier
 * @letter: assign variable
 * Return: function
 */

int (*apply_func(char letter))(va_list)
{
int integer = 0;
	offset cond[] = {
		{"%", format_mod},
		{"d", format_d},
		{"i", format_i},
		{"c", format_c},
		{"s", format_s},
		{"b", format_b},
		{NULL, NULL}
};
while (cond[integer].NoNull != NULL)
{
if (letter == cond[integer].NoNull[0])
return (cond[integer].str);
	integer++;
}
return (NULL);
}
