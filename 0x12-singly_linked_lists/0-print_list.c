#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of list_t
 * @h: a pointer to list_t
 * Return: number of nodess in list_t
 */
size_t print_list(const list_t *h) /* prototype */
{
	size_t nodes = 0; /* initialise the number of nodes to zero */

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
