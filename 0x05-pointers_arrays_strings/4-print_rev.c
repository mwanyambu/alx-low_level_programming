#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: the string
 */
void print_rev(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t++;
	}
	for (t -= 1; t >=0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}

