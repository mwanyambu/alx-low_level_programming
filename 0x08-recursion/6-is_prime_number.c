#include "main.h"

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
 * @i: divisor
 * Return: 1 if prime else 0
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < 1)
	{
		return (1);
	}
	return (prime(n, i + 1));
}
