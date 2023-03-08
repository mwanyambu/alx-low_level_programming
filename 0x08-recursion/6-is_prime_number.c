#include "main.h"
#include <stdio.h>

int prime(int n, int a);
/**
 * is_prime_number - returns a prime number
 * @n: input
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - checks for prime number
 * @n: input
 * @a: divisor
 * Return: 1 if prime else 0
 */
int prime(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a)
	{
		return (1);
	}
	return (prime(n, a + 1));
}
