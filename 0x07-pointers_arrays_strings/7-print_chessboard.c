#include "main.h"

/**
 * print_chessboard - starting point
 * @a: array
 * Return: array
 */
void print_chessboard(char (*a)[80])
{
	int x;
	int y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
