#include "main.h"

/**
 * puts_half - prints half of the strting
 * @str: the string
 */
void puts_half(char str)
{
	int x;
	int y;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 ==1)
	{
		y = (x - 1) / 2;
		y+=1;
	}
	else
	{
		y = x/ 2;
	}
	for  (; y < x; y++)
	{
		_putcha(str[y]);
	}
	_putchar('\n');
}

