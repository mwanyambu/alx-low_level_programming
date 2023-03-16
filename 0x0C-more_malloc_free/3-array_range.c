#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *range, x = 0, y = min;

	if (min > max)
	{
		return (0);
	}
	range = malloc((max - min + 1) * sizeof(int));
	if (!range)
	{
		return (0);
	}
	while (x <= max - min)
	{
		range[x++] = y++;
	}
	return (range);
}
