#include "main.h"

/**
 * _sqrt_recursion - return a squareroot of an integer
 * @n: square
 * Return: root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates square root
 * @n: input
 * @i: root
 * Return: square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

