#include <stdio.h>
#include "math.h"

/**
 * main - prints the largest prime
 * Return: 0
 */
int main(void)
{
	long i maxj;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 1; i <= square; i++)
	{
		if (number % i == 0)
		{
			maxj = number / i;
		}
	}
	printf("%d\n", maxj);
	return (0);
}


