#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of parameters
 * @n: amaount pf arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list summ;
	unsigned int x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(summ, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(summ, int);
	}
	va_end(summ);
	return (sum);
}
