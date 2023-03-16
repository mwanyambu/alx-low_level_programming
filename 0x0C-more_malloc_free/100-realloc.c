#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c, *d;
	unsigned int x;

	if (ptr != NULL)
	{
		c = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	d = malloc(new_size);
	if (d == NULL)
	{
		return (0);
	}
	for (x = 0; x < old_size || x < new_size; x++)
	{
		*(d + x) = c[x];
	}
	free(ptr);
	return (d);
}
