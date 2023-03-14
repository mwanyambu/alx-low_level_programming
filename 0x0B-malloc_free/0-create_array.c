#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: initial
 * Return: NULL if size is 0 else return pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		arr[x] = c;
	return (arr);
}

