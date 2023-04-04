#include "lists.h"
#include <stdio.h>

/**
 * print_listint - displays all elements of listint_t
 * @h: pointer to head of listint_t
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_nodes);
}
