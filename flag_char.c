#include "main.h"

/**
 * flag_char - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags
 * Return: 1 if a flag has been turned on, 0 otherwise
 */

int flag_char(char c, flags_t *f)
{
    int i = 0;

    switch (c)
    {
    case '+':
        f->plus = 1;
        i = 1;
        break;
    case ' ':
        f->space = 1;
        i = 1;
        break;
    case '#':
        f->hash = 1;
        i = 1;
        break;
    }

    return (i);
}
