#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @sep: the string to be printed between two numbers
 * @n: number of ints
 * @...; A variable of a number of args
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list ints;
	unsigned int index;

	va_start(ints, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ints, int));

		if (index != (n - 1) && sep != NULL)
		{
			printf("%s", sep);
		}
	}
	printf("\n");
	va_end(ints);
}
