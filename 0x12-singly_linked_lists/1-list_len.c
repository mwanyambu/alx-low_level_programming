#include "lists.h"

/**
 * list_len - looks for num of elements in list_t
 * @h: pointer to list_t
 * Return: num of elements in h
 */
size_t list_len(const list_t *h) /* function looks for num of elements */
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
