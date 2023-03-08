#include "main.h"
#include <stdio.h>

int _root(int n, int x);
/**
 * _sqrt_recursion - return a squareroot of an integer
 * @n: square
 * Return: root
 */
int _sqrt_recursion(int n)
{
	return (_root(n, 1));
}

/**
 * _root - calculates square root
 * @n: input
 * @x: root
 * Return: square root
 */

int _root(int n, int x)
{
	int rt = x * x;

	if (rt > n)
	{
		return (-1);
	}
	if (rt == n)
	{
		return (x);
	}
	return (_root(n, x + 1));
}

