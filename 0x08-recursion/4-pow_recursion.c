#include "main.h"

/**
 * _pow_recursion - returns the power of an integer input
 * @x: integer input
 * @y: integer power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
