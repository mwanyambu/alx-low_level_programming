#include "main.h"

/**
 * puts2 - prints every character of a string
 * str: the string
 */
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
