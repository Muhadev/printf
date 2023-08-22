#include "main.h"

/**
 * get_flag - Success
 * @s: character
 * @f: pointer
 * Return: 1 if success
 */
int get_flag(char s, flags_t *f)
{
int i = 0;

switch (s)
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
