#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;
	const dlistint_t *old = h;

	while (old != NULL)
	{
		old = old->next;
		x++;
	}
	return (x);
}
