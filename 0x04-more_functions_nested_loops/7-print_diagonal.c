#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: number of times thecharcter \ is printed
 * Return: return 0-if n is 0 or less, else return diagonal
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
