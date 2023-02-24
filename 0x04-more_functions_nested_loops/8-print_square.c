#include "main.h"

/**
 * print_sqaure - prints a square
 * @size: the size of the sqaure
 * @#: used to print the sqaure
 */
void print_sqaure(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

