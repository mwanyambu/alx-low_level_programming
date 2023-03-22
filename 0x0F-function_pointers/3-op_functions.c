#include "3-calc.h"

/**
 * op_add - calculates sum of two ints
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference  of two ints
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of two ints
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of the  division of two ints
 * @a: first integer
 * @b: second integer
 * Return: result of division  of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two ints
 * @a: first integer
 * @b: second integer
 * Return: remainder of division  of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
