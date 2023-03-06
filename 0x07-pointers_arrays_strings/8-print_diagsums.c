#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints out the sum of two diagnols of a square matrix
 * @a: pointer
 * @size: int input
 * Return: sum
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[x * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
