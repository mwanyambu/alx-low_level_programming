#include "main.h"

/**
 * print_line - draws a straight line from point a to b
 * @n: number of times a character should be printed
 * Return: return empty
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
