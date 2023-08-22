#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
char BUFF[1024];
int index;
if (c != -1)
{
	BUFF[index] = c;
	index++;
if (i >= 1024)
	move_buff(BUFF, &index);
}
else if (index > 0)
{
	move_buff(BUFF, &index);
}
return (1);
}

void move_buff (char *BUFF, int *index)
{
	write(1, BUFF, *index);
	*i = 0;
}
