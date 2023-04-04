#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns num of elements of a linked listsint_t list
 * @h: pointer to head of listint_t
 * Return: num of elements of listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len_nodes = 0;

	while (h != NULL)
	{
		len_nodes++;
		h = h->next;
	}
	return (len_nodes);
}
