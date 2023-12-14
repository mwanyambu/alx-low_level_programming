#include "search_algos.h"

/**
 * linear_search - looks for a value in an array of integers
 * @array: pointer to first element in array to search
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: value index else -1 if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (x < size)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
