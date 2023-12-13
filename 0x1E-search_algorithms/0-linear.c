#include "search_algos.h"

/*
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element in array to search
 * @size: number of elements in array
 * @value: value to be searched for
 * Return: value index else -1 if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		printf("Value checked array [%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
